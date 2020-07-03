//114. diamond inheritance (virtual inheritance).
#include<iostream>
#include<string>
using namespace std;

class Component
{
	public:
		Component(string companyName)
		{
			cout << "Component constructor" << endl;
			this->companyName = companyName;
		}
		string companyName;
};

class GPU : public Component
{
	public:
		GPU(string companyName) :Component(companyName)
		{
			cout << "GPU constructor" << endl;
		}
};

class Memory : public Component
{
	public:
		Memory(string companyName) :Component(companyName)
		{
			cout << "Memory constructor" << endl;
		}
};

class GraphicCard : public GPU, public Memory
{
	public:
		GraphicCard(string GPUCompanyName, string MemoryCompanyName)
		: GPU(GPUCompanyName), Memory(MemoryCompanyName)
		{
			cout << "GraphicCard constructor" << endl;
		}
};

int main()
{
	GraphicCard gc("AMD", "Silicon Power");
	return 0;
}
