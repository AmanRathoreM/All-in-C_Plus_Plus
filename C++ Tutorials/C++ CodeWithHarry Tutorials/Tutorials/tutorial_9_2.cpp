// Date 28-05-2021

#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "What is Your Age!" << endl;
    cin >> age;
    switch (age)
    {
    case 0:
        cout << "Your age is 0 so you can't drink Beer!" << endl;
        break;
    case 18:
        cout << "Your age is 18 so you can drink Beer next Year!" << endl;
        break;
    case 19:
        cout << "Your age is 19 so you can drink Beer!" << endl;
        break;
    case 45:
        cout << "Your age is 45 so you can drink Beer!" << endl;
        break;
    case 60:
        cout << "Your age is 60 so you can drink Beer but don't drink much!" << endl;
        break;
    default:
        break;
    }
    return 0;
}
