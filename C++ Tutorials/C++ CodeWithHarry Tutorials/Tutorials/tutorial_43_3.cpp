//* Date 07-10-2021

//* In this tutorial you will learn about Ambiguity Resolution in Inheritance

#include <iostream>

using namespace std;

class Base_Class
{
public:
    void greet_me(void)
    {
        cout << "This line is said by Base_Class --->How are you ?" << endl;
    }
};

class Derived_Class : public Base_Class
{
    //! public:
    //!     void greet_me(void)
    //!     {
    //!         cout << "This line is said by Derived_Class --->Kaise ho aap ?" << endl;
    //!     }
};

int main()
{

    Base_Class base_class_object;
    Derived_Class derived_class_object;

    base_class_object.greet_me();
    derived_class_object.greet_me();

    return 0;
}