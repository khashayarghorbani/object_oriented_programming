#include<iostream>
#include<vector>
#include <cstring>
#include <cctype>
#include <string>
#include"prototype.h"
using namespace std;

void dynamicArray() {
	int dynamicSize{};
	cout << "Enter the size of the array" << endl;
	cin >> dynamicSize;
	int *myPtr{};
	myPtr = new int[dynamicSize];
	for (size_t i = 0; i < dynamicSize; i++) {
		myPtr[i] = dynamicSize - i;
		cout << myPtr[i] << endl;
	}
}

void printVector(vector<string>* myVector) {

	for (string i : *myVector)
	{
		cout << i << endl;
	}

}
void addToVector(vector<string>* theVector, string* myString) {
	
	(*theVector).push_back(*myString);

	
}
void print2DVector(vector<vector<string>>* Vector2D) {
	for (size_t i = 0; i < Vector2D->size(); i++)
	{
		for (size_t k = 0; k < (*Vector2D).at(i).size(); k++)
		{

		Vector2D->at(i).at(k);
		}
		
		
	}
	
}

vector <string> vectorsDisplay{"List of Movies","List of Games","List of Bands"};
vector <string> movies{};
vector <string> *vectorsDisplayptr{ &vectorsDisplay };
vector <string> games{};
vector <string> bands{};
vector <string> *moviesPtr{ &movies };
vector <string> *gamesPtr{ &games };
vector <string> *bandsPtr{ &bands };
string myString;
vector<vector<string>> Vector2D{ {movies},{games},{bands} };
vector<vector<string>> *Vector2DPtr{&Vector2D};
string *ptrString{ &myString };

void menu() {

	int choice,add;
	cout << "Menu Demonstration" << endl;
	cout << "*****************************" << endl;
	cout << "1-display my vectors" << endl;
	cout << "2-Add a string to the vector" << endl;
	cout << "3-Print Vector" << endl;
	cout << "4-Concatenate vectors" << endl;
	cout << "5-Dynamic Array" << endl;
	cout << "6-Exit" << endl;
	cout << "*****************************" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		printVector(vectorsDisplayptr);
		back();
		break;

	case 2:
		cout << "please choose a list" << endl;
		cout << "1-movies" << endl;
		cout << "2-games" << endl;
		cout << "3-bands" << endl;
		cin >> add;
		switch (add)
		{ 
		case 1:
			cout << "give me a name for a movie: " << endl;
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			getline(cin, myString);
			
			addToVector(moviesPtr, ptrString);
			cout << " " << endl;
			cout << "your movie is added to the vector." << endl;
			
			back();
			break;
		case 2:
			cout << "give me a name for a game: " << endl;
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			getline(cin, myString);
			addToVector(gamesPtr, ptrString);
			cout << " " << endl;
			cout << "your game is added to the vector." << endl;
			back();
			break;
		case 3:
			cout << "give me a name for a band: " << endl;
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			getline(cin, myString);
			addToVector(bandsPtr, ptrString);
			cout << " " << endl;
			cout << "your band is added to the vector." << endl;
			back();
			break;
		default:
			break;
		}
		break;
	case 3:
		cout << "please choose a list to print:" << endl;
		cout << "1-movies" << endl;
		cout << "2-games" << endl;
		cout << "3-bands" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "this is the list of your movies" << endl;
			cout << " " << endl;
			printVector(moviesPtr);
			back();
			break;
		case 2:
			printVector(gamesPtr);
			back();
			break;
		case 3:
			printVector(bandsPtr);
			back();
			break;
		default:
			break;
		}
		break;
	case 4:
		
		back();
		break;

	case 5:
		dynamicArray();
		back();
		break;

	default:
		break;
	}




}
void back() {
	int choice;
	cout << " " << endl;
	cout << "press 1 if you want to go back" << endl;
	cout << "press 0 to exit." << endl;
	cin >> choice;
	if (choice == 1)
	{
		menu();
	}
	else if(choice == 0){
		exit(0);
	}
	else {
		cout << "Invalid input try again.";
		back();
	}


}