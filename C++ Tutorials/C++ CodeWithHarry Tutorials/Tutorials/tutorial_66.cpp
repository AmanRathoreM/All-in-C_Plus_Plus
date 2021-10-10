//* Date 10-10-2021

//* In this tutorial you will learn about Templates with default parameters

#include <iostream>
#include <string>

using namespace std;

template <class user_defined_variable_1 = int, class user_defined_variable_2 = float>
class my_class
{
private:
    user_defined_variable_1 var_1;
    user_defined_variable_2 var_2;

public:
    my_class(user_defined_variable_1 val_1, user_defined_variable_2 val_2) : var_1(val_1), var_2(val_2) {}

    void print_data(void)
    {
        cout << "user_defined_variable_1 = " << var_1 << endl
             << "user_defined_variable_2 = " << var_2 << endl;
    }
};

int main()
{

    my_class<> obj_1(5454, 324.88);
    obj_1.print_data();

    return 0;
}