//* Date 09-10-2021

//* In this tutorial you will learn more about Virtual Functions

#include "tutorial_57_1_functions.cpp"

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

    pointer_pointing_to_class_CWH[0]->print_details();
    cout << endl;
    pointer_pointing_to_class_CWH[1]->print_details();
    return 0;
}