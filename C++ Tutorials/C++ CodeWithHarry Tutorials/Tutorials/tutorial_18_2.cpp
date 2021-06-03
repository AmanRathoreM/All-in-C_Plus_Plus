// Date 31-05-2021

// * In previous code(i.e. "tutorial_18_1.cpp") of finding we had written a long function to find the factorial of but in this code we will write a function which uses reccrussion to find the factorial off
// * In previous code(i.e. "tutorial_18_1.cpp") of finding we had written a long function to find the factorial of but in this code we will write a function which uses reccrussion to find the factorial off
// * In previous code(i.e. "tutorial_18_1.cpp") of finding we had written a long function to find the factorial of but in this code we will write a function which uses reccrussion to find the factorial off
// * In previous code(i.e. "tutorial_18_1.cpp") of finding we had written a long function to find the factorial of but in this code we will write a function which uses reccrussion to find the factorial off
// * In previous code(i.e. "tutorial_18_1.cpp") of finding we had written a long function to find the factorial of but in this code we will write a function which uses reccrussion to find the factorial off
// * In previous code(i.e. "tutorial_18_1.cpp") of finding we had written a long function to find the factorial of but in this code we will write a function which uses reccrussion to find the factorial off
// * In previous code(i.e. "tutorial_18_1.cpp") of finding we had written a long function to find the factorial of but in this code we will write a function which uses reccrussion to find the factorial off
// * In previous code(i.e. "tutorial_18_1.cpp") of finding we had written a long function to find the factorial of but in this code we will write a function which uses reccrussion to find the factorial off
// * In previous code(i.e. "tutorial_18_1.cpp") of finding we had written a long function to find the factorial of but in this code we will write a function which uses reccrussion to find the factorial off
// * In previous code(i.e. "tutorial_18_1.cpp") of finding we had written a long function to find the factorial of but in this code we will write a function which uses reccrussion to find the factorial off

#include <iostream>

using namespace std;

int factorial_calculator(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial_calculator(n - 1);
}

int fibonacci_calculator(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fibonacci_calculator(n - 1) + fibonacci_calculator(n - 2);
}

int main()
{
    int n;
    cout << "Please enter a number to know it's factorial and fibonacci of!" << endl;
    cin >> n;
    cout << "The value of factorial of " << n << " is: " << factorial_calculator(n) << endl
         << "The value of fibonacci of " << n << " is: " << fibonacci_calculator(n) << endl;
    return 0;
}