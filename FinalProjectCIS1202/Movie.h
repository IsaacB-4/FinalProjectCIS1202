#ifndef MOVIE_H
#define MOVIE_H
#include "Media.h"
class Movie :
    public Media
{
protected:
    string director;
    int budget;
    int runTime;

public:
    Movie() : Media()
    {
        director = "";
        budget = 0, runTime = 0;
    }

    //Accessors
    string getDirector();
    int getBudget();
    int getRunTime();

    //Mutators
    void setDirector(string);
    void setBudget(int);
    void setRunTime(int);
};
#endif