//* Date 07-10-2021

//* In this tutorial you will learn about Ambiguity Resolution in Inheritance

#include <iostream>

using namespace std;

class Base_Class_1
{
public:
    void greet_me(void);
};

class Base_Class_2
{
public:
    void greet_me(void);
};

class Derived_Class : public Base_Class_1, public Base_Class_2
{
public:
    void greet_me(void);
};

void Base_Class_1::greet_me(void)
{
    cout << "This line is said by Base_Class_1 --->How are you ?" << endl;
}
void Base_Class_2::greet_me(void)
{
    cout << "This line is said by Base_Class_2 --->Kaise ho aap ?" << endl;
}

//! void Derived_Class::greet_me(void)
//! {
//!     cout << "Derived class Greet function" << endl;
//! }

void Derived_Class::greet_me(void)
{
    Base_Class_1::greet_me();
}

int main()
{

    Base_Class_1 base_1_object;
    Base_Class_2 base_2_object;

    base_1_object.greet_me();
    base_2_object.greet_me();

    Derived_Class derived_class_object;
    derived_class_object.greet_me();

    return 0;
}