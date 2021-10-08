//* Date 08-10-2021

//* In this tutorial you will learn about Pointers to Objects and Arrow Operator

#include "tutorial_51_1_functions.cpp"

int main()
{

    Complex *pointer_of_num_1 = new Complex(89, 4);
    pointer_of_num_1->print_data();

    return 0;
}