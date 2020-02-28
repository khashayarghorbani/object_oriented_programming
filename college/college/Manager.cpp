#include "pch.h"
#include "Manager.h"
void Manager::setDepartment(string department) {
	this->department = department;

}
void Manager::setSalary(double salary) {
	this->salary = salary;
}
string Manager::getDepartment() {
	return department;
}
double Manager::getSalary() { return salary; }

Manager::Manager(string department,double salary):department{department},salary{salary}
{
}
Manager::Manager()
{
	department = "no department";
	salary = 0;
}


Manager::~Manager()
{
}
ostream& operator <<(ostream& cout, Manager& m) {
	cout << "Manager's name: " << m.getName() << endl;
	cout << "Manager's age: " << m.getAge() << endl;
	cout << "Manager's Address: " << m.getAddress() << endl;
	cout << "Manager's department: " << m.department << endl;
	cout << "Manager's salary: " << m.salary << endl;
	return cout;

}