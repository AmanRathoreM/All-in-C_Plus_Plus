/*
Date 12-10-2021

In this tutorial, you will learn about implementation of vector in our program
*/

#include <iostream>
#include <vector>

using namespace std;

template <class user_defined>
void display_vector(vector<user_defined> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << "On index " << i << " value of vector is " << vec[i] << endl;
    }
}

int main()
{

    vector<int> vec_1;
    int element, size;

    cout << "Please enter the size of the vector you need" << endl;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to append to the vector" << endl;
        cin >> element;
        vec_1.push_back(element);
    }

    display_vector<int>(vec_1);

    return 0;
}