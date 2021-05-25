// Date 24-05-2021
#include <iostream>
using namespace std;

int a_global_variable = 9;

void function_1()
{
    bool is_true_or_not_1 = true;
    bool is_true_or_not_2 = false;
    int local_variable = 78;
    cout << "\n\n\n\n\nFunction_1\'s local variable is " << local_variable;
    cout << "\nGlobal variable is " << a_global_variable;
    cout << "\nValue of True is " << is_true_or_not_1;
    cout << "\nValue of False is " << is_true_or_not_2;
}
int main()
{
    cout << "\n\n\nGlobal variable is " << a_global_variable;
    a_global_variable = 45;
    cout << "\nGlobal variable after change is " << a_global_variable;

    //* The below line will throw an Error
    //? cout << "\nOther Function local variable is " << local_variable;
    //* The above line will throw an Error
    function_1();

    return 0;
}