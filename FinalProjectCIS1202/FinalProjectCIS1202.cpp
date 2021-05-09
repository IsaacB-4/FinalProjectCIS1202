//Isaac Booth
//CIS 1202 101
//May 9, 2021

/* This program is a home inventory system that can log your 
collection of music and films and display it in a variety of ways */

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
	int albumNum, filmNum = 0;
	Music albums[SIZE]{};
	Movie films[SIZE]{};

	//Main menu loop
	int choice = 0;
	while (choice != 6)
	{
		choice = menu();

		switch (choice)
		{
		case 1: 
			break;
		case 2: 
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
	cout << "1. Log music\n";
	cout << "2. Log movie\n";
	cout << "3. Display music library\n";
	cout << "4. Display movie library\n";
	cout << "5. Display collection info\n\n";

	//Gets the user selection
	cout << "Enter your selection: ";
	cin >> choice;

	//Input validation
	if (choice < 1 || choice > 6)
	{
		cout << "\nPlease enter a number 1-6: ";
		cin >> choice;
	}

	return choice;
}