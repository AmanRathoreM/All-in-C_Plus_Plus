// Date 31-05-2021

#include <iostream>

using namespace std;

int factorial_calculator(int n)
{
    int output = 1;
    if (n == 0)
    {
        return output;
    }
    while (n >= 2)
    {
        output = output * n--;
    }
    return output;
}

int main()
{
    int n;
    cout << "Please enter a number to know it's factorial of!" << endl;
    cin >> n;
    cout << "The value of factorial of " << n << " is: " << factorial_calculator(n) << endl;
    return 0;
}