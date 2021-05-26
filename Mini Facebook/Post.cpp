#include "Post.h"
#include "User.h"
#include<fstream>
#include <iostream>
using namespace std;
//comments class function 
comments::comments(string s,int postid)
{
    postId = postid;
    //date&time
    time_t nows = time(0);
    tm* c = localtime(&nows);
    commentTime = c;
    //
    ofstream out_file("datecomment.txt", ios::app);
    out_file << "comment: " << s<<" id: "<<postId << endl;
    out_file << "date " << c->tm_mday << " " << c->tm_mon + 1 << " " << c->tm_year + 1900 << " Time ";
    out_file << c->tm_hour << " " << c->tm_min << " " << c->tm_sec <<" final"<< endl;
    out_file.close();
}

Post::Post(User user,string s)
{
    //pic

    containtPost = s;

    //id
    id = getLastId()+1;
    //date&time
    time_t nows = time(0);
    tm* p = localtime(&nows);
    postTime = p;

    ofstream out_file("Posts.txt", ios::app);
    out_file << "iduser: " << user.id << " name: " << user.name << endl;
    out_file << "Post: " << s <<" idpost: "<<id<< endl;
    out_file << "date " << p->tm_mday << " " << p->tm_mon + 1 << " " << p->tm_year + 1900 << " Time ";
    out_file << p->tm_hour << " " << p->tm_min << " " << p->tm_sec<<" final" << endl;
    out_file.close();
}

Post::Post()
{
}

void Post::writeComment(string s)
{	
   // comments comment(s,getLastId());
}

details Post::Displaypost(string id)
{
    //date&time
    time_t nows = time(0);
    tm* now = localtime(&nows);

    //read from file
    ifstream infile;
    infile.open("Posts.txt");
    //chech erorr
    if (infile.fail()) {
        cerr << "Erorr opinning file" << endl;
    }
    string posting, nameUser;
    int Day=0, Mon=0;
    while (!infile.eof())
    {
        infile >> posting;
        if (posting == "name:") {
            nameUser = "";
            infile >> posting;
            while (posting != "Post:")
            {
                nameUser = nameUser + posting + " ";
                infile >> posting;
            }
        }
        if (posting == "idpost:") {
            infile >> posting;
            if (posting == "2") {
                infile >> posting;
                if (posting == "date") {
                    infile >> posting;
                    for (int i = 0; i < posting.length(); i++) {
                        Day = Day * 10 + (posting[i] - 48);
                    }
                    Day = now->tm_mday-Day;

                    infile >> posting;
                    for (int i = 0; i < posting.length(); i++) {
                        Mon = Mon * 10 + (posting[i] - 48);
                    }
                    Mon = now->tm_mon - Mon+1;
                    break;
                }
            }
        }
    }
    infile.close();

    details d;
    d.day = Day;
    d.mon = Mon;
    d.nameUser = nameUser;
    return d;
}

void Post::DisplayComments()
{
    //read from file
    ifstream infile;
    infile.open("datecomment.txt");
    //chech erorr
    if (infile.fail()) {
        cerr << "Erorr opinning file" << endl;
    }
    string comm;
    int count = 0;
    //read file until reached to end
    while (!infile.eof())
    {
        infile >> comm;
        //cout comment
        if (comm == "comment:") {
            while (comm!="date")
            {
                cout << comm << " ";
                infile >> comm;
            }
        }
        cout << endl;
        //cout date
        if (comm == "date") {
            while (comm != "Time")
            {
                cout << comm << " ";
                infile >> comm;
            }
        }
        cout << endl;
        //cout time
        if (comm == "Time") {
            while (comm != "final")
            {
                cout << comm << " ";
                infile >> comm;
            }
        }
        cout << endl;
    }
    infile.close();
    
}

int Post::getLastId()
{
    //read from file post id
    ifstream infile;
    infile.open("Posts.txt");
    //chech erorr
    if (infile.fail()) {
        cerr << "Erorr opinning file" << endl;
    }
    int fileid = 0;
    string item;
    string si;
    //read file until reached to end
    while (!infile.eof())
    {
        infile >> item;
        //return id
        if (item == "idpost:") {
            infile >> item;
            si = item;
        }
    }
    for (int i = 0; i < si.length(); i++) {
        fileid = fileid * 10 + (si[i] - 48);
    }
    infile.close();
    return fileid;
}


Post::~Post()
{
}


