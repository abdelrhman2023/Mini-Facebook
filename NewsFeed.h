#pragma once
#include"Post.h"
#include"User.h"
#include <vector>
class NewsFeed
{  
	public:
		vector<Post>Display;
		NewsFeed();
		void TopPost();
		void DisplayFriendsPost(Post post,User user);
		~NewsFeed() {}
	
};

