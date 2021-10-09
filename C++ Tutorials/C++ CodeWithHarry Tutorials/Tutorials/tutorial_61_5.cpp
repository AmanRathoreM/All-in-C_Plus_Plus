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
// #include <ifstream>
// #include <ofstream>
#include <string>

using namespace std;

int main()
{
    string line = "My name is: ", name = "None";
    ofstream file_1_write("tutorial_61_6.txt");

    for (int i = 1; i <= 4; i++)
    {
        cout << "Enter your name: " << endl;
        getline(cin, name);
        file_1_write << line << name << " Person number: " << i << endl;
    }
    file_1_write.close();

      return 0;
}