//* Date 09-10-2021

//* In this tutorial you will learn more about Virtual Functions

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
} CWH;

typedef class Code_With_Harry_video : public CWH
{
protected:
    float video_length_in_seconds;

public:
    Code_With_Harry_video(string title, float rating, float video_length_in_seconds) : CWH(title, rating), video_length_in_seconds(video_length_in_seconds) {}

} CWH_v;

typedef class Code_With_Harry_blog : public CWH
{
protected:
    int number_of_words;

public:
    Code_With_Harry_blog(string title, float rating, int number_of_words) : CWH(title, rating), number_of_words(number_of_words) {}

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

int main()
{
    float vid_length = 21.56, rating = 4.5;
    int words, i = 1;
    string title = "Django Video Tutorial Number " + to_string(i);
    CWH_v Django_vid(title, rating, vid_length);
    //! Django_vid.print_details();

    cout << endl;

    rating = 3.98, words = 5456, i = 1, title = "Django Text Tutorial Number " + to_string(i);
    CWH_b Django_blog(title, rating, words);
    //! Django_blog.print_details();

    CWH *pointer_pointing_to_class_CWH[2];
    pointer_pointing_to_class_CWH[0] = &Django_vid;
    pointer_pointing_to_class_CWH[1] = &Django_blog;

    pointer_pointing_to_class_CWH[0]->print_details(); //* There are no print_details() function in Derived classes so the print_details() function of the base class will invoked
    cout << endl;
    pointer_pointing_to_class_CWH[1]->print_details(); //* There are no print_details() function in Derived classes so the print_details() function of the base class will invoked
    return 0;
}