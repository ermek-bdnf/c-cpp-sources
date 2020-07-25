//3. Abstract Factory
#include<iostream>
#include<string>
using namespace std;

class Chair //abstract (interface) class
{
	public:
		virtual void useChair() = 0; //purely virtual method
};

class VictorianChair : public Chair
{
	public:
		void useChair() override
		{
			cout << "Victorian style chair";
		}
};

class ModernChair : public Chair
{
	public:
		void useChair() override
		{
			cout << "Modern style chair";
		}
};

class Table //abstract (interface) class
{
	public:
		virtual void useTable(Chair* chair) = 0; //purely virtual method
};

class VictorianTable : public Table
{
	public:
		void useTable(Chair* chair) override
		{
			cout << "Victorian style table with ";
			chair->useChair();
		}
};

class ModernTable : public Table
{
	public:
		void useTable(Chair* chair) override
		{
			cout << "Modern style table with ";
			chair->useChair();
		}
};

class Factory
{
	public:
		virtual Chair* createChair() = 0;
		virtual Table* createTable() = 0;
};

class VictorianFactory : public Factory
{
	public:
		Chair* createChair() override
		{
			return new VictorianChair();
		}
		Table* createTable()
		{
			return new VictorianTable();
		}
};

class ModernFactory : public Factory
{
	public:
		Chair* createChair() override
		{
			return new ModernChair();
		}
		Table* createTable() override
		{
			return new ModernTable();
		}
};

int main()
{
	Factory *factoryV = new VictorianFactory();
	Chair* chairV = factoryV->createChair();
	Table* tableV = factoryV->createTable();
	tableV->useTable(chairV);
	cout << endl;
	Factory *factoryM = new ModernFactory();
	Chair* chairM = factoryM->createChair();
	Table* tableM = factoryM->createTable();
	tableM->useTable(chairM);
	return 0;
}
