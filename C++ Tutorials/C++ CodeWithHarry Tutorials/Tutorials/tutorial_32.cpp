//* Date 20-09-2021

//* In this tutorial you will learn about default argument Constructors

#include <iostream>

using namespace std;
class Complex_number
{
    int a, b;

public:
    Complex_number(int num_1, int num_2);

    void print_number(void) { cout << "Your number is " << a << " + " << b << "i " << endl; }
};
Complex_number ::Complex_number(int num_1, int num_2 = 78)
{
    a = num_1;
    b = num_2;
}

int main()
{

    Complex_number a(4);
    a.print_number();

    Complex_number b(4, 9);
    b.print_number();

    return 0;
}