//* Date 08-10-2021

//* In this tutorial you will learn about how to use Pointers in context of Classes and Objects

#include <iostream>

using namespace std;

int main()
{
    //* int num_1 = 456;
    //* int *ptr_1 = &num_1;
    //* cout << "ptr_1 = " << *ptr_1 << endl;

    //* float *ptr_2 = new float(87.5784);
    //* cout << "ptr_2 = " << *ptr_2 << endl;

    int *array_1 = new int[2];
    array_1[0] = 5;
    array_1[1] = 2;
    //! delete[] array_1;     // ---> This line will free-up the memory consumed by array_1
    cout << "array_1[0] = " << array_1[0] << endl
         << "array_1[1] = " << array_1[1] << endl;

    return 0;
}
