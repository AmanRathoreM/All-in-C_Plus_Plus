//* Date 08-10-2021

//* In this tutorial you will learn about Pointers to Objects and Arrow Operator

#include "tutorial_51_1_functions.cpp"

int main()
{

    Complex *pointer_of_num_1 = new Complex[3];

    pointer_of_num_1->set_data(56, 74);
    (pointer_of_num_1 + 1)->set_data(32, 13);
    (pointer_of_num_1 + 2)->set_data(16, 94);

    pointer_of_num_1->print_data();
    (pointer_of_num_1 + 1)->print_data();
    (pointer_of_num_1 + 2)->print_data();

    return 0;
}