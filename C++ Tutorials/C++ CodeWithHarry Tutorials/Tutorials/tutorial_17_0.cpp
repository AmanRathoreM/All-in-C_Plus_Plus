// Date 30-05-2021

#include <iostream>

using namespace std;

inline int func_1(int a, int b) { return a * b; }

int main()
{
    int a, b;
    cout << "Please enter the value for A!" << endl;
    cin >> a;
    cout << "Please enter the value for B!" << endl;
    cin >> b;

    cout << "Function return's value is!" << endl
         << func_1(a, b);

    return 0;
}