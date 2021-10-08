//* Date 08-10-2021

//* In this tutorial you will learn about this Pointer implementation in OOP on C++

#include <iostream>

using namespace std;

class A
{
    int a;

public:
    void set_data(int a) { this->a = a; }
    void get_data() { cout << a << endl; }
};

int main()
{
    A obj_1;
    obj_1.set_data(29);
    obj_1.get_data(); //* Now because of "this" keyword at function set_data in class A this will not give a garbage value
    return 0;
}