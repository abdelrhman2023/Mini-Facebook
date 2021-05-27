#include "Post.h"
#include<fstream>
#include <iostream>
#include<string>
#include<vector>
using namespace std;

//class comment
Comment::Comment()
{
	
}

void Comment::setCommentId(int postId)
{
    this->postId = postId;
}

void Comment::setcommentcontaint(string commentContaint)
{
    this->commentcontaint = commentContaint;
}

void Comment::setcommentTime(string commentTime)
{
    this->commentTime = commentTime;
}

void Comment::setcommentDate(string commentDate)
{
    this->commentDate = commentDate;
}

void Comment::setcntLike(int cntlikes)
{
    this->cntlikes = cntlikes;
}

int Comment::getCommentId()
{
    return postId;
}

string Comment::getcommentcontaint()
{
    return commentcontaint;
}

string Comment::getcommentTime()
{
    return commentTime;
}

string Comment::getcommentDate()
{
    return commentDate;
}

int Comment::getcntLike()
{
    return cntlikes;
}

bool Comment::isliked()
{
	return (likes);
}

void Comment::DisplayComments(vector<Comment>& comments)
{
    ifstream file;
    file.open("comments.txt", ios::in);
    if (file.fail()) {
        cerr << "Erorr opinning file" << endl;
    }
    Comment comm;
    while (!file.eof())
    {
        int idpost;
        string containt;
        string time;
        string date;
        int cntlikes;

        file >> idpost >> containt >> time >> date >> cntlikes;

        comm.setCommentId(idpost);
        comm.setcommentcontaint(containt);
        comm.setcommentTime(time);
        comm.setcommentDate(date);
        comm.setcntLike(cntlikes);

        comments.push_back(comm);
    }
    file.close();
}

//class post

Post::Post()
{
}

void Post::setId(int id)
{
    this->id = id;
}

void Post::setContaintPost(string s)
{
    this->containtPost = s;
}

void Post::setEmail(string email)
{
    this->Email = email;
}

void Post::setpostTime(string posttime)
{
    this->postTime = posttime;
}

void Post::setpostDate(string postDate)
{
    this->postDate = postDate;
}

void Post::setcntLike(int cntLikes)
{
    this->cntlikes = cntLikes;
}

int Post::getId()
{
    return id;
}

string Post::getContaintPost()
{
    return containtPost;
}

string Post::getEmail()
{
    return Email;
}

string Post::getpostTime()
{
    return postTime;
}

string Post::getpostDate()
{
    return postDate;
}

int Post::getcntLike()
{
    return cntlikes;
}

void Post::writePost(vector<Post>& posts)
{
    ofstream file;
    int flag = 0;

    file.open("posts.txt", ios::app);
    if (file.fail()) {
        cerr << "Erorr opinning file" << endl;
    }
    for (int i = 0; i < posts.size(); i++)
    {
        file << posts[i].getlastId() << endl << posts[i].getEmail() << endl << posts[i].getContaintPost() << endl << posts[i].getpostDate() << endl << posts[i].getpostTime() << endl << posts[i].getcntLike()<<endl;
        if (flag < posts.size() - 1) {
            flag++;
            file << endl;
        }
    }
}

//void Post::writeComment(string containt)
//{
//    Comment coment;
//    comments.push_back(coment);
//    //date&time
//    time_t nows = time(0);
//    tm* local = localtime(&nows);
//
//}

void Post::Displaypost(vector<Post> &posts)
{
    ifstream file;
    file.open("posts.txt", ios::in);
    if (file.fail()) {
        cerr << "Erorr opinning file" << endl;
    }
    Post post;
    while (!file.eof())
    {
        int id;
        string containt;
        string email;
        string time;
        string date;
        int cntlikes;

        file >> id >>email>> containt >> time >> date >> cntlikes;

        post.setId(id);
        post.setEmail(email);
        post.setContaintPost(containt);
        post.setpostTime(time);
        post.setpostDate(date);
        post.setcntLike(cntlikes);

        posts.push_back(post);
    }
    file.close();
}

bool Post::isliked()
{
    return like;
}

int Post::getlastId()
{
    vector<Post> v;
    Post p;
    p.Displaypost(v);
    return v.size()+1;
}

Post::~Post()
{
}

