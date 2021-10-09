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
#include <string>

using namespace std;

int main()
{
    string line;
    ifstream myfile("tutorial_60_6.txt");

    while (getline(myfile, line))
    {
        cout << line << endl;
    }
    myfile.close();

    return 0;
}