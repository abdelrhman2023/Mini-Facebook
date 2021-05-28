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
	ArrayList<Post> Posts;
public:
	void addPost(Post);
	void removePost(int);
	ArrayList<Post>getPosts();
	void editPost(int,string);

};

