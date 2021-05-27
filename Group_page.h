#pragma once
#include<string>
#include<iostream>
#include<list>
#include"ArryList.cpp"
using namespace std;

class Group_page
{
private:
	string group_name;
	string admin_id;
	int admin_password;
	string user_name;
	ArryList<Group_page>friends;
public:
	Group_page();
	Group_page(string group_name);
	Group_page(string admin_id, int admin_password);
	bool login();
	void setgroup_name(string name);
	void setuser_name(string name_ad);
	void setpassword(int pass_ad);
	string getGroub_name();
	ArryList<Group_page>getFriendsList();
	//void addPost(Posts& post);
	

	friend ostream& operator<<(ostream& os, const Group_page& obj);





};

