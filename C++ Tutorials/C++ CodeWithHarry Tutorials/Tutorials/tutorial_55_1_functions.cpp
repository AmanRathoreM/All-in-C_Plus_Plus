//* Date 08-10-2021

//* This is a function/method file created for Tutorial 55

#include <iostream>

using namespace std;

class BaseClass
{
public:
    int var_of_base_class = 4;
    void print_data(void)
    {
        cout << "Value of var_of_base_class = " << var_of_base_class << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int var_of_derived_class = 9;
    void print_data(void)

    {
        cout << "Value of var_of_base_class = " << var_of_base_class << endl;
        cout << "Value of var_of_derived_class = " << var_of_derived_class << endl;
    }
};