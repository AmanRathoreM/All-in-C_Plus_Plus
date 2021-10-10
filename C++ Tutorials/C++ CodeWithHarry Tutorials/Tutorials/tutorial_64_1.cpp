//* Date 10-10-2021

//* In this tutorial you will learn about Templates and there implementation in real world

#include <iostream>

using namespace std;

class vector
{

public:
    int size, *arr;
    vector(int, bool);
    int sum_vector();
    //todo void append_element(int);
};

vector::vector(int size = 1, bool choice = false) : size(size), arr(new int[size])
{
    if (choice)
    {
        cout << "Constructor is called! and size of array is " << size << endl;
    }
}

int vector::sum_vector()
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += this->arr[i];
    }

    return sum;
}

//todo void vector::append_element(int element)
//todo {
//todo     int *tp_array;
//todo     for (int i = 0; i < size; i++)
//todo     {
//todo         tp_array[i] = this->arr[i];
//todo     }

//todo     this->arr = new int[++size];
//todo     for (int i = 0; i < (size - 1); i++)
//todo     {
//todo         tp_array[i] = this->arr[i];
//todo     }
//todo     this->arr[size - 1] = element;
//todo }

int main()
{

    vector vec_1(3);
    vec_1.arr[0] = 5;
    vec_1.arr[1] = 2;
    vec_1.arr[2] = 3;
    //todo vec_1.append_element(5);
    cout << vec_1.sum_vector() << endl;

    return 0;
}