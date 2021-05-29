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
	static int idgenerator;
	int likeid;
	string work;
	string education;
	string lives_in;
	ArrayList<User>friends;
public:
	User(string name, string email, string password, string gender, string birthdate, string work, string education, string lives_in);
	User();
	friend ostream& operator<<(ostream& os, const User& obj);//operator overloading
	void setName(string name);
	void setGender(string gender);
	void setBirthdate(string birthdate);
	void setWork(string newWork);
	void setEducation(string newEdu);
	string getName();
	string getGender();
	string getBirhtdate();
	string getWork();
	string getEducation();
	string getLives_in();
	//void addPost(Post& post);
	//void deletePost(string postdate,string posttime)
	void addFriend(User& newfriend);

};
