#pragma once
#include<iostream>
#include"ArrayList.cpp"
using namespace std;
class User
{
private:
	string name;
	string email;
	string password;
	string gender;
	string birthdate;
	ArrayList<string> work;
	ArrayList<string>education;
	string lives_in;
	ArrayList<User>friends;
	/*LinkedList<Posts>posts;*/
public:
	User(string name,string email,string password,string gender,string birthdate,string work,string education,string lives_in);
	friend ostream& operator<<(ostream& os, const User& obj);//operator overloading
	void setName(string name);
	void setGender(string gender);
	void setBirthdate(string birthdate);
	void setWork(string newWork);
	void setEducation(string newEdu);
	ArrayList<User> getFriendsList();
	string getName();
	string getGender();
	string getBirhtdate();
	ArrayList<string> getWork();
	ArrayList<string> getEducation();
	string getLives_in();
	//void addPost(Post& post);
	//void deletePost(string postdate,string posttime)
	void addFriend(User &newfriend);
	void removeFriend(User& deletedfriedn);
	


};