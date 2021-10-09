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
    string line = "My name is: ", name = "None";
    ofstream file_1("tutorial_61_2.txt");

    for (int i = 0; i < 2; i++)
    {
        cout << "Enter your name: " << endl;
        cin >> name;
        file_1 << line << name << " Person number: " << i + 1 << endl;
    }

    return 0;
}