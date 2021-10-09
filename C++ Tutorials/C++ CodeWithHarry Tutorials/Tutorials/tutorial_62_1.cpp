//* Date 09-10-2021

//* In this tutorial you will learn more about files

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream out;
    out.open("tutorial_62_2.txt");
    for (int i = 1; i <= 1000; i++)
    {
        out << "This is written by C++. Line number is " << i << endl;
    }

    out.close();

    return 0;
}