#pragma once
#include <list>

class User;
class Movie;
class Rating
{
public:
	int RatingId;
	User *UserId;
	Movie* MovieId;
	float rating;

	Rating();
	~Rating();

	void addVote(int RatingId, float rating, User *UserId, Movie *MovieId);
	void showVote();
};

