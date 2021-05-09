#ifndef MEDIA_H
#define MEDIA_H
#include <string>
using namespace std;

//Enumeration
enum Format { OTHER, VYNIL, CD, DVD, BLURAY };
class Media
{
protected:
	string title;
	Format type;
	int date;
public:
	//Default constructor
	Media()
	{
		title = ""; 
		type = OTHER;
		date = 0;
	}

	//Accessors
	string getTitle();
	Format getType();
	int getYear();

	//Mutators
	void set(string);
	void set(Format);
	void set(int);
};
#endif