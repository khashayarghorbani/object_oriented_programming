#include "pch.h"
#include "Employee.h"

void Employee::setHrate(double hRate) {
	this->hRate = hRate;

}
void Employee::setHours(int hours) {
	this->hours = hours;
}
void Employee::setJobTitle(string jobTitle) {
	this->jobTitle = jobTitle;
}
double Employee::getHrate() { return hRate; }
int Employee::getHours() { return hours; }
string Employee::getJobtile() { return jobTitle; }
Employee::Employee()
{
	hRate = 0;
	hours = 0;
	jobTitle = "no job title";
}
ostream& operator << (ostream& cout, Employee& e) {

	cout << "Employee's name: " << e.getName() << endl;
	cout << "Employee's age: " << e.getAge() << endl;
	cout << "Employee's Address: " << e.getAddress() << endl;
	cout << "Employee's hour rate: " << e.getHrate() << "$" << endl;
	cout << "Employye's hours: " << e.getHours() << endl;
	cout << "Employye's job title: " << e.getJobtile() << endl;
	return cout;
}
Employee::Employee(double hRate,int hours,string jobTitle):hRate{hRate},hours{hours},jobTitle{jobTitle}
{
}


Employee::~Employee()
{
}
