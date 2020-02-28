#pragma once
#include "pch.h"
class Instructor: public Person
{
private:
	string course;
	double classFee;
public:
	void setCourse(string course);
	string getCourse();
	void setClassFee(double classFee);
	double getClassFee();
	Instructor(string course, double classFee);
	Instructor();
	~Instructor();
	friend ostream& operator<<(ostream& cout, Instructor& I);
};

