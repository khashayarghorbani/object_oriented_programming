#pragma once
#include <string>
using namespace std;
class Person
{
protected:
	string name;
	int age;                                                                   
	string address;

public:
	void setName(string name);
	string getName();
	void setAge(int age);
	int getAge();
	void setAddress(string address);
	string getAddress();
	Person();
	Person(string name,int age,string address);
	~Person();
};

