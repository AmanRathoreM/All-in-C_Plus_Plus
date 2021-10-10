//* Date 10-10-2021

//* In this tutorial you will learn about Templates and there implementation in real world

#include <iostream>

using namespace std;

template <class user_defined_variable>
class vector
{
    int size;

public:
    user_defined_variable *arr;
    // vector(int, bool);
    vector(int si = 1, bool choice = false)
    {
        arr = new user_defined_variable[size];
        size = si;
        if (choice)
        {
            cout << "Constructor is called! and size of array is " << size << endl;
        }
    }
    user_defined_variable sum_vector()
    {
        user_defined_variable sum = 0;

        for (int i = 0; i < size; i++)
        {
            sum += this->arr[i];
        }

        return sum;
    }
};
int main()
{

    vector<float> vec_1(3);
    vec_1.arr[0] = 5.6;
    vec_1.arr[1] = 2.12;
    vec_1.arr[2] = 3.004;
    cout << vec_1.sum_vector() << endl;

    return 0;
}