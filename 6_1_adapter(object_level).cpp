//6.1. Adapter (object level adapter)
#include<iostream>
#include<string>
using namespace std;

class Sensor
{
	public:
		virtual float getTemperature() = 0;
		virtual ~Sensor(){}
		
};

class CelsiusSensor : public Sensor
{
	public:
		float getTemperature() override
		{
			//..
			return 20.0;
		}
};

class FahrenheitSensor
{
	public:
		float getFahrengeitTemperature()
		{
			//..
			return 40.0;
		}
};

class AdapterFromFahrenheit : public Sensor
{
	private:
		FahrenheitSensor* fSensor;
		
	public:
		AdapterFromFahrenheit(FahrenheitSensor* p) : fSensor(p) {}
		~AdapterFromFahrenheit(){ delete fSensor; }
		float getTemperature() override
		{
			return (fSensor->getFahrengeitTemperature()-32)*5/9.0;
		}
};

int main()
{
	Sensor *sensor1 = new CelsiusSensor();
	Sensor *sensor2 = new AdapterFromFahrenheit(new FahrenheitSensor());
	cout << sensor1->getTemperature() << endl;
	cout << sensor2->getTemperature() << endl;
		
	return 0;
}
