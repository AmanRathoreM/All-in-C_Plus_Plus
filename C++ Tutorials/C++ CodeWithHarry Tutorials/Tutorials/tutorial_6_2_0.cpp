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
    cout << ">>>>>>>> The value of --" << num_1 << "  is " << --num_1 << endl;
    //* Due to above line of code value of num_1 will become 1 - num_1

    cout << ">>>> Assignment Operators in C++" << endl;
    cout << ">>>>>>>> In C++ Assignment Operators are used to assign values to any variable." << endl;
    cout << ">>>>>>>> Such as:" << endl;
    cout << ">>>>>>>> int x = 1;" << endl;
    cout << ">>>>>>>> char y = 'S';" << endl;
    cout << ">>>>>>>> Here \'=\' is an Assignment Operator." << endl;
    //* These operators are used to assign values to any variable
    int x = 1;
    char y = 'S';

    cout << ">>>> Comparision Operators in C++" << endl;
    cout << ">>>>>>>> The value of " << num_1 << " == " << num_2 << " is " << (num_1 == num_2) << endl;
    cout << ">>>>>>>> The value of " << num_1 << " != " << num_2 << " is " << (num_1 != num_2) << endl;
    cout << ">>>>>>>> The value of " << num_1 << " > " << num_2 << " is " << (num_1 > num_2) << endl;
    cout << ">>>>>>>> The value of " << num_1 << " < " << num_2 << " is " << (num_1 < num_2) << endl;
    cout << ">>>>>>>> The value of " << num_1 << " >= " << num_2 << " is " << (num_1 >= num_2) << endl;
    cout << ">>>>>>>> The value of " << num_1 << " <= " << num_2 << " is " << (num_1 <= num_2) << endl;

    cout << ">>>> Logical Operators" << endl;
    cout << ">>>>>>>> The value of Logical's AND operator i.e. ((" << num_1 << " == " << num_2 << ")"
         << " && (" << num_1 << " <= " << num_2 << "))"
         << " is " << ((num_1 == num_2) && (num_1 <= num_2)) << endl;
    cout << ">>>>>>>> The value of Logical's OR operator i.e. ((" << num_1 << " == " << num_2 << ")"
         << " || (" << num_1 << " <= " << num_2 << "))"
         << " is " << ((num_1 == num_2) || (num_1 <= num_2)) << endl;
    cout << ">>>>>>>> The value of Logical's NOT operator i.e. (!(" << num_1 << " == " << num_2 << ")) is " << (!(num_1 == num_2)) << endl;

    cout << ">>>> Bitwise Operators" << endl;
    cout << ">>>>>>>> The value of Bitwise's AND \'&\' operator i.e. (" << num_1 << " & " << num_2 << ") is " << (num_1 & num_2) << endl;
    cout << ">>>>>>>> The value of Bitwise's OR \'|\' operator i.e. (" << num_1 << " | " << num_2 << ") is " << (num_1 | num_2) << endl;
    cout << ">>>>>>>> The value of Bitwise's NOT \'~\' operator i.e. (~" << num_1 << ") is " << (~num_1) << " and (~" << num_2 << ") is " << (~num_2) << endl;
    cout << ">>>>>>>> The value of Bitwise's XOR \'^\' operator i.e. (" << num_1 << " ^ " << num_2 << ") is " << (num_1 ^ num_2) << endl;
    cout << ">>>>>>>> The value of Bitwise's Left Shift \'<<\' operator i.e. (" << num_1 << " << " << num_2 << ") is " << (num_1 << num_2) << endl;
    cout << ">>>>>>>> The value of Bitwise's Right Shift \'>>\' operator i.e. (" << num_1 << " >> " << num_2 << ") is " << (num_1 >> num_2) << endl;

    return 0;
}
