// Date 29-05-2021

#include <iostream>

using namespace std;

int main()
{
    enum meal
    {
        breakfast,
        lunch,
        dinner
    };
    cout << "Value of meal " << breakfast << " is: " << breakfast << endl;
    cout << "Value of meal " << lunch << " is: " << lunch << endl;
    cout << "Value of meal " << dinner << " is: " << dinner << endl;

    meal var_1 = dinner;
    cout << "Value of var_1 is: " << var_1 << endl;
    return 0;
}