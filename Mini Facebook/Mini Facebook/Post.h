#pragma once
#include<iostream>
#include <ctime>
#include"ArrayList.cpp"
#include"Comment.h"
using namespace std;
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
	Post();
	void writeComment(Comments);
	void addLike(int likeid);
	void editpost(string);
	string getDateTime();
	string getContent();

};