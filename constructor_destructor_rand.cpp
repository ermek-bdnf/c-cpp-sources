//Constructor, Destructor, Array, rand
#include<iostream>
#include<ctime>
using namespace std;

class RandClass
{
	private:
		int* data;
	public:
		RandClass(int size)
		{
			data = new int[size];
			srand(time(NULL));
			cout << "Entering a range of random numbers: ";
			int diap;
			cin >> diap;
			cout << "The range of random numbers is equal to: " << diap << endl; 
			cout << "Output of array elements (with the number: " << size << ")" << endl;
			srand(time(NULL));
			bool alreadyThere;
		
			for(int i; i<size; )
			{
				alreadyThere = false;
				int newRandomValue = rand() % diap;
				for(int j=0; j<i; j++)
				{
					if(data[j] == newRandomValue)
					{
						alreadyThere = true;
						break;
					}
				}
				if(!alreadyThere)
				{
					data[i] = newRandomValue;
					i++;
				}
			}
			
			for(int i=0; i<size; i++)
			{
				cout << data[i] << endl;
			}
			cout << data << " - address of the array in dynamic memory" << endl;
			cout << "Object: " << data << "\tconstructor called" << endl;
		}
		
		~RandClass()
		{
			delete[] data;
			cout << "freeing up dynamic memory allocated for the array" << endl;
			cout << "Object: " << data << "\tdestructor called" << endl;
		}
};

void Funk()
{
	cout << "Funk - start of execution" << endl;
	int z;
	cout << "Entering the number of array elements: ";
	cin >> z;
	RandClass a(z);
	cout << "Funk - the end of the execution" << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	Funk();
	return 0;
}
