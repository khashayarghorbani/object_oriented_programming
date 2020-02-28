// college.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	Student *newStudent = new Student;
	Employee *newEmployee = new Employee;
	Instructor *newInstructor = new Instructor;
	Manager *newManager = new Manager;


	newManager->setName("Sam");
	newManager->setAge(34);
	newManager->setAddress("Vancouver");
	newManager->setDepartment("granvil");
	newManager->setSalary(4500);

	newInstructor->setName("Andre");
	newInstructor->setAge(29);
	newInstructor->setAddress("Vancouver");
	newInstructor->setClassFee(290);
	newInstructor->setCourse("IT");

	newEmployee->setName("John");
	newEmployee->setAge(31);
	newEmployee->setAddress("Beautiful british columbia.");
	newEmployee->setHours(40);
	newEmployee->setHrate(18.15);
	newEmployee->setJobTitle("receptionist");
	
	newStudent->setName("Khashayar");
	newStudent->setAge(19);
	newStudent->setAddress("BC,Vancouver");
	newStudent->setStudentId(1);
	newStudent->setProgram("IT");
	newStudent->setCoop(1);
	cout << *newStudent;
	cout << "_________________" << endl;
	cout << *newEmployee;
	cout << "_________________" << endl;
	cout << *newInstructor;
	cout << "_________________" << endl;
	cout << *newManager;
}

