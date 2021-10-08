//* Date 08-10-2021

//* In this tutorial you will learn about this Pointer implementation in OOP on C++

#include <iostream>

using namespace std;

class A
{
    int a;

public:
    void set_data_not_returning_object(int a) { this->a = a; }

    A &set_data_with_returning_object(int a) //* This function will return an object whose data is set by it
    {
        this->a = a;
        return *this;
    }

    void get_data() { cout << a << endl; }
};

int main()
{
    A obj_1, obj_2;
    obj_1.set_data_with_returning_object(236).get_data();
    obj_2.set_data_not_returning_object(789);
    obj_2.get_data();
    return 0;
}