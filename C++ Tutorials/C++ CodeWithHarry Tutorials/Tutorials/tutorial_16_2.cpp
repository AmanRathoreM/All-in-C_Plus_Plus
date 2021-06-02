// Date 30-05-2021

#include <iostream>

using namespace std;

int swap_using_pointers(int *a, int *b)
{
    //* Note: This method of accessing variables is known as Call by refrence
    int temporary_variable = *a;
    *a = *b;
    *b = temporary_variable;
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
    swap_using_pointers(&x, &y);
    cout << "Now values of x and y are respectively (with pointer swaping)" << endl
         << "x = " << x << endl
         << "y = " << y << endl
         << endl;
    return 0;
}