//* Date 09-10-2021

//* This is a copy of function/method file created for Tutorial 55, and this  function/method file created for Tutorial 56

#include <iostream>

using namespace std;

class BaseClass
{
public:
    int var_of_base_class = 4;
    virtual void print_data(void)
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