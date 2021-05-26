// Date 25-05-2021

#include <iostream>
using namespace std;

int main()
{
    // int num_1 = 2, num_2 = 4;
    int num_1, num_2;

    cout << "Please Enter the value of num_1" << endl;
    cin >> num_1;
    cout << "Please Enter the value of num_2" << endl;
    cin >> num_2;
    cout << endl;

    cout << "Operators in C++" << endl;
    cout << "Following are the types of C++ Operators" << endl;

    cout << ">>>> Arithmatic Operators in C++" << endl;
    cout << ">>>>>>>> The value of " << num_1 << " + " << num_2 << " is " << num_1 + num_2 << endl;
    cout << ">>>>>>>> The value of " << num_1 << " - " << num_2 << " is " << num_1 - num_2 << endl;
    cout << ">>>>>>>> The value of " << num_1 << " * " << num_2 << " is " << num_1 * num_2 << endl;
    cout << ">>>>>>>> The value of " << num_1 << " / " << num_2 << " is " << num_1 / num_2 << endl;
    cout << ">>>>>>>> The value of " << num_1 << " \% " << num_2 << " is " << num_1 % num_2 << endl;
    cout << ">>>>>>>> The value of " << num_1 << "++  is " << num_1++ << endl;
    //* Due to above line of code value of num_1 will become num_1 + 1
    cout << ">>>>>>>> The value of " << num_1 << "--  is " << num_1-- << endl;
    //* Due to above line of code value of num_1 will become num_1 - 1
    cout << ">>>>>>>> The value of ++" << num_1 << "  is " << ++num_1 << endl;
    //* Due to above line of code value of num_1 will become 1 + num_1
    cout << ">>>>>>>> The value of --" << num_1 << "  is " << --num_1 << endl
         << endl;
    //* Due to above line of code value of num_1 will become 1 - num_1

    return 0;
}
