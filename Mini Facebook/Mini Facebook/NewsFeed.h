#pragma once
#include"Post.h"
#include<iostream>
using namespace std;
class NewsFeed
{
private:
	ArrayList<Post> Posts;
public:
	NewsFeed();
	void addPost(Post post);
	void removePost(int index);
	void editPost(int index, string newcontent);
	void sortposts();

};

