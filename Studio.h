#pragma once
#include <iostream>
#include <string>
#include <list>
#include "Movie.h"

using namespace std;
class Movie;
class Studio
{
public:
	int StudioId;
	string StudioName;
	string StudioInfo;
	list <Movie*> movies;

	Studio();
	~Studio();

	void addStudio(int StudioId, string StudioName, string StudioInfo, list<Movie*> movies);
	void deleteStudio(int StudioId);
	void showStudio();
	void editStudio(int StudioId, string StudioName, string StudioInfo, list<Movie*> movies);
};

