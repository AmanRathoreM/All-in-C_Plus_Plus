//* Date 10-10-2021

//* In this tutorial you will learn about Forward Declaration in a Template Function

#include <iostream>
#include <string>

using namespace std;

template <class user_defined_variable_1, class user_defined_variable_2>
class my_class
{
private:
    user_defined_variable_1 var_1;
    user_defined_variable_2 var_2;

public:
    my_class(user_defined_variable_1 val_1, user_defined_variable_2 val_2) : var_1(val_1), var_2(val_2) {}

    void print_data(void);
};

template <class user_defined_variable_1, class user_defined_variable_2>
void my_class<user_defined_variable_1, user_defined_variable_2>::print_data(void)
{
    cout << "user_defined_variable_1 = " << var_1 << endl
         << "user_defined_variable_2 = " << var_2 << endl;
}
int main()
{

    my_class<string, float> obj_1("Aman", 123.1);
    obj_1.print_data();

    return 0;
}
