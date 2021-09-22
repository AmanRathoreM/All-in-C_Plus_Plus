//* Date 21-09-2021

//* In this tutorial you will learn Single Level Inheritance with private visibility mode

//* Derived Class syntax (Below given is the syntax of inheritance from one class to another).
// * class {{derived-class-name}} : {{visibility-mode (Default is Private)}} {{base-class-name}}
//* {
//*     class members/methods/etc...
//* }

//* Note:
//* 1. Default visibility mode is private
//* 2. Private members are never inherited
//* 3. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
//* 4. Private Visibility Mode: Public members of the base class becomes Private members of the derived class

#include <iostream>

using namespace std;

class Employee_Base_Class //* This is a base class for
{
public:
    int id = 0;
    float salary = 100;

    Employee_Base_Class() {}

    Employee_Base_Class(int number, float income)
    {
        id = number;
        salary = income;
    }

    void print_data_of_employee(void) { cout << "Salary of employee number " << id << " is " << salary << endl; }
};

class Programer_Derived_Class : Employee_Base_Class
{
    int number_of_language_known_by_employee = 1;

public:
    Programer_Derived_Class(int language)
    {
        number_of_language_known_by_employee = language;
    }
    void print_data_of_programer(void)
    {
        print_data_of_employee();
        cout << "Number of Programming Languages known by the Programmer is " << number_of_language_known_by_employee << endl;
    }
};

int main()
{
    Employee_Base_Class rohit(1, 1000), rohan(2, 2000);
    rohit.print_data_of_employee();
    rohan.print_data_of_employee();

    cout << endl
         << endl;

    Programer_Derived_Class aman(5);
    aman.print_data_of_programer();

    return 0;
}
