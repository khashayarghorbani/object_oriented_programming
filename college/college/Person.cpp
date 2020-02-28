#include "pch.h"
#include "Person.h"
#include<string>
using namespace std;
void Person::setName(string name) {
	this->name = name;
}
void Person::setAddress(string address) {
	this->address = address;

}
void Person::setAge(int age) {
	this->age = age;

}
string Person::getName() { return name; }
string Person::getAddress() { return address; }
int Person::getAge() { return age; }
Person::Person() {
	name = "no name";
	age = 0;
	address = "no addi";
}
Person::Person(string name,int age,string address):name{name},age{age},address{address}
{
}


Person::~Person()
{                                                                                                          
}
