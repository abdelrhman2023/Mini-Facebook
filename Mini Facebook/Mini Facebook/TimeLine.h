#pragma once
#include <iostream>
#include <string>
#include "User.h"
#include "Post.h"
#include "ArrayList.h"
#include "LinkedList.h"
using namespace std;

class TimeLine
{
private:
	/* ::User Atrribute::
	string Caption;
	string Name;
	string BirthDate;
	string Gender;
	ArrayList<string> Work;
	ArrayList<string> Education; // (High school) (University) (Masters) (PhD)
	ArrayList<User> friends;
	string Lives_in;
	*/
	LinkedList<Post> Posts;
public:
	//Setters & Getters
	string GetCaption() {
		return Caption;
	}
	string GetName() {
		return Name;
	}
	string GetBirthDate() {
		return BirthDate;
	}
	string Gender() {
		return Gender;
	}
	void GetWork() {
		Work.Display();
	}
	void GetEducation() {
		Education.Display();
	}
	void GetFriends() {
		Friends.Display();
	}
	string GetLives_in() {
		return Lives_in;
	}
	//Methods
};

