#include "TimeLine.h"

TimeLine::TimeLine()
{
}

void TimeLine::addPost(Post post)
{
	this->Posts.append(post);
}

void TimeLine::removePost(int postindex)
{
	Posts.deleteAt(postindex);
}

ArrayList<Post> TimeLine::getPosts()
{
	return this->Posts;
}

void TimeLine::editPost(int postindex, string newcontent)
{
	Posts.At(postindex).editpost(newcontent);
}
