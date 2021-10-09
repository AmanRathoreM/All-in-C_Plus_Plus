//* Date 09-10-2021

//* In this tutorial you will learn how to read and write in a file

/*
These are some useful classes for working with files in C++

    fstreambase --> short form/header use to include is fstream
    ifstream --> derived from fstreambase
    ofstream --> derived from fstreambase
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ofstream to_open_file_1("tutorial_60_2.txt");
    for (int i = 0; i < 100; i++)
    {
        to_open_file_1 << "This is added to file using C++ program " << i << endl;
    }

    return 0;
}