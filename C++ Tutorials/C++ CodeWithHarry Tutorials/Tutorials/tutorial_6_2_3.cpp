// Date 25-05-2021

#include <iostream>
using namespace std;

int main()
{
    int num_1, num_2;

    cout << "Please Enter the value of num_1" << endl;
    cin >> num_1;
    cout << "Please Enter the value of num_2" << endl;
    cin >> num_2;
    cout << endl;

    cout << "Operators in C++" << endl;
    cout << "Following are the types of C++ Operators" << endl;

    cout << ">>>> Comparision Operators in C++" << endl;
    cout << ">>>>>>>> The value of " << num_1 << " == " << num_2 << " is " << (num_1 == num_2) << endl;
    cout << ">>>>>>>> The value of " << num_1 << " != " << num_2 << " is " << (num_1 != num_2) << endl;
    cout << ">>>>>>>> The value of " << num_1 << " > " << num_2 << " is " << (num_1 > num_2) << endl;
    cout << ">>>>>>>> The value of " << num_1 << " < " << num_2 << " is " << (num_1 < num_2) << endl;
    cout << ">>>>>>>> The value of " << num_1 << " >= " << num_2 << " is " << (num_1 >= num_2) << endl;
    cout << ">>>>>>>> The value of " << num_1 << " <= " << num_2 << " is " << (num_1 <= num_2) << endl;
    return 0;
}
