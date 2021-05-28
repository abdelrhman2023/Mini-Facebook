#include "Comment.h"
int Comments::cntlikes = 0;
Comments::Comments(string content)
{
	this->commentTime = time(0);
	this->content = content;
}

void Comments::addLike(int likeid)
{
	bool found = 0;
	for(int i=0;i<likes.count();i++)
	{
		if(likeid==likes.at(i))
		{
			likes.deleteAt(i);
			found = true;
			cntlikes--;
		}
	}
	if(found==false)
	{
		likes.appned(likeid);
		cntlikes++;
	}
}

string Comments::getDateTime()
{
	return (ctime(&commentTime));
}


