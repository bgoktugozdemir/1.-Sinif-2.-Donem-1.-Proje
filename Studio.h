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
	//St�dyo Ekleme
	void addStudio(int StudioId, string StudioName, string StudioInfo, list<Movie*> movies);
	//St�dyo Silme
	void deleteStudio(int StudioId);
	//St�dyo G�r�nt�leme
	void showStudio();
	//St�dyo D�zenleme
	void editStudio(int StudioId, string StudioName, string StudioInfo, list<Movie*> movies);
	*/
};

