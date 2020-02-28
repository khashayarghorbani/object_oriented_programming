#pragma once
#include "pch.h"

#include<string>
using namespace std;
class Student:public Person
{
private:
	int studentId;
	string program;
	int coop;
public:
	void setStudentId(int studentId);
	int getStudentId();
	void setProgram(string program);
	string getProgram();
	void setCoop(int coop);
	int getCoop();
	friend ostream& operator << (ostream& cout, Student& s);
	Student();
	Student(int studentId,string program,int coop);
	~Student();
};

