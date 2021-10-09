//* Date 09-10-2021

//* This is a function/method file created for Tutorial 57 to illustrate concept of Visual Functions
//* Note: Virtual Function defined in print_details() function of class Code_With_Harry/CWH

/*
Rules for virtual functions--
    1.  They cannot be static
    2.  They are accessed by object pointers
    3.  Virtual functions can be a friend of another class
    4.  A virtual function in the base class might not be used.
    5.  If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
*/

#include <iostream>
#include <string>

using namespace std;

typedef class Code_With_Harry
{
protected:
    string title;
    float rating;
    int id;

public:
    Code_With_Harry(string, float);
    virtual void print_details(void);
    // void print_details(void);
} CWH;

typedef class Code_With_Harry_video : public CWH
{
protected:
    float video_length_in_seconds;

public:
    Code_With_Harry_video(string title, float rating, float video_length_in_seconds) : CWH(title, rating), video_length_in_seconds(video_length_in_seconds) {}
    void print_details(void);
} CWH_v;

typedef class Code_With_Harry_blog : public CWH
{
protected:
    int number_of_words;

public:
    Code_With_Harry_blog(string title, float rating, int number_of_words) : CWH(title, rating), number_of_words(number_of_words) {}
    void print_details(void);
} CWH_b;

Code_With_Harry::Code_With_Harry(string title = "Not Specified", float rating = 0)
{
    static int id = 1;
    this->id = id++;
    this->title = title;
    this->rating = rating;
}
void CWH::print_details(void)
{
    cout << "ID of the video/blog is " << id << endl
         << "Title of the video/blog is " << title << endl
         << "Rating of the video/blog is " << rating << " out of 5" << endl;
}

void CWH_v::print_details(void)
{
    cout << "ID of the video/blog is " << id << endl
         << "Title of the video/blog is " << title << endl
         << "Rating of the video/blog is " << rating << " out of 5" << endl
         << "Video length is " << video_length_in_seconds << " minutes" << endl;
}

void CWH_b::print_details(void)
{
    cout << "ID of the video/blog is " << id << endl
         << "Title of the video/blog is " << title << endl
         << "Rating of the video/blog is " << rating << " out of 5" << endl
         << "There are " << number_of_words << " words in the blog" << endl;
}
