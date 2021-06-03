// Date 31-05-2021

#include <iostream>

using namespace std;

int sum(int a, int b, int c)
{
    cout << "Using function with three argunments" << endl;
    return a + b + c;
}
int sum(int a, int b)
{
    cout << "Using function with two argunments" << endl;
    return a + b;
}

int main()
{
    cout << "The value of 3 + 7 (using sum function) is: " << sum(3, 7) << endl;
    cout << "The value of 3 + 7 + 10 (using sum function) is: " << sum(3, 7, 10) << endl;
    return 0;
}