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
	/* LinkedList<Posts>posts; */
public:
	User(string name, string email, string password, string gender, string birthdate, string work, string education, string lives_in);
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
	void addFriend(User& newfriend);
	void removeFriend(User& deletedfriedn);

};


User::User(string name, string email, string password, string gender, string birthdate, string work, string education, string lives_in)
{
	this->name = name;
	this->email = email;
	this->password = password;
	this->gender = gender;
	this->birthdate = birthdate;
	this->work.append(work);
	this->education.append(education);
	this->lives_in = lives_in;

}

void User::setName(string name)
{
	this->name = name;
}

void User::setGender(string name)
{
	this->gender = gender;
}

void User::setBirthdate(string birthdate)
{
	this->birthdate = birthdate;
}

void User::setWork(string newWork)
{
	work.append(newWork);
}

void User::setEducation(string newEdu)
{
	education.append(newEdu);
}

string User::getName()
{
	return this->name;
}

string User::getGender()
{
	return this->gender;
}

string User::getBirhtdate()
{
	return this->birthdate;
}

ArrayList<string> User::getWork()
{
	return this->work.Display();
}

ArrayList<string> User::getEducation()
{
	return this->education.Display();
}

string User::getLives_in()
{
	return this->lives_in;
}

ArrayList<User> User::getFriendsList()
{
	return this->friends.Display();
}

void User::addFriend(User& newfriend)
{
	friends.append(newfriend);
}

void User::removeFriend(User& deletedfriedn)
{
	for (int i = 0; i < friends.Capacity(); i++)
	{
		if (friends.At(i).getName() == deletedfriedn.getName())
		{
			friends.deleteAt(i);
		}
	}
}

/*
void User::addPost(Post& post)
{
	posts.append(post);
}

void User::removepost(User& deletedpost)
{
	for (int i = 0; i < posts.Capacity(); i++)
		{
			if (posts.At(i).getName() == deletedpost.getName())
			{
				posts.deleteAt();
			}
		}
}
*/

ostream& operator<<(ostream& os, const User& obj)
{
	os << obj.name;
	return os;
}
