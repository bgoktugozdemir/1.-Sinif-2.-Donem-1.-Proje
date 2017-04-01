#pragma once
#include <iostream>
#include <string>
#include <list>
#include <ctime>
#include "User.h"

using namespace std;
class User;
class Movie;
class Comment
{
public:
	int CommentId;
	//TODO CommentTime; // için veri tipi ve kütüphane sorunu
	User* UserId;
	Movie* MovieId;
	string comment;

	Comment();
	~Comment();

	void addComment(int CommentId, string comment, User* UserId, Movie* MovieId); //CommentTime eklenecek
	void deleteComment(int CommentId);
	void showComment();
	void editComment(int CommentId, string comment, User* UserId, Movie* MovieId); //CommentTime eklenecek

};
