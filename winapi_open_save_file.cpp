#include<windows.h>
#include<stdio.h>
#include<commdlg.h>

#pragma comment(a, "libcomdlg32.a")

//#define FILE_MENU_NEW 1
#define FILE_MENU_OPEN 2
#define FILE_MENU_SAVE 3
#define FILE_MENU_EXIT 4

#define OPEN_FILE_BUTTON 6
#define SAVE_FILE_BUTTON 9

//#define GENERATE_BUTTON 4

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

void AddMenus(HWND);

void AddControls(HWND);

HWND hMenu, hEdit;

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	WNDCLASSW wc = {0};
	wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hInstance = hInst;
	wc.lpszClassName = L"myWindowClass";
	wc.lpfnWndProc = WndProc;
	if(!RegisterClassW(&wc))
		return -1;
	
	CreateWindowW(L"myWindowClass", 
				L"My Window", 
				WS_OVERLAPPEDWINDOW | WS_VISIBLE,
				100, 100, 400, 400,
				NULL, NULL, NULL, NULL);
	
	MSG msg = {0};
	while(GetMessage(&msg, NULL, NULL, NULL))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	
	return 0;
}

void display_file(char* path)
{
	FILE *file;
	file = fopen(path, "rb");
	fseek(file, 0, SEEK_END);
	ftell(file);
	int _size = ftell(file);
	rewind(file);
	//char *data = new char(_size+1);
	char *data = new char[_size+1];
	fread(data, _size, 1, file);
	data[_size] = '\0';
	
	SetWindowText(hEdit, data);
	
	fclose(file);
}

void open_file(HWND hwnd)
{
	OPENFILENAME ofn;
	char file_name[100];
	ZeroMemory(&ofn, sizeof(OPENFILENAME));
	
	ofn.lStructSize = sizeof(OPENFILENAME);
	ofn.hwndOwner = hwnd;
	ofn.lpstrFile = file_name;
	ofn.lpstrFile[0] = '\0';
	ofn.nMaxFile = 100;
	ofn.lpstrFilter = 
		"All files\0*.*\0Source files\0*.CPP\0Text Files\0*.TXT\0";
	ofn.nFilterIndex = 1;
	
	GetOpenFileName(&ofn); ////commdlg.h
	
	//MessageBox(NULL, ofn.lpstrFile, "", MB_OK);
	
	display_file(ofn.lpstrFile);
}

void write_file(char* path)
{
	FILE *file;
	file = fopen(path, "w");
	
	int _size = GetWindowTextLength(hEdit);
	char *data = new char[_size+1];
	GetWindowText(hEdit, data, _size+1);
	
	fwrite(data, _size+1, 1, file);
	
	fclose(file);
}

void save_file(HWND hwnd)
{
	OPENFILENAME ofn;
	char file_name[100];
	ZeroMemory(&ofn, sizeof(OPENFILENAME));
	
	ofn.lStructSize = sizeof(OPENFILENAME);
	ofn.hwndOwner = hwnd;
	ofn.lpstrFile = file_name;
	ofn.lpstrFile[0] = '\0';
	ofn.nMaxFile = 100;
	ofn.lpstrFilter = 
		"All files\0*.*\0Source files\0*.CPP\0Text Files\0*.TXT\0";
	ofn.nFilterIndex = 1;
	
	GetSaveFileName(&ofn); ////commdlg.h
	
	write_file(ofn.lpstrFile);
	
	//MessageBox(NULL, ofn.lpstrFile, "", MB_OK);
	//display_file(ofn.lpstrFile);
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wp, LPARAM lParam)
{
	int val;
	switch(msg)
	{
		case WM_COMMAND:
			switch(wp)
			{
				//case FILE_MENU_NEW:
				//	break;
				case FILE_MENU_EXIT:
					val = MessageBoxW(hwnd, L"Are you sure?", 
							L"Wait!", MB_YESNO | MB_ICONEXCLAMATION);
					if(val == IDYES)
					{
						DestroyWindow(hwnd);
					}
					break;
				case FILE_MENU_OPEN:
					open_file(hwnd);
					break;
				case FILE_MENU_SAVE:
					save_file(hwnd);
					break;
				case OPEN_FILE_BUTTON:
					open_file(hwnd);
					break;
				case SAVE_FILE_BUTTON:
					save_file(hwnd);
					break;
			}
			break;
		case WM_CREATE:
			AddControls(hwnd);
			AddMenus(hwnd);
			break;
		case WM_DESTROY:
			PostQuitMessage(0);
			break;
		default:
			return DefWindowProc(hwnd, msg, wp, lParam);
	}
	return 0;
}

void AddMenus(HWND hwnd)
{
	HMENU hMenu = CreateMenu();
	HMENU hFileMenu = CreateMenu();
	//HMENU hSubMenu = CreateMenu();
	
	//AppendMenu(hSubMenu, MF_STRING, NULL, "SubMenu Item");
	
	AppendMenu(hFileMenu, MF_STRING, NULL, "New");
	AppendMenu(hFileMenu, MF_STRING, FILE_MENU_OPEN, "Open");
	//AppendMenu(hFileMenu, MF_POPUP, (UINT_PTR)hSubMenu, "Open SubMenu");
	AppendMenu(hFileMenu, MF_SEPARATOR, NULL, NULL);
	AppendMenu(hFileMenu, MF_STRING, FILE_MENU_SAVE, "Save");
	AppendMenu(hFileMenu, MF_STRING, FILE_MENU_EXIT, "Exit");
	
	AppendMenu(hMenu, MF_POPUP, (UINT_PTR)hFileMenu, "File");
	AppendMenu(hMenu, MF_STRING, NULL, "Options");
	AppendMenu(hMenu, MF_STRING, NULL, "Settings");
	AppendMenu(hMenu, MF_STRING, NULL, "Help");
	
	SetMenu(hwnd, hMenu);
}

void AddControls(HWND hwnd)
{
	/*
	hOut = CreateWindowW(L"Edit", L"", WS_VISIBLE | WS_CHILD,
				100, 200, 200, 100, hwnd, NULL, NULL, NULL);
	*/
	CreateWindowW(L"Button", L"Open File", WS_VISIBLE | WS_CHILD,
				10, 10, 150, 40, hwnd, 
				(HMENU) OPEN_FILE_BUTTON, NULL, NULL);
	CreateWindowW(L"Button", L"Save File", WS_VISIBLE | WS_CHILD,
				170, 10, 150, 40, hwnd, 
				(HMENU) SAVE_FILE_BUTTON, NULL, NULL);
	hEdit = CreateWindowW(L"Edit", L"", WS_VISIBLE | WS_CHILD | ES_MULTILINE 
				| WS_BORDER | WS_VSCROLL | WS_HSCROLL,
				10, 60, 360, 300, hwnd, NULL, NULL, NULL);
}
