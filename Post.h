#pragma once
#include <string>
#include <vector>
#include <ctime>
using namespace std;

class Comment
{
public:
	//picture
	int postId;
	string commentcontaint;
	string commentTime;
	string commentDate;
	int cntlikes = 0;
	bool likes;

	//constractor
	Comment();
	void setCommentId(int);
	void setcommentcontaint(string);
	void setcommentTime(string);
	void setcommentDate(string);
	void setcntLike(int);

	int getCommentId();
	string getcommentcontaint();
	string getcommentTime();
	string getcommentDate();
	int getcntLike();
	bool isliked();
	void writeComment(string s);
	void DisplayComments(vector<Comment>& comments);
};

class Post
{
	int id;
	string Email;
	string containtPost;
	vector<Comment> comments;
	string postTime;
	string postDate;
	int cntlikes=0;
	bool like;
	//picture

public:
	Post();
	void setId(int);
	void setContaintPost(string);
	void setEmail(string);
	void setpostTime(string);
	void setpostDate(string);
	void setcntLike(int);
	int getId();
	string getContaintPost();
	string getEmail();
	string getpostTime();
	string getpostDate();
	int getcntLike();
	void writePost(vector<Post>& posts);
	void Displaypost(vector<Post> &post);
	bool isliked();
	int getlastId();
	~Post();
};

