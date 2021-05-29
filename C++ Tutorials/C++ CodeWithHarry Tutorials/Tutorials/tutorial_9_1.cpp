// Date 28-05-2021

#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "What is Your Age!" << endl;
    cin >> age;
    if (age < 0)
    {
        cout << "Your age is " << age << " which is not a valid age please enter a valid age and try again!" << endl;
    }
    else if (age < 18)
    {
        cout << "Your age is " << age << " which is a small age to drink Beer, So you can't drink Beer!" << endl;
    }
    else if (age == 18)
    {
        cout << "Your age is 18 so you can drink Beer next Year!" << endl;
    }
    else if (age > 18 && age < 60)
    {
        cout << "Your age is " << age << " so you can drink Beer!" << endl;
    }
    else if (age >= 60)
    {
        cout << "Your age is " << age << " which is to much and it can be dangerous in this age to drink so you can't drink Beer!" << endl;
    }

    return 0;
}
