// Date 27-05-2021

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int variable_8_2_1 = 21, variable_8_2_2 = 7814, variable_8_2_3 = 874652;
    cout << ">>>> Manipulators in C++" << endl;
    cout << ">>>>>>>> Value of variable name variable_8_2_1 is:" << setw(9) << variable_8_2_1 << endl;
    cout << ">>>>>>>> Value of variable name variable_8_2_2 is:" << setw(9) << variable_8_2_2 << endl;
    cout << ">>>>>>>> Value of variable name variable_8_2_3 is:" << setw(9) << variable_8_2_3 << endl;
    return 0;
}
