// Date 26-05-2021
#include <iostream>

using namespace std;

int main()
{
    int variable_7_3_var1 = 2;
    int &variable_7_3_var2 = variable_7_3_var1;
    int &variable_7_3_var3 = variable_7_3_var2;

    cout << ">>>> Reference Variables" << endl;
    cout << ">>>>>>>> Value of variable name \'variable_7_3_var1\' is " << variable_7_3_var1 << endl;
    cout << ">>>>>>>> Value of variable name \'variable_7_3_var2\' is " << variable_7_3_var2 << endl;
    cout << ">>>>>>>> Value of variable name \'variable_7_3_var3\' is " << variable_7_3_var3 << endl;
    cout << ">>>>>>>> Rember no copy is been made of any variable both variable are same if any change is applied to any of the variable that change will also aplicable on another variable." << endl;
    return 0;
}
