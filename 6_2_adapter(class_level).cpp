//6.2 Adapter (class level adapter)
#include<iostream>
#include<string>
using namespace std;

class Sensor
{
	public:
		virtual float getTemperature() = 0;
		virtual void adjust() = 0;
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
		void adjust() override
		{
			//..
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
	protected:
		void adjust()
		{
			//..
		}
};

class AdapterFromFahrenheit : public Sensor, private FahrenheitSensor
{
	public:
		AdapterFromFahrenheit(){}
		~AdapterFromFahrenheit(){}
		float getTemperature() override
		{
			return (getFahrengeitTemperature()-32)*5/9.0;
		}
		void adjust() override
		{
			FahrenheitSensor::adjust();
		}
};

int main()
{
	Sensor *sensor1 = new CelsiusSensor();
	Sensor *sensor2 = new AdapterFromFahrenheit();
	cout << sensor1->getTemperature() << endl;
	cout << sensor2->getTemperature() << endl;
	sensor1->adjust();
	sensor2->adjust();
	return 0;
}
