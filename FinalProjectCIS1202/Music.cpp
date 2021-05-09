#include "Music.h"

//Accessors
string Music::getArtist()
{
	return artist;
}
string Music::getLabel()
{
	return label;
}

//Mutators
void Music::setArtist(string holder)
{
	artist = holder;
}
void Music::setLabel(string holder)
{
	label = holder;
}