#pragma once
#include <string>
#include <list>
#include "Studio.h"
#include "Comment.h"

using namespace std;
class Studio;
class Rating;
class Movie
{
public:
	int MovieId;
	string MovieTitle;
	string MovieGenre;
	string MovieReleaseYear;
	string MovieLanguage;
	float MovieRating;
	string MovieCensorship;
	string MovieStory;
	unsigned int MovieBudget;
	list <Studio*> studio;
	list <Comment*> comments;
	list <Rating*> ratings;

	Movie();
	~Movie();
	/*
	void addMovie(int MovieId, string MovieTitle, string MovieGenre, string MovieReleaseYear, string MovieLanguage, float MovieRating, string MovieCensorship, string MovieStory, unsigned int MovieBudget, list <Studio*> studio, list <Comment*> comments, list <Rating*> ratings);
	void deleteMovie(int MovieId);
	void showMovie();
	void editMovie(int MovieId, string MovieTitle, string MovieGenre, string MovieReleaseYear, string MovieLanguage, float MovieRating, string MovieCensorship, string MovieStory, unsigned int MovieBudget, list <Studio*> studio, list <Comment*> comments, list <Rating*> ratings);
	*/
};

