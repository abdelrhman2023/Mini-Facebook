#include "User.h"
int User::idgenerator = 0;

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
	idgenerator += 1;
	this->likeid = idgenerator;
}

User::User()
{
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

string User::getWork()
{
	return this->work;
}

string User::getEducation()
{
	return this->education;
}

string User::getLives_in()
{
	return this->lives_in;
}

void User::addFriend(User& newfriend)
{
	friends.append(newfriend);
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