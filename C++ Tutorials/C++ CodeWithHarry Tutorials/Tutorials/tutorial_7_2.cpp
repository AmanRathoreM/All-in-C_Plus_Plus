// Date 26-05-2021
#include <iostream>

using namespace std;

int main()
{
    int variable_7_2_int = 2;
    float variable_7_2_float = 8.4;
    char variable_7_2_char = 's';
    double variable_7_2_double = 45;

    cout << ">>>> Literals" << endl;
    cout << ">>>>>>>> Size of an \'int\' Data Type is " << sizeof(variable_7_2_int) << endl;
    cout << ">>>>>>>> Size of an \'float\' Data Type is " << sizeof(variable_7_2_float) << endl;
    cout << ">>>>>>>> Size of an \'char\' Data Type is " << sizeof(variable_7_2_char) << endl;
    cout << ">>>>>>>> Size of an \'double\' Data Type is " << sizeof(variable_7_2_double) << endl;
    cout << ">>>>>>>>" << endl;
    cout << ">>>>>>>> Size of \'148.48\' is " << sizeof(148.48) << endl;
    cout << ">>>>>>>> Size of \'148.48f\' is " << sizeof(148.48f) << endl;
    cout << ">>>>>>>> Size of \'148.48F\' is " << sizeof(148.48F) << endl;
    cout << ">>>>>>>> Size of \'148.48l\' is " << sizeof(148.48l) << endl;
    cout << ">>>>>>>> Size of \'148.48L\' is " << sizeof(148.48L) << endl;
    return 0;
}
