//* Date 22-09-2021

//* In this tutorial you learn about Protected Access Modifiers

//* 	                    Public Derivation	Private Derivation	Protected Derivation
//* Private members	        Not Inherited	    Not Inherited	    Not Inherited
//* Protected members	    Protected	        Private	            Protected
//* Public members	        Public	            Private	            Protected

#include <iostream>

using namespace std;

class Base
{
protected:
    int data_1_of_Base_class_in_protected_scope;

private:
    int data_2_of_Base_class_in_private_scope;
};

class Derived : protected Base
{
};

int main()
{
    Derived der;
    // cout << derived.data_1_of_Base_class_in_protected_scope; //* It will give an error because it is inherited as Protected which is almost same to Private
    // cout << derived.data_2_of_Base_class_in_private_scope; //* It will give an error because it is not inherited, as the type mentioned is protected

    return 0;
}
