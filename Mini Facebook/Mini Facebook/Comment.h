#pragma once
#include<iostream>
#include "LinkedList.cpp"
#include<ctime>
using namespace std;
class Comments {
private:
	time_t commentTime;
	string content;
	static int cntlikes;
	LinkedList<int> likes;
public:
	Comments(string content);
	Comments();
	void addLike(int);
	string getDateTime();
};
