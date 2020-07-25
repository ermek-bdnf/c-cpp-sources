//6. array stl
#include<iostream>
#include<array>

using namespace std;

int main()
{
	array<int, 6> arr = {6, 6, 666, 4, 999, 4};
	//arr.fill(666);
	cout << "first element: " << arr.front() << endl;
	cout << "last elemnt: " << arr.back() << endl;
	/*cout << endl << "for" << endl << endl;
	for(int i = 0; i < arr.size(); ++i)
	{
		cout << arr[i] << endl;
	}
	cout << endl << "for each" << endl << endl;
	for(auto el : arr)
	{
		cout << el << endl;
	}
	//cout << arr[0] << endl;
	//cout << arr.at(11) << endl;
	//at - вызовет исключение, 
	//если запрос выше за границу.
	//а arr[] - нет.
	/*try
	{
		cout << arr.at(11) << endl;
	}
	catch (const std::exception&ex)
	{
		cout << ex.what() << endl;
	}
	/*array<int, 4> arr;
	cout << arr[0] << endl;
	*/
	return 0;
}
