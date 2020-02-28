#pragma once
#include "pch.h"
class Manager: public Person
{
private:
	string department;
	double salary;
public:
	void setDepartment(string department);
	void setSalary(double salary);
	string getDepartment();
	double getSalary();
	Manager(string department,double salary);
	Manager();
	~Manager();
	friend ostream& operator<<(ostream& cout, Manager& m);
};

