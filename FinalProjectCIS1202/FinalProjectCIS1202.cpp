//Isaac Booth
//CIS 1202 101
//May 9, 2021

/* This program is a home inventory system that can log your 
collection of music and films and display it for you*/

#include "Media.h"
#include "Music.h"
#include "Movie.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Prototypes
int menu();
string mediaFormat(Format);

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
			cout << " 0 - Other | 1 - Vinyl | 2 - CD | 3 - DVD | 4 - Blu-rau\nEnter the format: "; 
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
			cout << " 0 - Other | 1 - Vinyl | 2 - CD | 3 - DVD | 4 - Blu-rau\nEnter the format: ";
			cin >> tempI; if (tempI < 0 || tempI > 4) { cout << "Please entere a value 0-4: "; cin >> tempI; }
			films[filmNum].set(static_cast<Format>(tempI));
			cout << "Enter the release date: "; cin >> tempI; films[filmNum].set(tempI);

			cout << "Enter the directors name: "; cin >> ws; getline(cin, tempS); films[filmNum].setDirector(tempS);
			cout << "Enter the films budget : $"; cin >> tempI; films[filmNum].setBudget(tempI);
			cout << "Enter the run-time in minutes: "; cin >> tempI; films[filmNum].setRunTime(tempI);
			filmNum++; cout << endl;
			break;
		case 3: 
			//Loops through the Music classes and diplays thier data
			for (int counter = 0; albumNum > counter; counter++)
			{
				cout << "Album #" << (counter + 1) << "\n\n";
				cout << "Album title: " << albums[counter].getTitle() << endl;
				cout << "Format: " << mediaFormat(albums[counter].getType()) << endl;
				cout << "Release date: " << albums[counter].getYear() << endl;
				cout << "Artist/Group: " << albums[counter].getArtist() << endl;
				cout << "Label: " << albums[counter].getLabel() << endl << endl;
			}
			break;
		case 4: 
			//Loops through the Movie classes and diplays thier data
			for (int counter = 0; filmNum > counter; counter++)
			{
				cout << "Film #" << (counter + 1) << "\n\n";
				cout << "Film title: " << films[counter].getTitle() << endl;
				cout << "Format: " << mediaFormat(films[counter].getType()) << endl;
				cout << "Release date: " << films[counter].getYear() << endl;
				cout << "Director: " << films[counter].getDirector() << endl;
				cout << "Budget: $" << films[counter].getBudget() << endl;
				cout << "Run-time: " << films[counter].getRunTime() << "min\n\n";
			}
			break;
		case 5:
			//Finds the average year of the albums and average budget and run time of the films
			double avgDate = 0.0, avgBudget = 0.0, avgRunTime = 0.0;
			for (int counter = 0; albumNum > counter; counter++)
			{
				avgDate += albums[counter].getYear();
			}
			cout << "The average release date of your records is " << round(avgDate / static_cast<double>(albumNum)) << "\n\n";
			for (int counter = 0; filmNum > counter; counter++)
			{
				avgBudget += films[counter].getBudget();
				avgRunTime += films[counter].getRunTime();
			}
			cout << "The average budget of your films is $" << round(avgBudget / static_cast<double>(filmNum)) << "\n\n";
			cout << "The average run-time of your films is " << round(avgRunTime / static_cast<double>(filmNum)) << "min\n\n";
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
	cout << "5. Display collection averages\n";
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

//Translates the enum to a string
string mediaFormat(Format type)
{
	string holder;
	switch (type)
	{
	case 0: holder = "Other";
		break;
	case 1: holder = "Vinyl";
		break;
	case 2: holder = "CD";
		break;
	case 3: holder = "DVD";
		break;
	case 4: holder = "Blu-ray";
		break;
	}
	return holder;
}