//* Date 09-10-2021

//* In this tutorial you will learn more about Virtual Functions

#include "tutorial_57_1_functions.cpp"

int main()
{
    cout << endl;
    CWH content("No Name For This Content", 3.245);
    content.print_details();
    cout << endl;
    CWH_v vid_1("PHP Database Management", 4.98, 15.1254);
    vid_1.print_details();
    cout << endl;
    CWH_b blog_1("SQL Password Encryption", 3.241, 3540);
    blog_1.print_details();
    return 0;
}