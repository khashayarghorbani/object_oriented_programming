#include "pch.h"
#include "Instructor.h"
void Instructor::setCourse(string course) {

	this->course = course;
}
void Instructor::setClassFee(double classFee) {
	this->classFee = classFee;
}
string Instructor::getCourse() { return course; }
double Instructor::getClassFee() { return classFee; }
ostream& operator<<(ostream& cout, Instructor& i) {
	cout << "instructor's name: " << i.getName() << endl;
	cout << "instructor's age: " << i.getAge() << endl;
	cout << "instructor's Address: " << i.getAddress() << endl;
	cout << "instructor's course: " << i.getCourse() << endl;
	cout << "instructor's class fee: " << i.getClassFee() << endl;
	return cout;
}

Instructor::Instructor()
{
	course = "no course";
	classFee = 0;
}
Instructor::Instructor(string course,double classFee):course{course},classFee{classFee}
{
}


Instructor::~Instructor()
{
}
