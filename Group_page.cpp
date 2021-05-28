
#include<iostream>
#include<assert.h>
#include<string>
#include"Arrylist.cpp"
#include "Group_page.h"
using namespace std;



Group_page::Group_page() {

	}
Group_page::Group_page(string group_name) {
		this->group_name = group_name;
	}
Group_page::Group_page(string admin_id, int admin_password) {

		this->admin_id = admin_id;
		this->admin_password = admin_password;

	}
bool Group_page:: login() {
		string ch_name = "admin";
		int ch_password = 1234;
		cout << "Enter user Name : ";
		cin >> admin_id;
		cout << "Enter your password";
		cin >> admin_password;
		if (admin_id == ch_name && admin_password == ch_password) {

			return true;

		}
		else {

			return false;
		}




	}
	void Group_page:: setgroup_name(string name) {

		group_name  = name;

	}
	void Group_page::setuser_name(string name_ad) {

		admin_id = name_ad;
	}

	void Group_page::setpassword(int pass_ad) {

		admin_password = pass_ad;
	}



	string Group_page::getGroub_name() {

		return group_name;

	}

	
	 ArryList<Group_page>Group_page::getFriendsList() {

		 return friends;
	}

	
	/* void Group_page::addPost(Posts& post)
 {
	 posts.Append(post);
 }*/










ostream& operator<<(ostream& os, const Group_page& obj)
{
	// TODO: insert return statement here
}
