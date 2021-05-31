// Date 29-05-2021

#include <iostream>

using namespace std;

int main()
{
    int array_1[10] = {12, 3, 45, 7, 6, 12, 87, 34, 45, 23};
    int *pointer = array_1;
    for (int i = 0; i < 10; i++)
    {
        cout << "Value of array_1[" << i << "] location is " << pointer << " and it's value is " << *pointer++ << endl;
    }

    return 0;
}