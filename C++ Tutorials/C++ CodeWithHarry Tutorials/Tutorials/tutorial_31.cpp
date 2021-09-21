//* Date 20-09-2021

//* In this tutorial you will learn about one or more constructors in a class i.e. Constructor Overloading

#include <iostream>

using namespace std;
class Complex_number
{
    int a, b;

public:
    Complex_number(int num_1, int num_2);
    Complex_number(int num_1);
    //todo Complex_number();

    void print_number(void) { cout << "Your number is " << a << " + " << b << "i " << endl; }
};
Complex_number ::Complex_number(int num_1, int num_2)
{
    a = num_1;
    b = num_2;
}
Complex_number ::Complex_number(int num_1)
{
    a = num_1;
    b = 0;
}
//todo Complex_number ::Complex_number()
//todo {
//todo     a = 0;
//todo     b = 0;
//todo }

int main()
{
    //* Member with Double parameter
    Complex_number a(4, 9);
    a.print_number();

    //* Member with Single parameter
    Complex_number b(3);
    b.print_number();

    //todo //* Member with 0 parameter
    //todo Complex_number c();
    //todo c.print_number();

    return 0;
}