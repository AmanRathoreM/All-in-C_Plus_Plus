//* Date 09-10-2021

//* In this tutorial you will learn about Virtual Functions

#include "tutorial_56_1_functions.cpp"

int main()
{

    BaseClass *pointer_of_base_class;
    DerivedClass object_of_derived_class;
    pointer_of_base_class = &object_of_derived_class;

    pointer_of_base_class->var_of_base_class = 56;
    object_of_derived_class.var_of_derived_class = 74;
    pointer_of_base_class->print_data();

    return 0;
}