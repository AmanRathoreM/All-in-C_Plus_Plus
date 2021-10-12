/*
Date 12-10-2021

In this tutorial, you will learn about implementation of vector in our program
*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

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
    int element = 10, size = 100;

    for (int i = 0; i < size; i++)
    {
        srand(((unsigned)time(0)) + i);
        element = (rand() % 100);
        vec_1.push_back(element);
    }

    display_vector<int>(vec_1);
    // cout << endl;
    // vector<int>::iterator iter = vec_1.begin();
    // vec_1.insert((iter + 10), 5, 4587);
    // display_vector<int>(vec_1);
    int at_which_index = 45;
    cout << "Element on " << at_which_index << " is "
         << vec_1.at(at_which_index) << endl;

    return 0;
}