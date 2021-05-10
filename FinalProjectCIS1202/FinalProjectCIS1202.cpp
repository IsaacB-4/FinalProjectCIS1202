//Isaac Booth
//CIS 1202 101
//May 9, 2021

/* This program is a home inventory system that can log your 
collection of music and films and display it for you*/

#include "Media.h"
#include "Music.h"
#include "Movie.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

//Prototypes
int menu();

//Main
int main()
{
	//Class arrays to hold the collection
	const int SIZE = 10;
	Music albums[SIZE]{};
	Movie films[SIZE]{};

	//Variables
	int albumNum = 0, filmNum = 0;
	string tempS = "";
	int tempI = 0;

	//Main menu loop
	int choice = 0;
	while (choice != 6)
	{
		choice = menu();

		switch (choice)
		{
		case 1: 
			//User input for the Music class
			cout << "Enter the title: "; cin >> ws; getline(cin, tempS); albums[albumNum].set(tempS);
			cout << " 0 - Other | 1 - Vynil | 2 - CD | 3 - DVD | 4 - Blu-rau\nEnter the format: "; 
			cin >> tempI; if (tempI < 0 || tempI > 4) { cout << "Please entere a value 0-4: "; cin >> tempI; }
			albums[albumNum].set(static_cast<Format>(tempI));
			cout << "Enter the release date: "; cin >> tempI; albums[albumNum].set(tempI);

			cout << "Enter the artist/group name: "; cin >> ws; getline(cin, tempS); albums[albumNum].setArtist(tempS);
			cout << "Enter the label name: "; cin >> ws; getline(cin, tempS); albums[albumNum].setLabel(tempS);
			albumNum++; cout << endl;
			break;
		case 2: 
			//User input for the Movie class
			cout << "Enter the title: "; cin >> ws; getline(cin, tempS); films[filmNum].set(tempS);
			cout << " 0 - Other | 1 - Vynil | 2 - CD | 3 - DVD | 4 - Blu-rau\nEnter the format: ";
			cin >> tempI; if (tempI < 0 || tempI > 4) { cout << "Please entere a value 0-4: "; cin >> tempI; }
			films[filmNum].set(static_cast<Format>(tempI));
			cout << "Enter the release date: "; cin >> tempI; films[filmNum].set(tempI);

			cout << "Enter the directors name: "; cin >> ws; getline(cin, tempS); films[filmNum].setDirector(tempS);
			cout << "Enter the films budget : $"; cin >> tempI; films[filmNum].setBudget(tempI);
			cout << "Enter the run-time in minutes: "; cin >> tempI; films[filmNum].setRunTime(tempI);
			filmNum++; cout << endl;
			break;
		case 3: 
			break;
		case 4: 
			break;
		case 5:
			break;
		}
	}
	return 0;
}

//Main menu
int menu()
{
	int choice = 0;

	//Prints the menu
	cout << "1. Log an album\n";
	cout << "2. Log a movie\n";
	cout << "3. Display music library\n";
	cout << "4. Display movie library\n";
	cout << "5. Display collection info\n";
	cout << "6. Exit the program\n\n";

	//Gets the user selection
	cout << "Enter your selection: ";
	cin >> choice;

	//Input validation
	if (choice < 1 || choice > 6)
	{
		cout << "\nPlease enter a number 1-6: ";
		cin >> choice;
	}
	cout << endl;
	return choice;
}