#include "User.h"
#include"ArrayList.cpp"
#include<iostream>
using namespace std;
User::User(string name, string email, string password, string gender, string birthdate, string work, string education, string lives_in)
{
	this->name = name;
	this->email = email;
	this->password = password;
	this->gender = gender;
	this->birthdate = birthdate;
	this->work = work;
	this->education = education;
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
	return this->work;
}

ArrayList<string> User::getEducation()
{
	return this->education;
}

string User::getLives_in()
{
	return this->lives_in;
}

ArrayList<User> User::getFriendsList()
{
	return friends;
}

void User::addFriend(User& newfriend)
{
	friends.append(newfriend);
}

void User::removeFriend(User& deletedfriedn)
{
	for(int i=0;i<friends.lenght();i++)
	{
		if(friends[i].getName()== deletedfriedn.getName())
		{
			friends.deleteAt(i);
		}
	}
}

/*void User::addPost(Post& post)
{
	posts.append(post);
}*/

void User::addFriend(User &newfriend)
{
	friends.append(newfriend);
}

ostream& operator<<(ostream& os, const User& obj)
{
	os << obj.name;
	return os;
}
