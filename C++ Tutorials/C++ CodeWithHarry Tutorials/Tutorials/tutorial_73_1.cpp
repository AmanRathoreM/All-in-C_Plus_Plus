/*
Date 14-10-2021

In this tutorial, you will learn about map in C++ STL
*/

#include <iostream>
#include <map>
#include <string>

using namespace std;

void display(map<string, int> &marks)
{
    map<string, int>::iterator iter;
    for (iter = marks.begin(); iter != marks.end(); iter++)
    {
        cout << (*iter).first << " got " << (*iter).second << " marks" << endl;
    }
}

int main()
{

    map<string, int> marks;
    marks["Rohit"] = 64;
    marks["Rohan"] = 24;
    marks["Aman"] = 67;
    marks["Suresh"] = 42;
    marks["Bablu"] = 98;

    display(marks);

    return 0;
}