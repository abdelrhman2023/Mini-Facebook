#pragma once
#include <iostream>
#include <string>
#include"Post.h"
#include "ArrayList.h"
using namespace std;
class TimeLine
{
private:
	ArrayList<Post> Posts;
public:
	TimeLine();
	void addPost(Post post);
	void removePost(int index);
	ArrayList<Post>getPosts();
	void editPost(int index, string newcontent);

};

