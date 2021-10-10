//* Date 10-10-2021

//* In this tutorial you will learn about OverLoading a Template Function

#include <iostream>
#include <string>

using namespace std;

void print_hello(void)
{
    cout << "Hello! Function with 0 Argument" << endl;
}

template <class user_defined_variable_1>
void print_hello(user_defined_variable_1 var1)
{
    cout << "Hello! Function with 1 Argument var1 = " << var1 << endl;
}

template <class user_defined_variable_1, class user_defined_variable_2>
void print_hello(user_defined_variable_1 var1, user_defined_variable_2 var2)
{
    cout << "Hello! Function with 2 Argument var1 = " << var1 << ", var2 = " << var2 << endl;
}
int main()
{

    print_hello();
    print_hello(1.2);
    print_hello("aman", 12);
    return 0;
}
