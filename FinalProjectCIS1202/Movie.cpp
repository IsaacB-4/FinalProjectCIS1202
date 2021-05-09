#include "Movie.h"

//Accessors
string Movie::getDirector()
{
	return director;
}
int Movie::getBudget()
{
	return budget;
}
int Movie::getRunTime()
{
	return runTime;
}

//Mutators
void Movie::setDirector(string holder)
{
	director = holder;
}
void Movie::setBudget(int holder)
{
	budget = holder;
}
void Movie::setRunTime(int holder)
{
	holder = runTime;
}