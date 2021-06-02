// Date 30-05-2021

#include <iostream>

using namespace std;

int swap(int a, int b)
{
    //* Note: This funtion will absolutely not the variable values because this function just maked a copy of the given variable to it
    //* To do swaping you need to make use of their locations i.e. their pointers
    //* Note: This method of accessing variables is known as Call by value
    //* Note: This method of accessing variables is known as Call by value
    //* Note: This method of accessing variables is known as Call by value
    //* Note: This method of accessing variables is known as Call by value
    //* Note: This method of accessing variables is known as Call by value
    int temporary_variable = a;
    a = b;
    b = temporary_variable;
    return 0;
}

int main()
{
    int x = 32, y = 12;

    cout << endl
         << "Values of x and y are respectively (without swap)" << endl
         << "x = " << x << endl
         << "y = " << y << endl
         << endl;
    swap(y, x);
    cout
        << "Now values of x and y are respectively (with variable swaping)" << endl
        << "x = " << x << endl
        << "y = " << y << endl
        << endl;
    return 0;
}