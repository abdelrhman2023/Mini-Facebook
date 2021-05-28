#pragma once
#include"Post.h"
#include"User.h"

class NewsFeed
{
private:
	ArrayList<Post> Posts;
public:
	NewsFeed();
	void addPost(Post);
	void removePost(int);
	void editPost(int, string);
	void sortposts();
	~NewsFeed() {}

};

