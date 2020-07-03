//96. array of class objects
#include<iostream>
#include<string>

using namespace std;

class Pixel //inner class
{
	public:
		Pixel()
		{
			r = g = b = 0;
		}
		
		Pixel(int r, int g, int b)
		{
			this->r = r;
			this->g = g;
			this->b = b;
		}
		string GetInfo()
		{
			return "Pixel r=" + to_string(r) + " g=" + to_string(g) +
			 " b=" + to_string(b);
		}
		private:
			int r;
			int g;
			int b;
		};

class Image
{
	public:
		void GetImageInfo()
		{
			for(int i=0; i<LENGTH; i++)
			{
				cout << "Number:" << i << " " << pixels[i].GetInfo() << endl;
			}
		}
		
	private:
		static const int LENGTH = 4;
		Pixel pixels[LENGTH]
		{
			Pixel(0,4,64),
			Pixel(4,14,10),
			Pixel(111,4,24),
			Pixel(244,244,44)
		};
};

int main()
{
	int LENGTH = 4;
	//Pixel *arr;
	Pixel *arr = new Pixel[LENGTH];
	arr[0] = Pixel(11,141,44);
	
	cout << arr[0].GetInfo() << endl;
	delete[]arr;
	
	//delete[]arr;
	
	//const int LENGTH = 4;
	//Pixel arr[LENGTH];
	
	/*
	Pixel arr[LENGTH]
	{
		Pixel(11,160,222),
		Pixel(121,162,224),
		Pixel(11,110,262),
		Pixel(11,16,22)
	};
	*/
	//cout << arr[0].GetInfo() << endl;
	//Pixel r=11 g=160 b=222
	
	//Pixel(11,160,222);
	//cout << arr[0].GetInfo() << endl;
	
	//cout << arr[0].GetInfo() << endl;
	//Pixel r=0 g=0 b=0
	
	//Image im;
	//im.GetImageInfo();
	return 0;
}
