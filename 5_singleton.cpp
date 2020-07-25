//5. Singleton
#include<iostream>
#include<string>
using namespace std;

class Singleton
{
	private:
		Singleton()
		{
			
		}
		static Singleton* singleton;
		string value;
		
	public:
		Singleton(const Singleton&) = delete; //delete the copy constructor
		void operator=(const Singleton&) = delete; //delete an assignment ('=') operator
		static Singleton* GetInstance() //static method
		{
			if(singleton == nullptr)
				singleton = new Singleton();
			return singleton;
		}
		string getValue() const
		{
			return value;
		}
		void setValue(string v)
		{
			value = v;
		}
};

Singleton* Singleton::singleton = nullptr;

int main()
{
	Singleton::GetInstance()->setValue("Singleton");
	cout << Singleton::GetInstance()->getValue() << endl;
	return 0;
}
