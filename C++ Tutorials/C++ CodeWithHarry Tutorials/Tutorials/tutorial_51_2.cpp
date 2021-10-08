//* Date 08-10-2021

//* In this tutorial you will learn about Pointers to Objects and Arrow Operator

#include "tutorial_51_1_functions.cpp"

int main()
{

    Complex num_1(45, 9);
    Complex num_2(55, 11);

    num_1.print_data();
    num_2.print_data();

    Complex num_3;
    num_3.sum_complex_number(num_1, num_2);
    num_3.print_data();

    return 0;
}