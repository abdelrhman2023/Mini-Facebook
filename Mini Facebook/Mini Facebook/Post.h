#pragma once
#include <string>
#include "User.h"
#include <vector>
#include <ctime>
#include"Comment.h"
using namespace std;

//struct details
//{
//	string nameUser;
//	int day;
//	int mon;
//};


class Post
{
private:
	string content;
	time_t postTime;
	ArrayList<Comments> comments;
	static int cntlikes;
	LinkedList<int> likes;
	int postId;
	static int idgenerator;
public:
	Post(string content);
	void writeComment(Comments);
	void addLike(int likeid);
	void editpost(string);
	string getDateTime();
	string getContent();

};