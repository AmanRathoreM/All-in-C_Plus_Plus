//* Date 08-10-2021

//* In this tutorial you will learn about Pointers to Derived Classes and an Example of run time Polymorphism

#include "tutorial_55_1_functions.cpp"

int main()
{
    BaseClass *pointer_of_base_class;
    DerivedClass object_of_derived_class;
    pointer_of_base_class = &object_of_derived_class; //* This syntax will point BaseClass pointer to DerivedClass object

    pointer_of_base_class->var_of_base_class = 56;
    //! pointer_of_base_class->var_of_derived_class = 89; //* This syntax will throw an Error
    pointer_of_base_class->print_data();

    return 0;
}