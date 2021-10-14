/*
Date 14-10-2021

In this tutorial, you will learn about function objects
Note: We also call function object as Functor
*/

#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{

    int arr[] = {45, 78, 36, 94, 12, 98, 89, 54, 32, 87, 15, 54, 4, 85, 63, 41, 74, 85, 93, 75};

    for (int i = 0; i < 20; i++)
    {
        cout << *(arr + i) << " ";
    }

    sort(arr, arr + 20, greater<int>());

    cout << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << *(arr + i) << " ";
        // cout << "Element on index number " << i << " is " << (arr + i) << " \n";
    }

    return 0;
}