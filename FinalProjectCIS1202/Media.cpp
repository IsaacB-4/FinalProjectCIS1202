#include "Media.h"

//Accessors
string Media::getTitle()
{
	return title;
}
Format Media::getType()
{
	return type;
}
int Media::getYear()
{
	return date;
}

//Mutators
void Media::set(string holder)
{
	title = holder;
}
void Media::set(Format holder)
{
	type = holder;
}
void Media::set(int holder)
{
	date = holder;
}