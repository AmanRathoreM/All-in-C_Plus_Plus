//* Date 08-10-2021

//* In this tutorial you will learn about creating Array of Objects using Pointers

#include "tutorial_52_1_functions.cpp"

int main()
{
    Shop chocolate;
    chocolate.print_details();
    cout << "\n\n";
    chocolate.set_data(45.98, "Nestley");
    chocolate.print_details();
    return 0;
}