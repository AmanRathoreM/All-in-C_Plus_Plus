//* Date 20-09-2021

//* In this tutorial you will learn about parameterized constructor, Implicit Call Construction and Explicit Call Construction

#include <iostream>

using namespace std;
class Complex_number
{
    int a, b, object_number;

public:
    Complex_number(int num_1, int num_2); //* Constructors which also feeds on values then it is called parameterized constructor
    void print_number(void) { cout << "Your number is " << a << " + " << b << "i "
                                   << "and it is " << object_number << " member of your Class" << endl; }
};
Complex_number ::Complex_number(int num_1, int num_2) //* Constructors which also feeds on values then it is called parameterized constructor
{
    static int number_of_object = 1;
    a = num_1;
    b = num_2;
    object_number = number_of_object++;
}

int main()
{
    //* Implicit Call Construction
    Complex_number a(4, 9);
    a.print_number();

    //* Explicit Call Construction
    Complex_number b = Complex_number(3, 1);
    b.print_number();

    return 0;
}