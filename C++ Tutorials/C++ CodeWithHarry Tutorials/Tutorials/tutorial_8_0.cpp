// Date 27-05-2021

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    const int variable_8_1 = 77;
    //*the below line of code will give an error
    // variable_8_1 = 2;
    //*the above line of code will give an error
    cout << ">>>> Constants in C++" << endl;
    cout << ">>>>>>>> To create a constants variable in C++ just write constant before the syntax of declaring a Variable for example: " << endl;
    cout << ">>>>>>>> const int variable_8_1 = 77;" << endl;

    int variable_8_2_1 = 21, variable_8_2_2 = 7814, variable_8_2_3 = 874652;
    cout << ">>>> Manipulators in C++" << endl;
    cout << ">>>>>>>> Value of variable name variable_8_2_1 is:" << setw(9) << variable_8_2_1 << endl;
    cout << ">>>>>>>> Value of variable name variable_8_2_2 is:" << setw(9) << variable_8_2_2 << endl;
    cout << ">>>>>>>> Value of variable name variable_8_2_3 is:" << setw(9) << variable_8_2_3 << endl;

    cout << ">>>> Operator Precendence" << endl;
    cout
        << ">>>>>>>> The value of 2 + 3 * 6 / 6 * 7 - 9 is: " << 2 + 3 * 6 / 6 * 7 - 9 << endl;
    return 0;
}
