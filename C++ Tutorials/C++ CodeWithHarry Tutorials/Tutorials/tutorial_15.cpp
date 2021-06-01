// Date 30-05-2021

#include <iostream>

using namespace std;

void for_printing(void)
{
    cout << "Hello!" << endl;
}
int square(int);
int main()
{
    int num1;
    cout << "Please enter a number to know it's sqare" << endl;
    cin >> num1;
    cout << square(num1) << endl;
    for_printing();

    return 0;
}

int square(int x)
{
    int y;
    y = x * x;
    return y;
}
