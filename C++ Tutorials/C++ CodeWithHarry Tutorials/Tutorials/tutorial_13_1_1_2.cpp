// Date 29-05-2021

#include <iostream>

using namespace std;

int main()
{
    char name[4] = {'A',
                    'm',
                    'a',
                    'n'};
    cout << "Hello ";
    for (int i = 0; i < 4; i++)
    {

        cout << name[i];
    }

    return 0;
}