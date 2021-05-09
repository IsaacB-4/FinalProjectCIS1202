#ifndef MUSIC_H
#define MUSIC_H
#include "Media.h"

class Music :
    public Media
{
protected:
    string artist;
    string label;
public:
    //Default constructor
    Music() : Media()
    {
        artist = "";
        label = "";
    }

    //Accessors
    string getArtist();
    string getLabel();

    //Mutators
    void setArtist(string);
    void setLabel(string);
};
#endif