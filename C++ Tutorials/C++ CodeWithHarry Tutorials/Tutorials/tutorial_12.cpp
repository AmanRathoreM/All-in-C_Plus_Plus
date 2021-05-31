// Date 29-05-2021

#include <iostream>

using namespace std;

int main()
{
    int variable_12_1 = 10;
    int *address_1 = &variable_12_1;
    cout << &variable_12_1 << endl
         << *address_1 << endl;

    // int variable_12_2 = 10;
    // int *address_2 = &variable_12_2;
    // cout << &address_2 << endl;

    // cout << &variable_12_1 << endl;

    return 0;
}