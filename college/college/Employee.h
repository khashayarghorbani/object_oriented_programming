#pragma once
#include "pch.h"
class Employee: public Person
{
private:
	double hRate;
	int hours;
	string jobTitle;
public:
	void setHrate(double hRate);
	double getHrate();
	void setHours(int hours);
	int getHours();
	void setJobTitle(string jobTitle);
	string getJobtile();
	Employee(double hRate, int hours, string jobTitle);
	friend ostream& operator<< (ostream& cout, Employee& e);
	Employee();
	~Employee();
};

