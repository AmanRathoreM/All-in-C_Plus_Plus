// Date 19-09-2021

//* In this tutorial you will learn about giving permission to a in-dependent function to access private data of your class(with a bit complex example)

#include <iostream>

using namespace std;

//* Forward Declaration of class Y
class Y;

class X
{
    int var_1_of_X;

public:
    void set_value(int num) { var_1_of_X = num; }
    void print_value(void) { cout << "Value of X.var_1_of_X is " << var_1_of_X << endl; }
    friend void swap_values(X &, Y &);
};
class Y
{
    int var_1_of_Y;

public:
    void set_value(int num) { var_1_of_Y = num; }
    void print_value(void) { cout << "Value of Y.var_1_of_Y is " << var_1_of_Y << endl; }
    friend void swap_values(X &, Y &);
};

void swap_values(X &num_1, Y &num_2)
{
    int temporary_variable = num_1.var_1_of_X;
    num_1.var_1_of_X = num_2.var_1_of_Y;
    num_2.var_1_of_Y = temporary_variable;
}

int main()
{
    X object_1_of_class_X;
    object_1_of_class_X.set_value(45);

    Y object_1_of_class_Y;
    object_1_of_class_Y.set_value(55);

    object_1_of_class_X.print_value();
    object_1_of_class_Y.print_value();

    cout << endl
         << "Below part is after Swaping" << endl;
    swap_values(object_1_of_class_X, object_1_of_class_Y);
    object_1_of_class_X.print_value();
    object_1_of_class_Y.print_value();

    return 0;
}