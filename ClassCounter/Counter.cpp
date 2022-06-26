#include "Counter.h"
using namespace std;


Counter::Counter() : Counter(0) {};
Counter::Counter(double c) : Counter(0, 0.1) {};
Counter::Counter(double c, double i) : Counter( c, 0, 99999, i) {};
Counter::Counter(double c, double min, double max, double i)
{
	Setcounter(c);
	Setmin(min);
	Setmax(max);
	Setstep(i);
}

void Counter::Setcounter(double c)
{
	if (c < 0 || c > 99999)
	{
		cout << "counter incorrect \n";
		counter = 0;
	}
	else
		counter = c;
}

void Counter::Setmin(double min)
{
	min = 0;
}

void Counter::Setmax(double max)
{
	max = 99999;
}

void Counter::Setstep(double i)
{
	if (i > 0 && i < 1) step = i;
	else if (i < 0 || i > 99999) cout << "step incorrect \n";
	else step = 0.1;
}

double Counter::Getcounter() const
{
	return counter;
}

double Counter::Getmax() const
{
	return max;
}

double Counter::Getmin() const
{
	return min;
}

double Counter::Getstep() const
{
	return step;
}

void Counter::IncreaseByOne()
{
	if (counter == 99999) counter = 0;
	else counter += 1;
	cout << "Increase the value of the counter by one: " << counter << "\n";
}

void Counter::IncreaseByStep()
{
	if (counter == 99999) counter = 0;
	else counter += step;
	cout << "Increase the value of the counter by step " << counter << "\n";
}

void Counter::CounterReset()
{
	counter = 0;
	cout << "The counter is resert " << counter << "\n";
}

void Counter::SettingMinValue()
{
	counter = 0;
	cout << "Minimum counter value " << counter << "\n";
}

void Counter::SettingMaxValue()
{
	counter = 99999;
	cout << "Maximum counter value " << counter << "\n";
}

void Counter::Print()
{
	cout << "Value of counter is " << Getcounter() << "\n";
	cout << "Min value of counter is " << Getmin() << "\n";
	cout << "Max value of counter is " << Getmax() << "\n";
	cout << "Counter increment value is " << Getstep() << "\n";
	cout << "\n\n";
}														  