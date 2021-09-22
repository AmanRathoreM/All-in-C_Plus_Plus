//* Date 22-09-2021

//* In this tutorial you will do Deep Dive in Single Level Inheritance (Part-2)

#include <iostream>

using namespace std;

class Base
{
    int data_1_of_Base_class_in_private_scope;

public:
    int data_2_of_Base_class_in_public_scope;

    void set_data_of_Base_class_in_public_scope(int a, int b)
    {
        data_1_of_Base_class_in_private_scope = a;
        data_2_of_Base_class_in_public_scope = b;
    }

    int get_data_1_of_Base_class_in_public_scope(void) { return data_1_of_Base_class_in_private_scope; }

    int get_data_2_of_Base_class_in_public_scope(void) { return data_2_of_Base_class_in_public_scope; }
};

class Derived : Base //* Inherited as privately which is default type
{
    int data_3_of_Derived_class_in_private_scope;

public:
    void process_of_Derived_class_in_public_scope()
    {
        data_3_of_Derived_class_in_private_scope = get_data_1_of_Base_class_in_public_scope() * data_2_of_Base_class_in_public_scope;
    }

    void display_of_Derived_class_in_public_scope()
    {
        cout << "Data 1 is " << get_data_1_of_Base_class_in_public_scope() << endl
             << "Data 2 is " << data_2_of_Base_class_in_public_scope << endl
             << "Data 3 is " << data_3_of_Derived_class_in_private_scope << endl;
    }

    // * The below function is the major change in the (Part-1) and (Part-2)
    void set_data_of_Derived_class_in_public_scope(int a, int b) { set_data_of_Base_class_in_public_scope(a, b); }
};

int main()
{
    Derived der;
    der.set_data_of_Derived_class_in_public_scope(11, 2);
    der.process_of_Derived_class_in_public_scope();
    der.display_of_Derived_class_in_public_scope();

    return 0;
}
