#include <iostream> 
#include <vector>
#include <cstring>
#include <cctype>
#include <string>
#include "prototype.h"
using namespace std;
void menu() {
	
	cout << "1- conver number to string.\n";
	cout << "2- encrypt and decrypt.\n";
	cout << "0- Exit.\n";
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
		convert();
		menu();
		break;
	case 2:
		key();
		menu();
		break;
	case 0:
		exit(0);
		break;
	default:
		break;
	}
}

void convert() {
	vector<string> number{ "one","two","three","four","five","six","seven","eight","nine","ten" };
	cout << "insert a number\n ";
	int num;
	cin >> num;
	num -= 1;
	if (num > 10)
	{
		cout << "invalid input.\n";
	}
	else {
	cout << "your number is: " << number.at(num) << endl;
	}
	
}

void key() {

	cout << "please insert your name" << endl;
	string name;
	cin >> name;
	for (size_t i = 0; i < name.length(); i++)
	{

		name[i] = name[i] + 1;
	}
	cout << "here is your encrypted code:\n" << name << endl;


	cout << "insert your encrypted code:" << endl;
	string name2;
	cin >> name2;


	for (size_t i = 0; i < name2.length(); i++)
	{
		name2[i] = name2[i] - 1;
	}
	cout << "here is your name:\n" << name2 << endl;
}