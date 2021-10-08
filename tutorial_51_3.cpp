//* Date 08-10-2021

//* In this tutorial you will learn about Pointers to Objects and Arrow Operator

#include <typeinfo>
#include "tutorial_51_1_functions.cpp"

int main()
{

    Complex num_1(15, 8);
    Complex *pointer_of_num_1 = &num_1;
    cout << "Value of pointer_of_num_1 is " << pointer_of_num_1 << endl;
    cout << "Type of num_1 is " << typeid(num_1).name() << endl;
    cout << "Type of pointer_of_num_1 is " << typeid(pointer_of_num_1).name() << endl;

    return 0;
}