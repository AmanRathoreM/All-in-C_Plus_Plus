// Date 29-05-2021

#include <iostream>

using namespace std;

union money
{
    int food;
    float wheat_in_kg;
    char material;
};

int main()
{
    union money u1;
    u1.food = 7812;
    cout << "Value of food before changing is: " << u1.food << endl;
    u1.material = 'V';
    cout << "Value of food after changing is: " << u1.food << endl;
    cout << "Value of material after value of food changing is: " << u1.material << endl;

    return 0;
}