#include "NeewsFeed.h"

void NewsFeed::addPost(Post post)
{
	this->Posts.append(post);
}

void NewsFeed::removePost(int postindex)
{
	Posts.deleteAt(postindex);
}

void NewsFeed::editPost(int postindex, string newcontent)
{
	Posts.At(postindex).editpost(newcontent);
}

void NewsFeed::sortposts()
{
	/////////////
}


