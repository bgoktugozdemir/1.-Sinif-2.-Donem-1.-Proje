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
	/*
	//Stüdyo Ekleme
	void addStudio(int StudioId, string StudioName, string StudioInfo, list<Movie*> movies);
	//Stüdyo Silme
	void deleteStudio(int StudioId);
	//Stüdyo Görüntüleme
	void showStudio();
	//Stüdyo Düzenleme
	void editStudio(int StudioId, string StudioName, string StudioInfo, list<Movie*> movies);
	*/
};

