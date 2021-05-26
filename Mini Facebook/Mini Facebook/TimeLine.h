#pragma once
#include <iostream>
#include <string>
#include "User.h"
#include "Post.h"
#include "ArrayList.h"
#include "LinkedList.h"
using namespace std;

class TimeLine : public User
{
private:
	LinkedList<Post> Posts;
public:
	//Setters & Getters
	
	/*string GetCaption() {
		return Caption;
	}*/
	string GetName() {
		return User::getName();
	}
	string GetBirthDate() {
		return User::getBirhtdate();
	}
	string Gender() {
		return User::getGender();
	}
	ArrayList<string> GetWork() {
		return User::getWork();
	}
	ArrayList<string> GetEducation() {
		return User::getEducation();
	}
	ArrayList<User> GetFriends() {
		return User::getFriendsList();
	}
	string GetLives_in() {
		return User::getLives_in();
	}
	//Methods

};

