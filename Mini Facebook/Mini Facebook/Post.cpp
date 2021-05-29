#pragma warning(disable: 4996)
#include "Post.h"
int Post::cntlikes = 0;
int Post::idgenerator = 0;
Post::Post(string content)
{

	this->postTime = time(0);
	this->content = content;
}

Post::Post()
{
}

void Post::addLike(int likeid)
{
	bool found = 0;
	for (int i = 0; i < likes.count(); i++)
	{
		if (likeid == likes.at(i))
		{
			likes.deleteAt(i);
			found = true;
			cntlikes--;
		}
	}
	if (found == false)
	{
		likes.appned(likeid);
		cntlikes++;
	}
}
void Post::writeComment(Comments comment)
{
	comments.append(comment);
}
string Post::getDateTime()
{
	return (ctime(&postTime));
}

string Post::getContent()
{
	return string(this->content);
}

void Post::editpost(string content)
{
	this->content = content;
}
