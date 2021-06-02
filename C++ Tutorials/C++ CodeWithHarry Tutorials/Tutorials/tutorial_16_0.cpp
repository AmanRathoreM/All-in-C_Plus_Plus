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

int swap_using_pointers(int *a, int *b)
{
    //* Note: This method of accessing variables is known as Call by refrence
    int temporary_variable = *a;
    *a = *b;
    *b = temporary_variable;
    return 0;
}

int swap_using_reference(int &a, int &b)
{
    int temporary_variable = a;
    a = b;
    b = temporary_variable;
    return 0;
}

int main()
{
    int x = 32, y = 12;

    cout << endl
         << "1.) Values of x and y are respectively (without swap)" << endl
         << "x = " << x << endl
         << "y = " << y << endl
         << endl;
    swap(y, x);
    cout
        << "2.) Now values of x and y are respectively (with variable swaping)" << endl
        << "x = " << x << endl
        << "y = " << y << endl
        << endl;
    swap_using_pointers(&x, &y);
    cout << "3.) Now values of x and y are respectively (with pointer swaping)" << endl
         << "x = " << x << endl
         << "y = " << y << endl
         << endl;
    x = 32;
    y = 12;
    cout << "4.) Values of x and y are reseted and their values are (without swap)" << endl
         << "x = " << x << endl
         << "y = " << y << endl
         << endl;
    swap_using_reference(x, y);
    cout << "5.) Now values of x and y are respectively (with reference swaping)" << endl
         << "x = " << x << endl
         << "y = " << y << endl
         << endl;

    return 0;
}