#pragma once
#include <string>
#include "User.h"
#include <vector>
#include <ctime>
using namespace std;
class comments {
public:
	int postId;
	tm* commentTime;
	//picture
	string comment;
	int cntlikes=0;
	bool likes;

	//constractor
	comments(string s,int postid);
	bool isliked();
};

struct details
{
	string nameUser;
	int day;
	int mon;
};
class Post
{
	int id;
	User user;
	string containtPost;
	vector<comments> comment;
	tm* postTime;
	int cntlikes=0;
	bool like;
	//picture
public:
	//constractor

	Post(User user,string s);
	Post();
	void writeComment(string s);
	details Displaypost(string id);
	void DisplayComments();
	bool isliked();
	int getLastId();
	~Post();
};

