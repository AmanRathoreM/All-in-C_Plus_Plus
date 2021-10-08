//* Date 08-10-2021

//* In this tutorial you will learn about Constructors in Derived Classes

/*
*   Case1:
*   class B: public A{
*      Order of execution of constructor -> first A() then B()
*   };

*   Case2:
*   class A: public B, public C{
*      Order of execution of constructor -> B() then C() and A()
*   };

*   Case3:
*   class A: public B, virtual public C{
*      Order of execution of constructor -> C() then B() and A()
*   };
*/

#include <iostream>

using namespace std;

class Base_Class_1
{
private:
    int int_of_base_class_1;

public:
    Base_Class_1(int);
    void print_data_of_base_class_1(void);
};

class Base_Class_2
{
private:
    int int_of_base_class_2;

public:
    Base_Class_2(int);
    void print_data_of_base_class_2(void);
};

class Derived_Class : public Base_Class_1, public Base_Class_2
{
private:
    int int_of_derived_class;
    float float_of_derived_class;

public:
    Derived_Class(int, int, int, float);
    void print_data_of_derived_class(void);
};

Base_Class_1::Base_Class_1(int num)
{
    int_of_base_class_1 = num;
    cout << "Base_Class_1 Constructor is called" << endl;
}

Base_Class_2::Base_Class_2(int num)
{
    int_of_base_class_2 = num;
    cout << "Base_Class_2 Constructor is called" << endl;
}

Derived_Class::Derived_Class(int num_1, int num_2, int num_3, float num_4) : Base_Class_2(num_2), Base_Class_1(num_1)
{
    int_of_derived_class = num_3;
    float_of_derived_class = num_4;
    cout << "Derived Class Constructor is called" << endl;
}

void Base_Class_1::print_data_of_base_class_1(void)
{
    cout << "Base_Class_1\'s \"int_of_base_class_1\" value is " << int_of_base_class_1 << endl;
}

void Base_Class_2::print_data_of_base_class_2(void)
{
    cout << "Base_Class_2\'s \"int_of_base_class_2\" value is " << int_of_base_class_2 << endl;
}

void Derived_Class::print_data_of_derived_class(void)
{
    cout << "Derived_Class\'s \"int_of_derived_class\" value is " << int_of_derived_class << endl
         << "Derived_Class\'s \"float_of_derived_class\" value is " << float_of_derived_class << endl;
}

int main()
{
    Derived_Class num(1, 2, 3, 4.44);
    cout << endl
         << endl;
    num.print_data_of_base_class_1();
    num.print_data_of_base_class_2();
    num.print_data_of_derived_class();

    return 0;
};