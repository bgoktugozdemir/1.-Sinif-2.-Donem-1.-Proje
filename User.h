#pragma once
#include <iostream>
#include <string>
#include <list>
#include "Comment.h"
#include "Rating.h"

using namespace std;
class Comment;
class Rating;
class User
{
public:
	int UserId;
	//TODO UserType; (Veri Tipi belli deðil)
	string UserName;
	string UserPassword;
	string UserEmail;
	list <Comment*> comments;
	list <Rating*> ratings;

	User();
	~User();
	
	void addUser(int UserId, string UserName, string UserEmail, list <Comment*> comments, list<Rating*> ratings); //UserType Eklenecek
	void deleteUser(int UserId);
	void showUser();
	void editUser(int UserId, string UserName, string UserEmail, list <Comment*> comments, list<Rating*> ratings); //UserType Eklenecek
};

