// Date 30-05-2021

#include <iostream>

using namespace std;

int calculation(int a, int b)
{
    static int c = 2;
    //* Note: After function execution stops the only value which not gets destroyed is the value of a static variable
    return a * b + c++;
    //* Note: After function execution stops the only value which not gets destroyed is the value of a static variable
}

int main()
{
    int a, b;
    cout << "Please enter the value for A!" << endl;
    cin >> a;
    cout << "Please enter the value for B!" << endl;
    cin >> b;

    cout << "Function return's value is!" << endl
         << calculation(a, b) << endl;
    cout << "Function return's value is!" << endl
         << calculation(a, b) << endl;
    cout << "Function return's value is!" << endl
         << calculation(a, b) << endl;
    cout << "Function return's value is!" << endl
         << calculation(a, b) << endl;
    cout << "Function return's value is!" << endl
         << calculation(a, b) << endl;
    cout << "Function return's value is!" << endl
         << calculation(a, b) << endl;
    cout << "Function return's value is!" << endl
         << calculation(a, b) << endl;
    cout << "Function return's value is!" << endl
         << calculation(a, b) << endl;
    cout << "Function return's value is!" << endl
         << calculation(a, b) << endl;
    cout << "Function return's value is!" << endl
         << calculation(a, b) << endl;
    cout << "Function return's value is!" << endl
         << calculation(a, b) << endl;
    cout << "Function return's value is!" << endl
         << calculation(a, b) << endl;

    return 0;
}