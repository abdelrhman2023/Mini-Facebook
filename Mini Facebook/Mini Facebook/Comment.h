#pragma once
#include<iostream>
#include "LinkedList.cpp"
using namespace std;
class Comments {
private:
	time_t commentTime;
	string content;
	static int cntlikes;
	LinkedList<int> likes;
public:
	Comments(string content);
	void addLike(int);
	string getDateTime();
};
