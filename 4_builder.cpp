//4. Builder
#include<iostream>
#include<string>
using namespace std;

class House
{
	string aboutHouse;
	
	public:
		House()
		{
			aboutHouse = "";
		}
		string AboutHouse() const
		{
			return aboutHouse;
		}
		void appendFeature(string str)
		{
			aboutHouse += str;
		}
};

class Builder
{
	public:
		virtual void createHouse() = 0;
		virtual void createGarage() = 0;
		virtual void createGarden() = 0;
		
		virtual House* getHouse() = 0;
};

class CityHouseBuilder : public Builder
{
	House* house;
	
	public:
		CityHouseBuilder()
		{
			house = new House();
		}
		~CityHouseBuilder()
		{
			delete house;
		}
		void createHouse() override
		{
			house->appendFeature("City house ");
		}
		void createGarage() override
		{
			house->appendFeature("with underground parking ");
		}
		void createGarden() override
		{
			house->appendFeature("with park ");
		}
		House* getHouse() override
		{
			return house;
		}
};

class CottegeBuilder : public Builder
{
	House* house;
	
	public:
		CottegeBuilder()
		{
			house = new House();
		}
		~CottegeBuilder()
		{
			delete house;
		}
		void createHouse() override
		{
			house->appendFeature("Cottege ");
		}
		void createGarage() override
		{
			house->appendFeature("with garage for 1 car place ");
		}
		void createGarden() override
		{
			house->appendFeature("with farm ");
		}
		House* getHouse() override
		{
			return house;
		}
};

class Director
{
	Builder* builder;
	
	public:
		Director(Builder* b) : builder(b)
		{
			
		}
		void setBuilder(Builder* b)
		{
			builder = b;
		}
		House* BuildMinimalFeatureHouse()
		{
			builder->createHouse();
			return builder->getHouse();
		}
		House* BuildFullFeatureHouse()
		{
			builder->createHouse();
			builder->createGarage();
			builder->createGarden();
			return builder->getHouse();
		}
};

int main()
{
	Builder* builder = new CityHouseBuilder();
	Director director(builder);
	House* house1 = director.BuildMinimalFeatureHouse();
	cout << house1->AboutHouse() << endl;
	
	director.setBuilder(new CityHouseBuilder());
	House* house2 = director.BuildFullFeatureHouse();
	cout << house2->AboutHouse() << endl;
	
	director.setBuilder(new CottegeBuilder());
	House* house3 = director.BuildFullFeatureHouse();
	cout << house3->AboutHouse() << endl;
	
	return 0;
}
