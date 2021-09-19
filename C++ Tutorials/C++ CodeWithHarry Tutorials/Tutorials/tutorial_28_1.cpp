// Date 19-09-2021

//* In this tutorial you will learn about giving permission to a in-dependent function to access private data of your class(with a easy example)

#include <iostream>

using namespace std;

//* Forward Declaration of class Y
class Y;

class X
{
    int var_1_of_X;

public:
    void set_value(int num) { var_1_of_X = num; }
    friend void inter_class_sum(X num_1, Y num_2);
};
class Y
{
    int var_1_of_Y;

public:
    void set_value(int num) { var_1_of_Y = num; }
    friend void inter_class_sum(X num_1, Y num_2);
};

void inter_class_sum(X num_1, Y num_2)
{
    cout << "Sum of " << num_1.var_1_of_X << " and " << num_2.var_1_of_Y << " is " << num_1.var_1_of_X + num_2.var_1_of_Y << endl;
}

int main()
{
    X object_1_of_class_X;
    object_1_of_class_X.set_value(45);

    Y object_1_of_class_Y;
    object_1_of_class_Y.set_value(55);

    inter_class_sum(object_1_of_class_X, object_1_of_class_Y);

    return 0;
}