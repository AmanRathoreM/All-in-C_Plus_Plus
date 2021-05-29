// Date 26-05-2021
#include <iostream>

using namespace std;

int variable_7_1 = 2;

int main()
{
    int variable_7_1 = 45;
    cout << ">>>> Using a global variable in a function" << endl;
    cout << ">>>>>>>> Variable of name \'variable_7_1\' which is defined inside a function is " << variable_7_1 << endl;
    cout << ">>>>>>>> Variable of name \'variable_7_1\' which is defined in Global Scope i.e. outside a function; and using it by adding \'::\' before variable name is " << ::variable_7_1 << endl;
    return 0;
}
