#pragma once
#include<iostream>
#include"ArrayList.cpp"
#include"NeewsFeed.h"
#include"TimeLine.h"
using namespace std;
class User
{
private:
	string name;
	string email;
	string password;
	string gender;
	string birthdate;
	static int idgenerator;
	int likeid;
	ArrayList<string> work;
	ArrayList<string>education;
	string lives_in;
	ArrayList<User>friends;
	NewsFeed *newsfeed;
	TimeLine *timeline;
public:
	User(string name, string email, string password, string gender, string birthdate, string work, string education, string lives_in);
	friend ostream& operator<<(ostream& os, const User& obj);//operator overloading
	void setName(string name);
	void setGender(string gender);
	void setBirthdate(string birthdate);
	void setWork(string newWork);
	void setEducation(string newEdu);
	ArrayList<User> getFriendsList();
	ArrayList<User>getPosts();
	string getName();
	string getGender();
	string getBirhtdate();
	ArrayList<string> getWork();
	ArrayList<string> getEducation();
	string getLives_in();
	//void addPost(Post& post);
	//void deletePost(string postdate,string posttime)
	void addFriend(User& newfriend);
	void removeFriend(User& deletedfriedn);

};
