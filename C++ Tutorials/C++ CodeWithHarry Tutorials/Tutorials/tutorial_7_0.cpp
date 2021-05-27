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

    int variable_7_2_int = 2;
    float variable_7_2_float = 8.4;
    char variable_7_2_char = 's';
    double variable_7_2_double = 45;
    cout << ">>>> Literals" << endl;
    cout << ">>>>>>>> Size of an \'int\' Data Type is " << sizeof(variable_7_2_int) << endl;
    cout << ">>>>>>>> Size of an \'float\' Data Type is " << sizeof(variable_7_2_float) << endl;
    cout << ">>>>>>>> Size of an \'char\' Data Type is " << sizeof(variable_7_2_char) << endl;
    cout << ">>>>>>>> Size of an \'double\' Data Type is " << sizeof(variable_7_2_double) << endl;
    cout << ">>>>>>>> Size of \'148.48\' is " << sizeof(148.48) << endl;
    cout << ">>>>>>>> Size of \'148.48f\' is " << sizeof(148.48f) << endl;
    cout << ">>>>>>>> Size of \'148.48F\' is " << sizeof(148.48F) << endl;
    cout << ">>>>>>>> Size of \'148.48l\' is " << sizeof(148.48l) << endl;
    cout << ">>>>>>>> Size of \'148.48L\' is " << sizeof(148.48L) << endl;

    int variable_7_3_var1 = 2;
    int &variable_7_3_var2 = variable_7_3_var1;
    int &variable_7_3_var3 = variable_7_3_var2;
    cout << ">>>> Reference Variables" << endl;
    cout << ">>>>>>>> Value of variable name \'variable_7_3_var1\' is " << variable_7_3_var1 << endl;
    cout << ">>>>>>>> Value of variable name \'variable_7_3_var2\' is " << variable_7_3_var2 << endl;
    cout << ">>>>>>>> Value of variable name \'variable_7_3_var3\' is " << variable_7_3_var3 << endl;
    cout << ">>>>>>>> Rember no copy is been made of any variable both variable are same if any change is applied to any of the variable that change will also aplicable on another variable." << endl;

    float variable_7_4_float = 12.4548;
    cout << ">>>> Type Casting" << endl;
    cout << ">>>>>>>> Value of variable name \'variable_7_4_float\' is " << variable_7_4_float << endl;
    cout << ">>>>>>>> Value of variable name \'variable_7_4_float\' after Type Casting into int is " << int(variable_7_4_float) << endl;
    cout << ">>>>>>>> You can simpley do Type Casting by writing the following syntax:" << endl;
    cout << ">>>>>>>> type_in_which_you_need_to_TypeCast_your_variable(variable)" << endl;
    cout << ">>>>>>>> Or" << endl;
    cout << ">>>>>>>> (type_in_which_you_need_to_TypeCast_your_variable)variable" << endl;
    return 0;
}
