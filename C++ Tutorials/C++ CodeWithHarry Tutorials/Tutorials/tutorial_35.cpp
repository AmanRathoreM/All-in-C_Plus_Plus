//* Date 21-09-2021

//* In this tutorial you will learn deleting a Constructor in run time i.e. destructing using Dectructors

#include <iostream>

using namespace std;
class Number
{
    int a;

public:
    Number(int num_1)
    {
        a = num_1;
    }

    ~Number()
    {
        cout << "Member with value " << a << " is destructed." << endl;
    }

    void print_number(void) { cout << "Value of a is " << a << endl; }
};

int main()
{
    Number num_1(11);
    cout << "In num_1 ";
    num_1.print_number();

    {
        Number num_2(22);
        cout << "In num_2 ";
        num_2.print_number();
    } //* Member num_2 of class Number is destructed because it leaved from it's block

    cout << "In num_1 ";
    num_1.print_number();
    // num_2.print_number(); //* This will give an error message because num_2 is destructed as soon it leaves it's block
    return 0;
}
