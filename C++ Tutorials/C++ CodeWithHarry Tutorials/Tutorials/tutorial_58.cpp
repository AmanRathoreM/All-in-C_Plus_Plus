//* Date 09-10-2021

//* In this tutorial you will learn about Abstract Base Class and Pure Virtual Functions. Pure Virtual Function commonly used in Abstract Base Class. Abstract Base Class is the base class for further declared subclasses and creating objects from abstract classes is very difficult so Abstract Base Class is designed in such a way that it can be inherited by any subclasses.

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
    virtual void print_details(void) = 0; //* do nothing function --> pure virtual function
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

//! void CWH::print_details(void)
//! {
//!     cout << "ID of the video/blog is " << id << endl
//!          << "Title of the video/blog is " << title << endl
//!          << "Rating of the video/blog is " << rating << " out of 5" << endl;
//! }

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

int main()
{

    //! CWH content("No name", 4.12); //* You cannot declare variable 'content' to be of abstract base class type. So, this line will give an error message

    CWH_v Django_vid("Django Video Tutorial Number 1", 4.5, 21.56);
    Django_vid.print_details();

    cout << endl;

    CWH_b Django_blog("Django Text Tutorial Number 1", 3.98, 5456);
    Django_blog.print_details();

    return 0;
}