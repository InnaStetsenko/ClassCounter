#include <iostream>

class Counter
{
	double counter;
	double min;
	double max;
	double step;

public:
	
	Counter();
	Counter(double c);
	Counter(double min, double max);
	Counter(double c, double min, double max, double i);

	void Setcounter(double c);
	void Setmin(double min);
	void Setmax(double max);
	void Setstep(double i);
	double Getcounter() const;
	double Getmin() const;
	double Getmax() const;
	double Getstep() const;

	void IncreaseByOne();
	void IncreaseByStep();
	void CounterReset();
	void SettingMinValue();
	void SettingMaxValue();
	void Print();
};