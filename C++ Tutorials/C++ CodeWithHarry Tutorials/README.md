# <h1 style="text-align:center; font-size:360%; font-family:verdana;color:#4A3E76;"><em>C++</em></h1>

# These tutorials are watched from [CodeWithHarry](https://www.youtube.com/channel/UCeVMnSShP_Iviwkknt83cww "Clike here to checkout his channel") YouTube Channel's [C++ Playlist](https://youtube.com/playlist?list=PLu0W_9lII9agpFUAlPFe_VNSlXW5uE0YL "Clike here to check out his C++ tutorials Playlist").

---

---

---

---

---

## **_1.) tutorial_1 of C++_**

### [**_Click me_**](tutorial_1.cpp "Clike here to see full file") to see full file of tutorial_1

```C++
// Date 24-05-2021
#include <iostream>
int main()
{
    std::cout << "hello";
    return 0;
}

```

---

---

## **_2.) tutorial_3 of C++_**

### [**_Click me_**](tutorial_3.cpp "Clike here to see full file") to see full file of tutorial_3

```C++
// Date 24-05-2021
#include <iostream>
using namespace std;
int main()
{
    // This is a Single line comment
    //todo This is a Single line comment
    //* This is a Single line comment
    //? This is a Single line comment
    //! This is a Single line comment

    // The down part is a variable
    int integer_variable = 20;
    // The upper part is a variable

    cout << "hello" << integer_variable + 20;
    return 0;
    /*
    This is a Multi line comment
    You can write here
    You can write here
    You can write here
    You can write here
    */
}

```

---

---

## **_3.) tutorial_4_1 of C++_**

### [**_Click me_**](tutorial_4_1.cpp "Clike here to see full file") to see full file of tutorial_4_1

```C++
// Date 24-05-2021
#include <iostream>
using namespace std;
int main()
{
    //? int a = 4;
    //? int b = 5;
    int a = 4, b = 5;
    float pi = 3.1428571428571428571428571428571;
    char character = '@';
    cout << "This is tutorial 4.\nHere the value of a is " << a << ".\nThe value of b is " << b << ".\nThe value of Pi is " << pi;
    cout << "\nCharacter is " << character;
    return 0;
}
```

---

---

## **_4.) tutorial_4_2 of C++_**

### [**_Click me_**](tutorial_4_2.cpp "Clike here to see full file") to see full file of tutorial_4_2

```C++
// Date 24-05-2021
#include <iostream>
using namespace std;

int a_global_variable = 9;

void function_1()
{
    bool is_true_or_not_1 = true;
    bool is_true_or_not_2 = false;
    int local_variable = 78;
    cout << "\n\n\n\n\nFunction_1\'s local variable is " << local_variable;
    cout << "\nGlobal variable is " << a_global_variable;
    cout << "\nValue of True is " << is_true_or_not_1;
    cout << "\nValue of False is " << is_true_or_not_2;
}
int main()
{
    cout << "\n\n\nGlobal variable is " << a_global_variable;
    a_global_variable = 45;
    cout << "\nGlobal variable after change is " << a_global_variable;

    //* The below line will throw an Error
    //? cout << "\nOther Function local variable is " << local_variable;
    //* The above line will throw an Error
    function_1();

    return 0;
}
```

---

---

## **_5.) tutorial_5 of C++_**

### [**_Click me_**](tutorial_5.cpp "Clike here to see full file") to see full file of tutorial_5

```C++
// Date 25-05-2021

#include <iostream>
using namespace std;

int main()
{
    int variable_1, variable_2;
    //* << is called Insertion operator
    cout << "Enter the value 1 to add:\n";
    //* << is called Insertion operator
    //* >> is called Extration operator
    cin >> variable_1;
    //* >> is called Extration operator

    //* << is called Insertion operator
    cout << "Enter the value 2 to add:\n";
    //* << is called Insertion operator
    //* >> is called Extration operator
    cin >> variable_2;
    //* >> is called Extration operator

    cout << "Sum of your values is: " << variable_1 + variable_2;

    return 0;
}

```

---

---

## **_6.) tutorial_6_1 of C++_**

### [**_Click me_**](tutorial_6_1.cpp "Clike here to see full file") to see full file of tutorial_6_1

```C++
// Date 25-05-2021

#include <iostream>
#include "tutorial_6_1__functions__.cpp"

//* The below line of code will produce an error if func1.cpp is not precente in the current directory
// #include "func1.cpp"
//* The above line of code will produce an error if func1.cpp is not precente in the current directory

using namespace std;

int main()
{
    cout << "Header files in C++";
    return 0;
}

```

---

---

## **\_7.) tutorial_6_1**functions** of C++\_**

### [**_Click me_**](tutorial_6_1__functions__.cpp "Clike here to see full file") to see full file of tutorial_6_1**functions**

```C++
// Date 26-05-2021
```

---

---

## **_8.) tutorial_6_2_0 of C++_**

### [**_Click me_**](tutorial_6_2_0.cpp "Clike here to see full file") to see full file of tutorial_6_2_0

```C++
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

```

---

---

## **_9.) tutorial_6_2_1 of C++_**

### [**_Click me_**](tutorial_6_2_1.cpp "Clike here to see full file") to see full file of tutorial_6_2_1

```C++
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

```

---

---

## **_10.) tutorial_6_2_2 of C++_**

### [**_Click me_**](tutorial_6_2_2.cpp "Clike here to see full file") to see full file of tutorial_6_2_2

```C++
// Date 25-05-2021

#include <iostream>
using namespace std;

int main()
{

    cout << "Operators in C++" << endl;
    cout << "Following are the types of C++ Operators" << endl;

    cout << ">>>> Assignment Operators in C++" << endl;
    cout << ">>>>>>>> In C++ Assignment Operators are used to assign values to any variable." << endl;
    cout << ">>>>>>>> Such as:" << endl;
    cout << ">>>>>>>> int x = 1;" << endl;
    cout << ">>>>>>>> char y = 'S';" << endl;
    cout << ">>>>>>>> Here \'=\' is an Assignment Operator." << endl;
    //* These operators are used to assign values to any variable
    int x = 1;
    char y = 'S';
    return 0;
}

```

---

---

## **_11.) tutorial_6_2_3 of C++_**

### [**_Click me_**](tutorial_6_2_3.cpp "Clike here to see full file") to see full file of tutorial_6_2_3

```C++
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

```

---

---

## **_12.) tutorial_6_2_4 of C++_**

### [**_Click me_**](tutorial_6_2_4.cpp "Clike here to see full file") to see full file of tutorial_6_2_4

```C++
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

    cout << ">>>> Logical Operators" << endl;
    cout << ">>>>>>>> The value of Logical's AND operator i.e. ((" << num_1 << " == " << num_2 << ")"
         << " && (" << num_1 << " <= " << num_2 << "))"
         << " is " << ((num_1 == num_2) && (num_1 <= num_2)) << endl;
    cout << ">>>>>>>> The value of Logical's OR operator i.e. ((" << num_1 << " == " << num_2 << ")"
         << " || (" << num_1 << " <= " << num_2 << "))"
         << " is " << ((num_1 == num_2) || (num_1 <= num_2)) << endl;
    cout << ">>>>>>>> The value of Logical's NOT operator i.e. (!(" << num_1 << " == " << num_2 << ")) is " << (!(num_1 == num_2)) << endl;

    return 0;
}

```

---

---

## **_13.) tutorial_6_2_5 of C++_**

### [**_Click me_**](tutorial_6_2_5.cpp "Clike here to see full file") to see full file of tutorial_6_2_5

```C++
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

    cout << ">>>> Bitwise Operators" << endl;
    cout << ">>>>>>>> The value of Bitwise's AND \'&\' operator i.e. (" << num_1 << " & " << num_2 << ") is " << (num_1 & num_2) << endl;
    cout << ">>>>>>>> The value of Bitwise's OR \'|\' operator i.e. (" << num_1 << " | " << num_2 << ") is " << (num_1 | num_2) << endl;
    cout << ">>>>>>>> The value of Bitwise's NOT \'~\' operator i.e. (~" << num_1 << ") is " << (~num_1) << " and (~" << num_2 << ") is " << (~num_2) << endl;
    cout << ">>>>>>>> The value of Bitwise's XOR \'^\' operator i.e. (" << num_1 << " ^ " << num_2 << ") is " << (num_1 ^ num_2) << endl;
    cout << ">>>>>>>> The value of Bitwise's Left Shift \'<<\' operator i.e. (" << num_1 << " << " << num_2 << ") is " << (num_1 << num_2) << endl;
    cout << ">>>>>>>> The value of Bitwise's Right Shift \'>>\' operator i.e. (" << num_1 << " >> " << num_2 << ") is " << (num_1 >> num_2) << endl;
    return 0;
}

```

---

---

## **_14.) tutorial_7_0 of C++_**

### [**_Click me_**](tutorial_7_0.cpp "Clike here to see full file") to see full file of tutorial_7_0

```C++
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

```

---

---

## **_15.) tutorial_7_1 of C++_**

### [**_Click me_**](tutorial_7_1.cpp "Clike here to see full file") to see full file of tutorial_7_1

```C++
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

```

---

---

## **_16.) tutorial_7_2 of C++_**

### [**_Click me_**](tutorial_7_2.cpp "Clike here to see full file") to see full file of tutorial_7_2

```C++
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

```

---

---

## **_17.) tutorial_7_3 of C++_**

### [**_Click me_**](tutorial_7_3.cpp "Clike here to see full file") to see full file of tutorial_7_3

```C++
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

```

---

---

## **_18.) tutorial_7_4 of C++_**

### [**_Click me_**](tutorial_7_4.cpp "Clike here to see full file") to see full file of tutorial_7_4

```C++
// Date 26-05-2021
#include <iostream>

using namespace std;

int main()
{
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

```

---

---

## **_19.) tutorial_8_0 of C++_**

### [**_Click me_**](tutorial_8_0.cpp "Clike here to see full file") to see full file of tutorial_8_0

```C++
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

```

---

---

## **_20.) tutorial_8_1 of C++_**

### [**_Click me_**](tutorial_8_1.cpp "Clike here to see full file") to see full file of tutorial_8_1

```C++
// Date 27-05-2021

#include <iostream>

using namespace std;

int main()
{
    const int variable_8_1 = 77;

    //*the below line of code will give an error
    // variable_8_1 = 2;
    //*the above line of code will give an error
    cout << ">>>> Constants in C++" << endl;
    cout << ">>>>>>>> To create a constants variable in C++ just write constant before the syntax of declaring a Variable for example: " << endl;
    cout << ">>>>>>>> const int variable_8_1 = 77;" << endl;
    return 0;
}

```

---

---

## **_21.) tutorial_8_2 of C++_**

### [**_Click me_**](tutorial_8_2.cpp "Clike here to see full file") to see full file of tutorial_8_2

```C++
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

```

---

---

## **_22.) tutorial_8_3 of C++_**

### [**_Click me_**](tutorial_8_3.cpp "Clike here to see full file") to see full file of tutorial_8_3

```C++
// Date 27-05-2021

#include <iostream>

using namespace std;

int main()
{
    cout << ">>>> Operator Precendence" << endl;
    cout << ">>>>>>>> The value of 2 + 3 * 6 / 6 * 7 - 9 is: " << 2 + 3 * 6 / 6 * 7 - 9 << endl;
    return 0;
}

```

---

---

## **_23.) tutorial_9_1 of C++_**

### [**_Click me_**](tutorial_9_1.cpp "Clike here to see full file") to see full file of tutorial_9_1

```C++
// Date 28-05-2021

#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "What is Your Age!" << endl;
    cin >> age;
    if (age < 0)
    {
        cout << "Your age is " << age << " which is not a valid age please enter a valid age and try again!" << endl;
    }
    else if (age < 18)
    {
        cout << "Your age is " << age << " which is a small age to drink Beer, So you can't drink Beer!" << endl;
    }
    else if (age == 18)
    {
        cout << "Your age is 18 so you can drink Beer next Year!" << endl;
    }
    else if (age > 18 && age < 60)
    {
        cout << "Your age is " << age << " so you can drink Beer!" << endl;
    }
    else if (age >= 60)
    {
        cout << "Your age is " << age << " which is to much and it can be dangerous in this age to drink so you can't drink Beer!" << endl;
    }

    return 0;
}

```

---

---

## **_24.) tutorial_9_2 of C++_**

### [**_Click me_**](tutorial_9_2.cpp "Clike here to see full file") to see full file of tutorial_9_2

```C++
// Date 28-05-2021

#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "What is Your Age!" << endl;
    cin >> age;
    switch (age)
    {
    case 0:
        cout << "Your age is 0 so you can't drink Beer!" << endl;
        break;
    case 18:
        cout << "Your age is 18 so you can drink Beer next Year!" << endl;
        break;
    case 19:
        cout << "Your age is 19 so you can drink Beer!" << endl;
        break;
    case 45:
        cout << "Your age is 45 so you can drink Beer!" << endl;
        break;
    case 60:
        cout << "Your age is 60 so you can drink Beer but don't drink much!" << endl;
        break;
    default:
        break;
    }
    return 0;
}

```

---

---

## **_25.) tutorial_10_1_1 of C++_**

### [**_Click me_**](tutorial_10_1_1.cpp "Clike here to see full file") to see full file of tutorial_10_1_1

```C++
// Date 28-05-2021

#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        cout << i << endl;
    }

    return 0;
}

```

---

---

## **_26.) tutorial_10_1_2 of C++_**

### [**_Click me_**](tutorial_10_1_2.cpp "Clike here to see full file") to see full file of tutorial_10_1_2

```C++
// Date 28-05-2021

#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    while (i <= 100)
    {
        cout << i++ << endl;
    }

    return 0;
}

```

---

---

## **_27.) tutorial_10_1_3_1 of C++_**

### [**_Click me_**](tutorial_10_1_3_1.cpp "Clike here to see full file") to see full file of tutorial_10_1_3_1

```C++
// Date 28-05-2021

#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    do
    {
        cout << i++ << endl;
    } while (i <= 100);

    return 0;
}

```

---

---

## **_28.) tutorial_10_1_3_1_2 of C++_**

### [**_Click me_**](tutorial_10_1_3_1_2.cpp "Clike here to see full file") to see full file of tutorial_10_1_3_1_2

```C++
// Date 28-05-2021

#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    //* Note: do while loop will execute atleast once
    do
    {
        cout << i++ << endl;
    } while (false);
    //* Note: do while loop will execute atleast once
    return 0;
}

```

---

---

## **_29.) tutorial_10_2_quiz of C++_**

### [**_Click me_**](tutorial_10_2_quiz.cpp "Clike here to see full file") to see full file of tutorial_10_2_quiz

```C++
// Date 28-05-2021
//* Make a Multiplacation Table of 6 using do while loop
//* Make a Multiplacation Table of 6 using do while loop
//* Make a Multiplacation Table of 6 using do while loop
//* Make a Multiplacation Table of 6 using do while loop
//* Make a Multiplacation Table of 6 using do while loop
//* Make a Multiplacation Table of 6 using do while loop
//* Make a Multiplacation Table of 6 using do while loop
//* Make a Multiplacation Table of 6 using do while loop
//* Make a Multiplacation Table of 6 using do while loop
//* Make a Multiplacation Table of 6 using do while loop
#include <iostream>

using namespace std;

int main()
{
    int i = 6;
    int number_of_time_table_printed = 1;
    do
    {
        cout << "6 * " << number_of_time_table_printed++ << " = " << i << endl;
        i = i + 6;
    } while (i <= 60);
    return 0;
}

```

---

---

## **_30.) tutorial_11_1 of C++_**

### [**_Click me_**](tutorial_11_1.cpp "Clike here to see full file") to see full file of tutorial_11_1

```C++
// Date 29-05-2021

#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i <= 100; i++)
    {
        if (i == 10)
        {
            break;
        }
        cout << "Hello Aman " << i << " time!" << endl;
    }
    return 0;
}
```

---

---

## **_31.) tutorial_11_2 of C++_**

### [**_Click me_**](tutorial_11_2.cpp "Clike here to see full file") to see full file of tutorial_11_2

```C++
// Date 29-05-2021

#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i <= 100; i++)
    {
        if (i == 10)
        {
            continue;
        }
        cout << "Hello Aman " << i << " time!" << endl;
    }
    return 0;
}
```

---

---

## **_32.) tutorial_12 of C++_**

### [**_Click me_**](tutorial_12.cpp "Clike here to see full file") to see full file of tutorial_12

```C++
// Date 29-05-2021

#include <iostream>

using namespace std;

int main()
{
    int variable_12_1 = 10;
    int *address_1 = &variable_12_1;
    cout << &variable_12_1 << endl
         << *address_1 << endl;

    // int variable_12_2 = 10;
    // int *address_2 = &variable_12_2;
    // cout << &address_2 << endl;

    // cout << &variable_12_1 << endl;

    return 0;
}
```

---

---

## **_33.) tutorial_13_1_1_1 of C++_**

### [**_Click me_**](tutorial_13_1_1_1.cpp "Clike here to see full file") to see full file of tutorial_13_1_1_1

```C++
// Date 29-05-2021

#include <iostream>

using namespace std;

int main()
{
    int array_1[10] = {12, 3, 45, 7, 6, 12, 87, 34, 45, 23};
    for (int i = 0; i < 10; i++)
    {
        cout << "Value of array_1[" << i << "] is " << array_1[i] << endl;
    }
    return 0;
}

```

---

---

## **_34.) tutorial_13_1_1_2 of C++_**

### [**_Click me_**](tutorial_13_1_1_2.cpp "Clike here to see full file") to see full file of tutorial_13_1_1_2

```C++
// Date 29-05-2021

#include <iostream>

using namespace std;

int main()
{
    char name[4] = {'A',
                    'm',
                    'a',
                    'n'};
    cout << "Hello ";
    for (int i = 0; i < 4; i++)
    {

        cout << name[i];
    }

    return 0;
}
```

---

---

## **_35.) tutorial_13_1_2 of C++_**

### [**_Click me_**](tutorial_13_1_2.cpp "Clike here to see full file") to see full file of tutorial_13_1_2

```C++
// Date 29-05-2021

#include <iostream>

using namespace std;

int main()
{
    int array_1[10] = {12, 3, 45, 7, 6, 12, 87, 34, 45, 23};
    int *pointer = array_1;
    for (int i = 0; i < 10; i++)
    {
        cout << "Value of array_1[" << i << "] location is " << pointer << " and it's value is " << *pointer++ << endl;
    }

    return 0;
}
```

---

---

## **_36.) tutorial_13_2_1_quiz of C++_**

### [**_Click me_**](tutorial_13_2_1_quiz.cpp "Clike here to see full file") to see full file of tutorial_13_2_1_quiz

```C++
// Date 29-05-2021

//* Make an array of 10 indices and print it using while loop
//* Make an array of 10 indices and print it using while loop
//* Make an array of 10 indices and print it using while loop
//* Make an array of 10 indices and print it using while loop
//* Make an array of 10 indices and print it using while loop
//* Make an array of 10 indices and print it using while loop
//* Make an array of 10 indices and print it using while loop
//* Make an array of 10 indices and print it using while loop
//* Make an array of 10 indices and print it using while loop
//* Make an array of 10 indices and print it using while loop

#include <iostream>

using namespace std;

int main()
{
    int array_1[10] = {12, 3, 45, 7, 6, 12, 87, 34, 45, 23};
    int i = 0;
    while (i < 10)
    {

        cout << "Value of array_1[" << i << "] is " << array_1[i++] << endl;
    }
    return 0;
}

```

---

---

## **_37.) tutorial_13_2_2_quiz of C++_**

### [**_Click me_**](tutorial_13_2_2_quiz.cpp "Clike here to see full file") to see full file of tutorial_13_2_2_quiz

```C++
// Date 29-05-2021

//* Make an array of 10 indices and print it using do while loop
//* Make an array of 10 indices and print it using do while loop
//* Make an array of 10 indices and print it using do while loop
//* Make an array of 10 indices and print it using do while loop
//* Make an array of 10 indices and print it using do while loop
//* Make an array of 10 indices and print it using do while loop
//* Make an array of 10 indices and print it using do while loop
//* Make an array of 10 indices and print it using do while loop
//* Make an array of 10 indices and print it using do while loop
//* Make an array of 10 indices and print it using do while loop

#include <iostream>

using namespace std;

int main()
{
    int array_1[10] = {12, 3, 45, 7, 6, 12, 87, 34, 45, 23};
    int i = 0;
    do
    {

        cout << "Value of array_1[" << i << "] is " << array_1[i++] << endl;
    } while (i < 10);
    return 0;
}

```

---

---

## **_38.) tutorial_14_1_1 of C++_**

### [**_Click me_**](tutorial_14_1_1.cpp "Clike here to see full file") to see full file of tutorial_14_1_1

```C++
// Date 29-05-2021

#include <iostream>

using namespace std;

struct employee
{
    int employee_id;
    char employee_favorite_character;
    float employee_salary;
};

int main()
{
    struct employee suresh;
    suresh.employee_id = 78179;
    suresh.employee_favorite_character = 'A';
    suresh.employee_salary = 7845.14;

    struct employee rohan;
    rohan.employee_id = 17844;
    rohan.employee_favorite_character = 'R';
    rohan.employee_salary = 14551.65;

    cout << "Suresh's Id is " << suresh.employee_id << endl;
    cout << "Suresh's Favorite Character is " << suresh.employee_favorite_character << endl;
    cout << "Suresh's Salary is " << suresh.employee_salary << endl;

    cout << "Rohan's Id is " << rohan.employee_id << endl;
    cout << "Rohan's Favorite Character is " << rohan.employee_favorite_character << endl;
    cout << "Rohan's Salary is " << rohan.employee_salary << endl;

    return 0;
}
```

---

---

## **_39.) tutorial_14_1_2 of C++_**

### [**_Click me_**](tutorial_14_1_2.cpp "Clike here to see full file") to see full file of tutorial_14_1_2

```C++
// Date 29-05-2021

#include <iostream>
#include <iomanip>

using namespace std;

typedef struct employee
{
    int employee_id;
    char employee_favorite_character;
    float employee_salary;
} em;

int main()
{
    em suresh;
    suresh.employee_id = 78179;
    suresh.employee_favorite_character = 'A';
    suresh.employee_salary = 7845.14;

    em rohan;
    rohan.employee_id = 17844;
    rohan.employee_favorite_character = 'R';
    rohan.employee_salary = 14551.65;

    cout << "Suresh's Id is " << suresh.employee_id << endl;
    cout << "Suresh's Favorite Character is " << suresh.employee_favorite_character << endl;
    cout << "Suresh's Salary is " << suresh.employee_salary << endl;

    cout << "Rohan's Id is " << rohan.employee_id << endl;
    cout << "Rohan's Favorite Character is " << rohan.employee_favorite_character << endl;
    cout << "Rohan's Salary is " << rohan.employee_salary << endl;

    return 0;
}
```

---

---

## **_40.) tutorial_14_2 of C++_**

### [**_Click me_**](tutorial_14_2.cpp "Clike here to see full file") to see full file of tutorial_14_2

```C++
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
```

---

---

## **_41.) tutorial_14_3 of C++_**

### [**_Click me_**](tutorial_14_3.cpp "Clike here to see full file") to see full file of tutorial_14_3

```C++
// Date 29-05-2021

#include <iostream>

using namespace std;

int main()
{
    enum meal
    {
        breakfast,
        lunch,
        dinner
    };
    cout << "Value of meal " << breakfast << " is: " << breakfast << endl;
    cout << "Value of meal " << lunch << " is: " << lunch << endl;
    cout << "Value of meal " << dinner << " is: " << dinner << endl;

    meal var_1 = dinner;
    cout << "Value of var_1 is: " << var_1 << endl;
    return 0;
}
```

---

---

## **_42.) tutorial_15 of C++_**

### [**_Click me_**](tutorial_15.cpp "Clike here to see full file") to see full file of tutorial_15

```C++
// Date 30-05-2021

#include <iostream>

using namespace std;

void for_printing(void)
{
    cout << "Hello!" << endl;
}
int square(int);
int main()
{
    int num1;
    cout << "Please enter a number to know it's sqare" << endl;
    cin >> num1;
    cout << square(num1) << endl;
    for_printing();

    return 0;
}

int square(int x)
{
    int y;
    y = x * x;
    return y;
}

```

---

---

## **_43.) tutorial_16_0 of C++_**

### [**_Click me_**](tutorial_16_0.cpp "Clike here to see full file") to see full file of tutorial_16_0

```C++
// Date 30-05-2021

#include <iostream>

using namespace std;

int swap(int a, int b)
{
    //* Note: This funtion will absolutely not the variable values because this function just maked a copy of the given variable to it
    //* To do swaping you need to make use of their locations i.e. their pointers
    //* Note: This method of accessing variables is known as Call by value
    //* Note: This method of accessing variables is known as Call by value
    //* Note: This method of accessing variables is known as Call by value
    //* Note: This method of accessing variables is known as Call by value
    //* Note: This method of accessing variables is known as Call by value
    int temporary_variable = a;
    a = b;
    b = temporary_variable;
    return 0;
}

int swap_using_pointers(int *a, int *b)
{
    //* Note: This method of accessing variables is known as Call by refrence
    int temporary_variable = *a;
    *a = *b;
    *b = temporary_variable;
    return 0;
}

int swap_using_reference(int &a, int &b)
{
    int temporary_variable = a;
    a = b;
    b = temporary_variable;
    return 0;
}

int main()
{
    int x = 32, y = 12;

    cout << endl
         << "1.) Values of x and y are respectively (without swap)" << endl
         << "x = " << x << endl
         << "y = " << y << endl
         << endl;
    swap(y, x);
    cout
        << "2.) Now values of x and y are respectively (with variable swaping)" << endl
        << "x = " << x << endl
        << "y = " << y << endl
        << endl;
    swap_using_pointers(&x, &y);
    cout << "3.) Now values of x and y are respectively (with pointer swaping)" << endl
         << "x = " << x << endl
         << "y = " << y << endl
         << endl;
    x = 32;
    y = 12;
    cout << "4.) Values of x and y are reseted and their values are (without swap)" << endl
         << "x = " << x << endl
         << "y = " << y << endl
         << endl;
    swap_using_reference(x, y);
    cout << "5.) Now values of x and y are respectively (with reference swaping)" << endl
         << "x = " << x << endl
         << "y = " << y << endl
         << endl;

    return 0;
}
```

---

---

## **_44.) tutorial_16_1 of C++_**

### [**_Click me_**](tutorial_16_1.cpp "Clike here to see full file") to see full file of tutorial_16_1

```C++
// Date 30-05-2021

#include <iostream>

using namespace std;

int swap(int a, int b)
{
    //* Note: This funtion will absolutely not the variable values because this function just maked a copy of the given variable to it
    //* To do swaping you need to make use of their locations i.e. their pointers
    //* Note: This method of accessing variables is known as Call by value
    //* Note: This method of accessing variables is known as Call by value
    //* Note: This method of accessing variables is known as Call by value
    //* Note: This method of accessing variables is known as Call by value
    //* Note: This method of accessing variables is known as Call by value
    int temporary_variable = a;
    a = b;
    b = temporary_variable;
    return 0;
}

int main()
{
    int x = 32, y = 12;

    cout << endl
         << "Values of x and y are respectively (without swap)" << endl
         << "x = " << x << endl
         << "y = " << y << endl
         << endl;
    swap(y, x);
    cout
        << "Now values of x and y are respectively (with variable swaping)" << endl
        << "x = " << x << endl
        << "y = " << y << endl
        << endl;
    return 0;
}
```

---

---

## **_45.) tutorial_16_2 of C++_**

### [**_Click me_**](tutorial_16_2.cpp "Clike here to see full file") to see full file of tutorial_16_2

```C++
// Date 30-05-2021

#include <iostream>

using namespace std;

int swap_using_pointers(int *a, int *b)
{
    //* Note: This method of accessing variables is known as Call by refrence
    int temporary_variable = *a;
    *a = *b;
    *b = temporary_variable;
    return 0;
}

int main()
{
    int x = 32, y = 12;

    cout << endl
         << "Values of x and y are respectively (without swap)" << endl
         << "x = " << x << endl
         << "y = " << y << endl
         << endl;
    swap_using_pointers(&x, &y);
    cout << "Now values of x and y are respectively (with pointer swaping)" << endl
         << "x = " << x << endl
         << "y = " << y << endl
         << endl;
    return 0;
}
```

---

---

## **_46.) tutorial_16_3 of C++_**

### [**_Click me_**](tutorial_16_3.cpp "Clike here to see full file") to see full file of tutorial_16_3

```C++
// Date 30-05-2021

#include <iostream>

using namespace std;

int swap_using_reference(int &a, int &b)
{
    int temporary_variable = a;
    a = b;
    b = temporary_variable;
    return 0;
}

int main()
{
    int x = 32, y = 12;

    cout << endl
         << "Values of x and y are respectively (without swap)" << endl
         << "x = " << x << endl
         << "y = " << y << endl
         << endl;
    swap_using_reference(x, y);
    cout << "Now values of x and y are respectively (with reference swaping)" << endl
         << "x = " << x << endl
         << "y = " << y << endl
         << endl;

    return 0;
}
```

---

---

## **_47.) tutorial_17_0 of C++_**

### [**_Click me_**](tutorial_17_0.cpp "Clike here to see full file") to see full file of tutorial_17_0

```C++
// Date 30-05-2021

#include <iostream>

using namespace std;

inline int func_1(int a, int b) { return a * b; }

int main()
{
    int a, b;
    cout << "Please enter the value for A!" << endl;
    cin >> a;
    cout << "Please enter the value for B!" << endl;
    cin >> b;

    cout << "Function return's value is!" << endl
         << func_1(a, b);

    return 0;
}
```

---

---

## **_48.) tutorial_17_1 of C++_**

### [**_Click me_**](tutorial_17_1.cpp "Clike here to see full file") to see full file of tutorial_17_1

```C++
// Date 30-05-2021

#include <iostream>

using namespace std;

int calculation(int a, int b)
{
    static int c = 2;
    //* Note: After function execution stops the only value which not gets destroyed is the value of a static variable
    return a * b + c++;
    //* Note: After function execution stops the only value which not gets destroyed is the value of a static variable
}

int main()
{
    int a, b;
    cout << "Please enter the value for A!" << endl;
    cin >> a;
    cout << "Please enter the value for B!" << endl;
    cin >> b;

    cout << "Function return's value is!" << endl
         << calculation(a, b) << endl;
    cout << "Function return's value is!" << endl
         << calculation(a, b) << endl;
    cout << "Function return's value is!" << endl
         << calculation(a, b) << endl;
    cout << "Function return's value is!" << endl
         << calculation(a, b) << endl;
    cout << "Function return's value is!" << endl
         << calculation(a, b) << endl;
    cout << "Function return's value is!" << endl
         << calculation(a, b) << endl;
    cout << "Function return's value is!" << endl
         << calculation(a, b) << endl;
    cout << "Function return's value is!" << endl
         << calculation(a, b) << endl;
    cout << "Function return's value is!" << endl
         << calculation(a, b) << endl;
    cout << "Function return's value is!" << endl
         << calculation(a, b) << endl;
    cout << "Function return's value is!" << endl
         << calculation(a, b) << endl;
    cout << "Function return's value is!" << endl
         << calculation(a, b) << endl;

    return 0;
}
```

---

---

## **_49.) tutorial_17_2 of C++_**

### [**_Click me_**](tutorial_17_2.cpp "Clike here to see full file") to see full file of tutorial_17_2

```C++
// Date 30-05-2021

#include <iostream>

using namespace std;

float intrest_money_calculator(int money, float intrest_precent = 1.04)
{
    return money * intrest_precent;
}

int main()
{
    int money;
    cout << "Please enter the value of Money!" << endl;
    cin >> money;

    cout << "Your's money + intrest added value is!" << endl
         << intrest_money_calculator(money) << endl;

    cout << "If you are POOR then money + intrest added value is!" << endl
         << intrest_money_calculator(money, 1.1) << endl;

    return 0;
}
```

---

---

## **_50.) tutorial_18_1 of C++_**

### [**_Click me_**](tutorial_18_1.cpp "Clike here to see full file") to see full file of tutorial_18_1

```C++
// Date 31-05-2021

#include <iostream>

using namespace std;

int factorial_calculator(int n)
{
    int output = 1;
    if (n == 0)
    {
        return output;
    }
    while (n >= 2)
    {
        output = output * n--;
    }
    return output;
}

int main()
{
    int n;
    cout << "Please enter a number to know it's factorial of!" << endl;
    cin >> n;
    cout << "The value of factorial of " << n << " is: " << factorial_calculator(n) << endl;
    return 0;
}
```

---

---

## **_51.) tutorial_18_2 of C++_**

### [**_Click me_**](tutorial_18_2.cpp "Clike here to see full file") to see full file of tutorial_18_2

```C++
// Date 31-05-2021

// * In previous code(i.e. "tutorial_18_1.cpp") of finding we had written a long function to find the factorial of but in this code we will write a function which uses reccrussion to find the factorial off
// * In previous code(i.e. "tutorial_18_1.cpp") of finding we had written a long function to find the factorial of but in this code we will write a function which uses reccrussion to find the factorial off
// * In previous code(i.e. "tutorial_18_1.cpp") of finding we had written a long function to find the factorial of but in this code we will write a function which uses reccrussion to find the factorial off
// * In previous code(i.e. "tutorial_18_1.cpp") of finding we had written a long function to find the factorial of but in this code we will write a function which uses reccrussion to find the factorial off
// * In previous code(i.e. "tutorial_18_1.cpp") of finding we had written a long function to find the factorial of but in this code we will write a function which uses reccrussion to find the factorial off
// * In previous code(i.e. "tutorial_18_1.cpp") of finding we had written a long function to find the factorial of but in this code we will write a function which uses reccrussion to find the factorial off
// * In previous code(i.e. "tutorial_18_1.cpp") of finding we had written a long function to find the factorial of but in this code we will write a function which uses reccrussion to find the factorial off
// * In previous code(i.e. "tutorial_18_1.cpp") of finding we had written a long function to find the factorial of but in this code we will write a function which uses reccrussion to find the factorial off
// * In previous code(i.e. "tutorial_18_1.cpp") of finding we had written a long function to find the factorial of but in this code we will write a function which uses reccrussion to find the factorial off
// * In previous code(i.e. "tutorial_18_1.cpp") of finding we had written a long function to find the factorial of but in this code we will write a function which uses reccrussion to find the factorial off

#include <iostream>

using namespace std;

int factorial_calculator(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial_calculator(n - 1);
}

int fibonacci_calculator(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fibonacci_calculator(n - 1) + fibonacci_calculator(n - 2);
}

int main()
{
    int n;
    cout << "Please enter a number to know it's factorial and fibonacci of!" << endl;
    cin >> n;
    cout << "The value of factorial of " << n << " is: " << factorial_calculator(n) << endl
         << "The value of fibonacci of " << n << " is: " << fibonacci_calculator(n) << endl;
    return 0;
}
```

---

---

## **_52.) tutorial_19_1 of C++_**

### [**_Click me_**](tutorial_19_1.cpp "Clike here to see full file") to see full file of tutorial_19_1

```C++
// Date 31-05-2021

#include <iostream>

using namespace std;

int sum(int a, int b, int c)
{
    cout << "Using function with three argunments" << endl;
    return a + b + c;
}
int sum(int a, int b)
{
    cout << "Using function with two argunments" << endl;
    return a + b;
}

int main()
{
    cout << "The value of 3 + 7 (using sum function) is: " << sum(3, 7) << endl;
    cout << "The value of 3 + 7 + 10 (using sum function) is: " << sum(3, 7, 10) << endl;
    return 0;
}
```

---

---

## **_53.) tutorial_19_2 of C++_**

### [**_Click me_**](tutorial_19_2.cpp "Clike here to see full file") to see full file of tutorial_19_2

```C++
// Date 31-05-2021

#include <iostream>

using namespace std;

int volume(int side)
{
    //* Volume of cube
    return side * side * side;
}
int volume(int length, int breadth, int height)
{
    //* Volume of cuboid
    return length * breadth * height;
}
double volume(double radius, double height)
{
    //* Volume of cylinder
    return 3.14285714286 * radius * radius * height;
}
int main()
{
    cout << "The Volume of Cube with side 3 is: " << endl
         << volume(3) << " >>>>>>>>>> Using function named volume(i.e. same name but diffrent arguments function)" << endl;
    cout << "The Volume of Cuboid with side 3, 7 and 10  is: " << endl
         << volume(3, 7, 10) << " >>>>>>>>>> Using function named volume(i.e. same name but diffrent arguments function)" << endl;
    cout << "The Volume of Cylinder with height 23 and radius 6 is: " << endl
         << volume(6, 23) << " >>>>>>>>>> Using function named volume(i.e. same name but diffrent arguments function)" << endl;
    return 0;
}
```

---

---

## **_54.) tutorial_21 of C++_**

### [**_Click me_**](tutorial_21.cpp "Clike here to see full file") to see full file of tutorial_21

```C++
// Date 31-05-2021

#include <iostream>

using namespace std;

class employee
{
private:
    int a, b, c;
    void print_all_info_function_is_in_private()
    {
        cout << "print all info Function which located in Private Function; Value of a is " << a << endl;
        cout << "print all info Function which located in Private Function; Value of b is " << b << endl;
        cout << "print all info Function which located in Private Function; Value of c is " << c << endl;
        cout << "print all info Function which located in Private Function; Value of d is " << d << endl;
        cout << "print all info Function which located in Private Function; Value of e is " << e << endl;
    }

public:
    int d, e;
    void personal_info(int a1, int b1, int c1);
    void print_all_info()
    {
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
        cout << "Value of c is " << c << endl;
        cout << "Value of d is " << d << endl;
        cout << "Value of e is " << e << endl;
    }

    void call_private_function() { print_all_info_function_is_in_private(); }
};

void employee::personal_info(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    employee aman;

    //* aman.a = 45; //This will throw an error because in class employee we had declared a in private specifiers we need to access there values from in-class declared functions in order to change their values
    //* aman.b = 14; //This will throw an error because in class employee we had declared b in private specifiers we need to access there values from in-class declared functions in order to change their values
    //* aman.c = 78; //This will throw an error because in class employee we had declared c in private specifiers we need to access there values from in-class declared functions in order to change their values

    aman.d = 9;
    aman.e = 5;
    aman.personal_info(45, 14, 78);

    aman.print_all_info();

    aman.call_private_function();
    return 0;
}
```

---

---

## **_55.) tutorial_22 of C++_**

### [**_Click me_**](tutorial_22.cpp "Clike here to see full file") to see full file of tutorial_22

```C++
// Date 03-06-2021

#include <iostream>
// #include <string>

using namespace std;
class binary
{
private:
    string str;
    void check_binary_or_not(void);

public:
    void read_binary(void);
    void binary_0_1_position_interchange(void);
};

void binary ::read_binary(void)
{
    cout << "Enter a number to check it is a binary number or not!" << endl;
    cin >> str;
}

void binary ::check_binary_or_not(void)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) != '0' && str.at(i) != '1')
        {
            cout << str << " is not a Binary number!" << endl
                 << "Please enter an another number" << endl;
            exit(0);
        }
        // else if (i <= str.length())
        // {
        //     cout << str << " is a Binary number!" << endl;
        //     exit(0);
        // }
    };
}

void binary ::binary_0_1_position_interchange(void)
{
    check_binary_or_not();
    string str_copy = str;
    for (int i = 0; i < str.length(); i++)
    {

        if (str.at(i) == '0')
        {
            str.at(i) = '1';
        }
        else
        {
            str.at(i) = '0';
        }
    };
    cout << str_copy << " changed into " << str << endl;
}
int main()
{
    binary b;
    b.read_binary();
    //* b.check_binary_or_not();
    b.binary_0_1_position_interchange();

    return 0;
}
```

---

---

## **_56.) tutorial_23 of C++_**

### [**_Click me_**](tutorial_23.cpp "Clike here to see full file") to see full file of tutorial_23

```C++
// Date 03-06-2021

#include <iostream>

using namespace std;

class shop
{
    int item_id[100], item_price[100], counter;

public:
    void counter_value_changer(void) { counter = 0; }
    void set_item_information(void);
    void display_item_information(void);
};
void shop::set_item_information(void)
{
    cout << "Please enter item id for item " << counter + 1 << "!" << endl;
    cin >> item_id[counter];
    cout << "Please enter item price for item " << counter + 1 << "!" << endl;
    cin >> item_price[counter++];
}

void shop::display_item_information(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Price of item id " << item_id[i] << " is " << item_price[i] << endl;
    }
}

int main()
{
    // cout << "Hello Aman!" << endl;
    shop s;
    s.counter_value_changer();
    s.set_item_information();
    s.set_item_information();
    s.display_item_information();

    return 0;
}
```

---

---

## **_57.) tutorial_24_1 of C++_**

### [**_Click me_**](tutorial_24_1.cpp "Clike here to see full file") to see full file of tutorial_24_1

```C++
// Date 03-06-2021

#include <iostream>

using namespace std;

class employee
{
    int employee_id;
    static int count;

public:
    void data_taker(void)
    {
        cout << "Enter Employee for Employee number " << count + 1 << endl;
        cin >> employee_id;
        count++;
    }
    void show_employee_info(void)
    {

        cout << "Employee id for Employee number " << count << " is " << employee_id << endl;
    }
};
int employee::count;

int main()
{
    // cout << "Hello Aman!" << endl;
    employee aman, rohit;
    // aman.show_employee_info();
    aman.data_taker();
    rohit.data_taker();
    aman.show_employee_info();
    rohit.show_employee_info();
    return 0;
}
```

---

---

## **_58.) tutorial_24_2 of C++_**

### [**_Click me_**](tutorial_24_2.cpp "Clike here to see full file") to see full file of tutorial_24_2

```C++
// Date 03-06-2021

#include <iostream>

using namespace std;

class employee
{
    int employee_id;
    static int count;

public:
    void data_taker(void)
    {
        cout << "Enter Employee id for Employee number " << count + 1 << endl;
        cin >> employee_id;
        count++;
    }
    void show_employee_info(void)
    {

        cout << "Employee id for Employee number " << count << " is " << employee_id << endl;
    }
    static void show_count(void)
    {
        //* The Below line will throw an Error
        //! cout << id;
        //* The Above line will throw an Error
        cout << "For Employee number " << count + 1 << endl;
    }
};
//* The Below line is very import
int employee::count; //* Default value of static variable is 0
//* The Above line is very import

int main()
{
    // cout << "Hello Aman!" << endl;
    employee aman, rohit;
    // aman.show_employee_info();
    aman.show_count();
    aman.data_taker();
    rohit.show_count();
    rohit.data_taker();

    aman.show_employee_info();
    rohit.show_employee_info();
    return 0;
}
```

---

---

## **_59.) tutorial_25_1 of C++_**

### [**_Click me_**](tutorial_25_1.cpp "Clike here to see full file") to see full file of tutorial_25_1

```C++
// Date 05-06-2021

#include <iostream>

using namespace std;

class emoloyee
{
    int salary;
    int id;

public:
    void set_id(void)
    {
        salary = 1000;
        cout << "What is the id of the employee!" << endl;
        cin >> id;
    }
    void get_id(void)
    {
        cout << "Id is! " << id << endl
             << "Salary is! " << salary << endl;
    }
};

int main()
{

    emoloyee company[4];

    for (int i = 0; i < 5; i++)
    {
        company[i].set_id();
        company[i].get_id();
    }

    return 0;
}
```

---

---

## **_60.) tutorial_25_2 of C++_**

### [**_Click me_**](tutorial_25_2.cpp "Clike here to see full file") to see full file of tutorial_25_2

```C++
// Date 05-06-2021

#include <iostream>

using namespace std;

class complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setDataBySum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printNumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();
    return 0;
}

```

---

---

## **_61.) tutorial_26 of C++_**

### [**_Click me_**](tutorial_26.cpp "Clike here to see full file") to see full file of tutorial_26

```C++
// Date 19-09-2021

//* In this tutorial you will learn about accessing privated data of a Class using friend Function

#include <iostream>
#include <iomanip>

using namespace std;

class Complex_number
{
    int a, b;

public:
    void set_number(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void print_number(void) { cout << "Your number is " << a << " + " << b << "i" << endl; }

    friend Complex_number sum_complex_number(Complex_number sum_complex_number_1, Complex_number sum_complex_number_2);
};
Complex_number sum_complex_number(Complex_number sum_complex_number_1, Complex_number sum_complex_number_2)
{
    Complex_number sum_complex_number_output_number;
    sum_complex_number_output_number.set_number((sum_complex_number_1.a + sum_complex_number_2.a), (sum_complex_number_1.b + sum_complex_number_2.b));
    return sum_complex_number_output_number;
}

int main()
{
    // cout << "Hello Aman!" << endl;

    Complex_number number_1, number_2, number_sum_of_1_and_2;

    number_1.set_number(3, 6);
    number_1.print_number();

    number_2.set_number(78, 547);
    number_2.print_number();

    number_sum_of_1_and_2 = sum_complex_number(number_1, number_2);
    number_sum_of_1_and_2.print_number();

    return 0;
}
```

---

---

## **_62.) tutorial_27_1 of C++_**

### [**_Click me_**](tutorial_27_1.cpp "Clike here to see full file") to see full file of tutorial_27_1

```C++
// Date 19-09-2021

//* In this tutorial you will learn about making a Friend function of diffrent Class

#include <iostream>

using namespace std;

//* Forward Declaration is down given of Class Complex_number
class Complex_number;

class Calculater
{
public:
    int add(int a, int b) { return (a + b); }

    int sum_complex_number_real_part(Complex_number num_1, Complex_number num_2);

    int sum_complex_number_complex_part(Complex_number num_1, Complex_number num_2);
};

class Complex_number
{
    int real_number, imaginary_number;

    //* Individual Declaring a function as a Friend example is down given
    friend int Calculater::sum_complex_number_real_part(Complex_number num_1, Complex_number num_2);
    friend int Calculater::sum_complex_number_complex_part(Complex_number num_1, Complex_number num_2);

public:
    void set_number(int n1, int n2)
    {
        real_number = n1;
        imaginary_number = n2;
    }

    void print_number(void) { cout << "Your number is " << real_number << " + " << imaginary_number << "i" << endl; }

    int get_real_number(void) { return real_number; }

    int get_complex_number(void) { return imaginary_number; }
};

int Calculater::sum_complex_number_real_part(Complex_number num_1, Complex_number num_2)
{
    return (num_1.real_number + num_2.real_number);
}
int Calculater::sum_complex_number_complex_part(Complex_number num_1, Complex_number num_2)
{
    return (num_1.imaginary_number + num_2.imaginary_number);
}

int main()
{
    // cout << "Hello Aman!" << endl;

    Complex_number number_1, number_2, number_sum_of_1_and_2;

    number_1.set_number(3, 6);
    number_1.print_number();

    number_2.set_number(78, 547);
    number_2.print_number();

    Calculater calculate_for_real, calculate_for_imaginary;

    int result_of_addition_of_real_numbers = calculate_for_real.sum_complex_number_real_part(number_1, number_2);
    int result_of_addition_of_imaginary_numbers = calculate_for_real.sum_complex_number_complex_part(number_1, number_2);

    cout << "Addition of your real numbers " << number_1.get_real_number() << " and " << number_2.get_real_number() << " is " << result_of_addition_of_real_numbers << endl;

    cout << "Addition of your Complex/Imaginary numbers " << number_1.get_complex_number() << "i"
         << " and " << number_2.get_complex_number() << "i"
         << " is " << result_of_addition_of_imaginary_numbers << "i" << endl;

    return 0;
}
```

---

---

## **_63.) tutorial_27_2 of C++_**

### [**_Click me_**](tutorial_27_2.cpp "Clike here to see full file") to see full file of tutorial_27_2

```C++
// Date 19-09-2021

//* In this tutorial you will learn about declaring an entire Class as a friend

#include <iostream>

using namespace std;

//* Forward Declaration is down given of Class complex_number
class Complex_number;

class Calculater
{
public:
    int add(int a, int b) { return (a + b); }

    int sum_complex_number_real_part(Complex_number num_1, Complex_number num_2);

    int sum_complex_number_complex_part(Complex_number num_1, Complex_number num_2);
};

class Complex_number
{
    int real_number, imaginary_number;

    //* Individual Declaring a function as a Friend example is down given
    friend class Calculater;

public:
    void set_number(int n1, int n2)
    {
        real_number = n1;
        imaginary_number = n2;
    }

    void print_number(void) { cout << "Your number is " << real_number << " + " << imaginary_number << "i" << endl; }

    int get_real_number(void) { return real_number; }

    int get_complex_number(void) { return imaginary_number; }
};

int Calculater::sum_complex_number_real_part(Complex_number num_1, Complex_number num_2)
{
    return (num_1.real_number + num_2.real_number);
}
int Calculater::sum_complex_number_complex_part(Complex_number num_1, Complex_number num_2)
{
    return (num_1.imaginary_number + num_2.imaginary_number);
}

int main()
{
    // cout << "Hello Aman!" << endl;

    Complex_number number_1, number_2, number_sum_of_1_and_2;

    number_1.set_number(3, 6);
    number_1.print_number();

    number_2.set_number(78, 547);
    number_2.print_number();

    Calculater calculate_for_real, calculate_for_imaginary;

    int result_of_addition_of_real_numbers = calculate_for_real.sum_complex_number_real_part(number_1, number_2);
    int result_of_addition_of_imaginary_numbers = calculate_for_real.sum_complex_number_complex_part(number_1, number_2);

    cout << "Addition of your real numbers " << number_1.get_real_number() << " and " << number_2.get_real_number() << " is " << result_of_addition_of_real_numbers << endl;

    cout << "Addition of your Complex/Imaginary numbers " << number_1.get_complex_number() << "i"
         << " and " << number_2.get_complex_number() << "i"
         << " is " << result_of_addition_of_imaginary_numbers << "i" << endl;

    return 0;
}
```

---

---

## **_64.) tutorial_28_1 of C++_**

### [**_Click me_**](tutorial_28_1.cpp "Clike here to see full file") to see full file of tutorial_28_1

```C++
// Date 19-09-2021

//* In this tutorial you will learn about giving permission to a in-dependent function to access private data of your class(with a easy example)

#include <iostream>

using namespace std;

//* Forward Declaration of class Y
class Y;

class X
{
    int var_1_of_X;

public:
    void set_value(int num) { var_1_of_X = num; }
    friend void inter_class_sum(X num_1, Y num_2);
};
class Y
{
    int var_1_of_Y;

public:
    void set_value(int num) { var_1_of_Y = num; }
    friend void inter_class_sum(X num_1, Y num_2);
};

void inter_class_sum(X num_1, Y num_2)
{
    cout << "Sum of " << num_1.var_1_of_X << " and " << num_2.var_1_of_Y << " is " << num_1.var_1_of_X + num_2.var_1_of_Y << endl;
}

int main()
{
    X object_1_of_class_X;
    object_1_of_class_X.set_value(45);

    Y object_1_of_class_Y;
    object_1_of_class_Y.set_value(55);

    inter_class_sum(object_1_of_class_X, object_1_of_class_Y);

    return 0;
}
```

---

---

## **_65.) tutorial_28_2 of C++_**

### [**_Click me_**](tutorial_28_2.cpp "Clike here to see full file") to see full file of tutorial_28_2

```C++
// Date 19-09-2021

//* In this tutorial you will learn about giving permission to a in-dependent function to access private data of your class(with a bit complex example)

#include <iostream>

using namespace std;

//* Forward Declaration of class Y
class Y;

class X
{
    int var_1_of_X;

public:
    void set_value(int num) { var_1_of_X = num; }
    void print_value(void) { cout << "Value of X.var_1_of_X is " << var_1_of_X << endl; }
    friend void swap_values(X &, Y &);
};
class Y
{
    int var_1_of_Y;

public:
    void set_value(int num) { var_1_of_Y = num; }
    void print_value(void) { cout << "Value of Y.var_1_of_Y is " << var_1_of_Y << endl; }
    friend void swap_values(X &, Y &);
};

void swap_values(X &num_1, Y &num_2)
{
    int temporary_variable = num_1.var_1_of_X;
    num_1.var_1_of_X = num_2.var_1_of_Y;
    num_2.var_1_of_Y = temporary_variable;
}

int main()
{
    X object_1_of_class_X;
    object_1_of_class_X.set_value(45);

    Y object_1_of_class_Y;
    object_1_of_class_Y.set_value(55);

    object_1_of_class_X.print_value();
    object_1_of_class_Y.print_value();

    cout << endl
         << "Below part is after Swaping" << endl;
    swap_values(object_1_of_class_X, object_1_of_class_Y);
    object_1_of_class_X.print_value();
    object_1_of_class_Y.print_value();

    return 0;
}
```

---

---

## **_66.) tutorial_29_1 of C++_**

### [**_Click me_**](tutorial_29_1.cpp "Clike here to see full file") to see full file of tutorial_29_1

```C++
// Date 19-09-2021

//* In this tutorial you will learn about Special function known as Constructor which run automatically as you make an object

#include <iostream>

using namespace std;

class Complex_number
{
    int a, b, object_number;

public:
    //* Note: Name of the constructor an name of the class should be same otherwise it will not work
    Complex_number(int num_1, int num_2);
    void print_number(void) { cout << "Your number is " << a << " + " << b << "i "
                                   << "and it is " << object_number << " of your Class" << endl; }
};
Complex_number ::Complex_number(int num_1, int num_2)
{
    static int number_of_object = 1;
    a = num_1;
    b = num_2;
    object_number = number_of_object++;
}

int main()
{
    // cout << "Hello Aman!" << endl;

    Complex_number number_1(3, 6), number_2(78, 547);

    number_1.print_number();
    number_2.print_number();

    return 0;
}

/*
    void set_number(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void print_number(void) { cout << "Your number is " << a << " + " << b << "i" << endl; }

    friend Complex_number sum_complex_number(Complex_number sum_complex_number_1, Complex_number sum_complex_number_2);
};
Complex_number sum_complex_number(Complex_number sum_complex_number_1, Complex_number sum_complex_number_2)
{
    Complex_number sum_complex_number_output_number;
    sum_complex_number_output_number.set_number((sum_complex_number_1.a + sum_complex_number_2.a), (sum_complex_number_1.b + sum_complex_number_2.b));
    return sum_complex_number_output_number;
}
*/
```

---

---

## **_67.) tutorial_29_2 of C++_**

### [**_Click me_**](tutorial_29_2.cpp "Clike here to see full file") to see full file of tutorial_29_2

```C++
// Date 19-09-2021

//* In this tutorial we will experiment a little with Constructor

#include <iostream>
#include <ctime>

using namespace std;

class Complex_number
{
    int a, b, object_number;

public:
    //* Note: Name of the constructor an name of the class should be same otherwise it will not work
    Complex_number(int num_1, int num_2);
    void print_number(void) { cout << "Your number is " << a << " + " << b << "i "
                                   << "and it is " << object_number << " member of your Class" << endl; }
};
Complex_number ::Complex_number(int num_1, int num_2)
{
    static int number_of_object = 1;
    a = num_1;
    b = num_2;
    object_number = number_of_object++;
}

int random(int seed);

int main()
{
    // cout << "Hello Aman!" << endl;

    // Complex_number number_1(3, 6), number_2(78, 547);

    // number_2.print_number();

    for (int i = 0; i < 50; i++)
    {
        Complex_number number(random(i), random(i * i + i / i));
        number.print_number();
    }

    return 0;
}

int random(int seed)
{
    srand(seed * seed);

    return (rand() % 100) + 1;
}

/*
    void set_number(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void print_number(void) { cout << "Your number is " << a << " + " << b << "i" << endl; }

    friend Complex_number sum_complex_number(Complex_number sum_complex_number_1, Complex_number sum_complex_number_2);
};
Complex_number sum_complex_number(Complex_number sum_complex_number_1, Complex_number sum_complex_number_2)
{
    Complex_number sum_complex_number_output_number;
    sum_complex_number_output_number.set_number((sum_complex_number_1.a + sum_complex_number_2.a), (sum_complex_number_1.b + sum_complex_number_2.b));
    return sum_complex_number_output_number;
}
*/
```

---

---

## **_68.) tutorial_30_1 of C++_**

### [**_Click me_**](tutorial_30_1.cpp "Clike here to see full file") to see full file of tutorial_30_1

```C++
//* Date 20-09-2021

//* In this tutorial you will learn about parameterized constructor, Implicit Call Construction and Explicit Call Construction

#include <iostream>

using namespace std;
class Complex_number
{
    int a, b, object_number;

public:
    Complex_number(int num_1, int num_2); //* Constructors which also feeds on values then it is called parameterized constructor
    void print_number(void) { cout << "Your number is " << a << " + " << b << "i "
                                   << "and it is " << object_number << " member of your Class" << endl; }
};
Complex_number ::Complex_number(int num_1, int num_2) //* Constructors which also feeds on values then it is called parameterized constructor
{
    static int number_of_object = 1;
    a = num_1;
    b = num_2;
    object_number = number_of_object++;
}

int main()
{
    //* Implicit Call Construction
    Complex_number a(4, 9);
    a.print_number();

    //* Explicit Call Construction
    Complex_number b = Complex_number(3, 1);
    b.print_number();

    return 0;
}
```

---

---

## **_69.) tutorial_30_2_quiz of C++_**

### [**_Click me_**](tutorial_30_2_quiz.cpp "Clike here to see full file") to see full file of tutorial_30_2_quiz

```C++
//* Date 20-09-2021

//* This is a quiz in which you need to find distance between two given coordinates(use class)

#include <iostream>
#include <cmath> //* To preform mathematical operations

using namespace std;
class Coordinate;
double get_coordinate_distance(Coordinate, Coordinate);

class Coordinate
{
    double x, y;
    int object_number;

public:
    friend double get_coordinate_distance(Coordinate a, Coordinate b);
    Coordinate(double, double);
    void print_number(void)
    {
        cout << "Your Coordinates are (" << x << "," << y << ") "
             << "and it is " << object_number << " member of your Class" << endl;
    }
};
double get_coordinate_distance(Coordinate a, Coordinate b)
{
    return sqrt(pow((b.x - a.x), (2)) + pow((b.y - a.y), (2)));
}

Coordinate ::Coordinate(double num_1, double num_2)
{
    static int number_of_object = 1;
    x = num_1;
    y = num_2;
    object_number = number_of_object++;
}

int main()
{
    Coordinate a_point(18.65, 78.45);
    a_point.print_number();

    Coordinate b_point(.454, 7.312);
    b_point.print_number();

    cout << "Distance between Coordinates is " << get_coordinate_distance(a_point, b_point) << endl; //* Answer will be 73.4283

    return 0;
}
```

---

---

## **_70.) tutorial_31 of C++_**

### [**_Click me_**](tutorial_31.cpp "Clike here to see full file") to see full file of tutorial_31

```C++
//* Date 20-09-2021

//* In this tutorial you will learn about one or more constructors in a class i.e. Constructor Overloading

#include <iostream>

using namespace std;
class Complex_number
{
    int a, b;

public:
    Complex_number(int num_1, int num_2);
    Complex_number(int num_1);
    //todo Complex_number();

    void print_number(void) { cout << "Your number is " << a << " + " << b << "i " << endl; }
};
Complex_number ::Complex_number(int num_1, int num_2)
{
    a = num_1;
    b = num_2;
}
Complex_number ::Complex_number(int num_1)
{
    a = num_1;
    b = 0;
}
//todo Complex_number ::Complex_number()
//todo {
//todo     a = 0;
//todo     b = 0;
//todo }

int main()
{
    //* Member with Double parameter
    Complex_number a(4, 9);
    a.print_number();

    //* Member with Single parameter
    Complex_number b(3);
    b.print_number();

    //todo //* Member with 0 parameter
    //todo Complex_number c();
    //todo c.print_number();

    return 0;
}
```

---

---

## **_71.) tutorial_32 of C++_**

### [**_Click me_**](tutorial_32.cpp "Clike here to see full file") to see full file of tutorial_32

```C++
//* Date 20-09-2021

//* In this tutorial you will learn about default argument Constructors

#include <iostream>

using namespace std;
class Complex_number
{
    int a, b;

public:
    Complex_number(int num_1, int num_2);

    void print_number(void) { cout << "Your number is " << a << " + " << b << "i " << endl; }
};
Complex_number ::Complex_number(int num_1, int num_2 = 78)
{
    a = num_1;
    b = num_2;
}

int main()
{

    Complex_number a(4);
    a.print_number();

    Complex_number b(4, 9);
    b.print_number();

    return 0;
}
```

---

---

## **_72.) tutorial_33 of C++_**

### [**_Click me_**](tutorial_33.cpp "Clike here to see full file") to see full file of tutorial_33

```C++
//* Date 20-09-2021

//* In this tutorial you will learn about Dynamic creation of Construstors

#include <iostream>
using namespace std;
class Bank_Deposit
{
    float principal_amount, invest_rate, return_value;
    int years;

public:
    void print_data(void) { cout << "You deposit " << principal_amount << " Rupees" << endl
                                 << "Your intreast rate is " << invest_rate << endl
                                 << "Your time is " << years << " year" << endl
                                 << "You will receive " << return_value << " Rupees" << endl; }

    // Bank_Deposit();
    Bank_Deposit(int, float, int);
    Bank_Deposit(int, int, int);
};
Bank_Deposit::Bank_Deposit(int p, float rate, int time)
{
    principal_amount = p;
    years = time;
    invest_rate = rate;
    return_value = p;

    for (int i = 0; i < time; i++)
    {
        return_value = return_value * (1 + rate);
    }
}

Bank_Deposit::Bank_Deposit(int p, int rate, int time) //* We will take rate as int because here rate is in %
{
    principal_amount = p;
    years = time;
    invest_rate = float(rate) / 100;
    return_value = p;

    for (int i = 0; i < time; i++)
    {
        return_value = return_value * (1 + invest_rate);
    }
}
int main()
{

    float at_a_rate_of;
    int entry_amount, year;

    cout << "Enter you amount" << endl;
    cin >> entry_amount;
    cout << "Enter Years" << endl;
    cin >> year;
    cout << "Enter Intrest Rate" << endl;
    cin >> at_a_rate_of;

    Bank_Deposit aman_1 = Bank_Deposit(entry_amount, at_a_rate_of, year); //* Here Bank_Deposit is a Date Type
    aman_1.print_data();

    int Entry_amount, At_a_rate_of, Year;
    cout << endl
         << endl
         << "Enter you amount (Rate is in %)" << endl;
    cin >> Entry_amount;
    cout << "Enter Years (Rate is in %)" << endl;
    cin >> Year;
    cout << "Enter Intrest Rate (Rate is in %)" << endl;
    cin >> At_a_rate_of;

    Bank_Deposit aman_2 = Bank_Deposit(Entry_amount, At_a_rate_of, Year); //* Here Bank_Deposit is a Date Type
    aman_2.print_data();
}
```

---

---

## **_73.) tutorial_34_1 of C++_**

### [**_Click me_**](tutorial_34_1.cpp "Clike here to see full file") to see full file of tutorial_34_1

```C++
//* Date 21-09-2021

//* In this tutorial you will learn about copy Constructors

#include <iostream>

using namespace std;
class Number
{
    int a;

public:
    Number();
    Number(int num_1)
    {
        a = num_1;
    }

    Number(Number &obj)
    {
        cout << "Copy Constructor Invoked" << endl;
        a = obj.a;
    }
    void print_number(void) { cout << "Value of a is " << a << endl; }
    void sum(void)
    {
        int num = a;
        int sum = 0;

        while (num % 10 != num)
        {
            sum += num % 10;
            num /= 10;
        }
        sum += num;

        cout << "Full Sum of " << a << " is " << sum << endl;
    }
};

int main()
{
    Number num_1(33);

    Number num_2(num_1);
    num_2.print_number();
    num_2.sum();

    return 0;
}

```

---

---

## **_74.) tutorial_34_2 of C++_**

### [**_Click me_**](tutorial_34_2.cpp "Clike here to see full file") to see full file of tutorial_34_2

```C++
//* Date 21-09-2021

//* In this tutorial you will learn about Default Copy Constructors Supplied by the compiler

#include <iostream>

using namespace std;
class Number
{
    int a;

public:
    Number(){};
    Number(int num_1)
    {
        a = num_1;
    }

    // Number(Number &obj)
    // {
    //     cout << "Copy Constructor Invoked" << endl;
    //     a = obj.a;
    // }
    void print_number(void) { cout << "Value of a is " << a << endl; }
    void sum(void)
    {
        int num = a;
        int sum = 0;

        while (num % 10 != num)
        {
            sum += num % 10;
            num /= 10;
        }
        sum += num;

        cout << "Full Sum of " << a << " is " << sum << endl;
    }
};

int main()
{
    Number num_1(33);

    Number num_2(num_1);
    num_2.print_number();
    num_2.sum();

    return 0;
}

```

---

---

## **_75.) tutorial_34_3 of C++_**

### [**_Click me_**](tutorial_34_3.cpp "Clike here to see full file") to see full file of tutorial_34_3

```C++
//* Date 21-09-2021

//* In this tutorial you will learn about Default Copy Constructors Supplied by the compiler

#include <iostream>

using namespace std;
class Number
{
    int a;

public:
    Number(){};
    Number(int num_1)
    {
        a = num_1;
    }

    // Number(Number &obj)
    // {
    //     cout << "Copy Constructor Invoked" << endl;
    //     a = obj.a;
    // }
    void print_number(void) { cout << "Value of a is " << a << endl; }
    void sum(void)
    {
        int num = a;
        int sum = 0;

        while (num % 10 != num)
        {
            sum += num % 10;
            num /= 10;
        }
        sum += num;

        cout << "Full Sum of " << a << " is " << sum << endl;
    }
};

int main()
{
    Number num_1(33), num_2;

    num_2 = num_1; //* Copy Constructor invoked

    num_2.print_number();
    num_2.sum();

    return 0;
}

```

---

---

## **_76.) tutorial_35 of C++_**

### [**_Click me_**](tutorial_35.cpp "Clike here to see full file") to see full file of tutorial_35

```C++
//* Date 21-09-2021

//* In this tutorial you will learn deleting a Constructor in run time i.e. destructing using Dectructors

#include <iostream>

using namespace std;
class Number
{
    int a;

public:
    Number(int num_1)
    {
        a = num_1;
    }

    ~Number()
    {
        cout << "Member with value " << a << " is destructed." << endl;
    }

    void print_number(void) { cout << "Value of a is " << a << endl; }
};

int main()
{
    Number num_1(11);
    cout << "In num_1 ";
    num_1.print_number();

    {
        Number num_2(22);
        cout << "In num_2 ";
        num_2.print_number();
    } //* Member num_2 of class Number is destructed because it leaved from it's block

    cout << "In num_1 ";
    num_1.print_number();
    // num_2.print_number(); //* This will give an error message because num_2 is destructed as soon it leaves it's block
    return 0;
}

```

---

---

## **_77.) tutorial_37_1 of C++_**

### [**_Click me_**](tutorial_37_1.cpp "Clike here to see full file") to see full file of tutorial_37_1

```C++
//* Date 21-09-2021

//* In this tutorial you will learn Single Level Inheritance with private visibility mode

//* Derived Class syntax (Below given is the syntax of inheritance from one class to another).
// * class {{derived-class-name}} : {{visibility-mode (Default is Private)}} {{base-class-name}}
//* {
//*     class members/methods/etc...
//* }

//* Note:
//* 1. Default visibility mode is private
//* 2. Private members are never inherited
//* 3. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
//* 4. Private Visibility Mode: Public members of the base class becomes Private members of the derived class

#include <iostream>

using namespace std;

class Employee_Base_Class //* This is a base class for
{
public:
    int id = 0;
    float salary = 100;

    Employee_Base_Class() {}

    Employee_Base_Class(int number, float income)
    {
        id = number;
        salary = income;
    }

    void print_data_of_employee(void) { cout << "Salary of employee number " << id << " is " << salary << endl; }
};

class Programer_Derived_Class : Employee_Base_Class
{
    int number_of_language_known_by_employee = 1;

public:
    Programer_Derived_Class(int language)
    {
        number_of_language_known_by_employee = language;
    }
    void print_data_of_programer(void)
    {
        print_data_of_employee();
        cout << "Number of Programming Languages known by the Programmer is " << number_of_language_known_by_employee << endl;
    }
};

int main()
{
    Employee_Base_Class rohit(1, 1000), rohan(2, 2000);
    rohit.print_data_of_employee();
    rohan.print_data_of_employee();

    cout << endl
         << endl;

    Programer_Derived_Class aman(5);
    aman.print_data_of_programer();

    return 0;
}

```

---

---

## **_78.) tutorial_37_2 of C++_**

### [**_Click me_**](tutorial_37_2.cpp "Clike here to see full file") to see full file of tutorial_37_2

```C++
//* Date 21-09-2021

//* In this tutorial you will learn Single Level Inheritance with public visibility mode

#include <iostream>

using namespace std;

class Employee_Base_Class
{
public:
    int id = 0;
    float salary = 100;

    Employee_Base_Class() {}

    Employee_Base_Class(int number, float income)
    {
        id = number;
        salary = income;
    }

    void print_data_of_employee(void) { cout << "Salary of employee number " << id << " is " << salary << endl; }
};

class Programer_Derived_Class : public Employee_Base_Class
{
    int number_of_language_known_by_employee = 1;

public:
    Programer_Derived_Class(int number, int language, float income)
    {
        id = number;
        salary = income;

        number_of_language_known_by_employee = language;
    }
    // void print_data_of_programer(void)
    // {
    //     print_data_of_employee();
    //     cout << "Number of Programming Languages known by the Programmer is " << number_of_language_known_by_employee << endl;
    // }
};

int main()
{
    // Employee_Base_Class rohit(1, 1000), rohan(2, 2000);
    // rohit.print_data_of_employee();
    // rohan.print_data_of_employee();

    // cout << endl
    //      << endl;

    Programer_Derived_Class aman(3, 5, 99999);
    aman.print_data_of_employee();

    return 0;
}

```

---

---

## **_79.) tutorial_38_1 of C++_**

### [**_Click me_**](tutorial_38_1.cpp "Clike here to see full file") to see full file of tutorial_38_1

```C++
//* Date 22-09-2021

//* In this tutorial you will do Deep Dive in Single Level Inheritance (Part-1)

#include <iostream>

using namespace std;

class Base
{
    int data_1_of_Base_class_in_private_scope;

public:
    int data_2_of_Base_class_in_public_scope;

    void set_data_of_Base_class_in_public_scope(int a, int b)
    {
        data_1_of_Base_class_in_private_scope = a;
        data_2_of_Base_class_in_public_scope = b;
    }

    int get_data_1_of_Base_class_in_public_scope(void) { return data_1_of_Base_class_in_private_scope; }

    int get_data_2_of_Base_class_in_public_scope(void) { return data_2_of_Base_class_in_public_scope; }
};

class Derived : public Base //* Inherited as Publicly
{
    int data_3_of_Derived_class_in_private_scope;

public:
    void process_of_Derived_class_in_public_scope()
    {
        data_3_of_Derived_class_in_private_scope = get_data_1_of_Base_class_in_public_scope() * data_2_of_Base_class_in_public_scope;
    }

    void display_of_Derived_class_in_public_scope()
    {
        cout << "Data 1 is " << get_data_1_of_Base_class_in_public_scope() << endl
             << "Data 2 is " << data_2_of_Base_class_in_public_scope << endl
             << "Data 3 is " << data_3_of_Derived_class_in_private_scope << endl;
    }
};

int main()
{
    Derived der;
    der.set_data_of_Base_class_in_public_scope(10, 20);
    der.process_of_Derived_class_in_public_scope();
    der.display_of_Derived_class_in_public_scope();

    return 0;
}

```

---

---

## **_80.) tutorial_38_2 of C++_**

### [**_Click me_**](tutorial_38_2.cpp "Clike here to see full file") to see full file of tutorial_38_2

```C++
//* Date 22-09-2021

//* In this tutorial you will do Deep Dive in Single Level Inheritance (Part-2)

#include <iostream>

using namespace std;

class Base
{
    int data_1_of_Base_class_in_private_scope;

public:
    int data_2_of_Base_class_in_public_scope;

    void set_data_of_Base_class_in_public_scope(int a, int b)
    {
        data_1_of_Base_class_in_private_scope = a;
        data_2_of_Base_class_in_public_scope = b;
    }

    int get_data_1_of_Base_class_in_public_scope(void) { return data_1_of_Base_class_in_private_scope; }

    int get_data_2_of_Base_class_in_public_scope(void) { return data_2_of_Base_class_in_public_scope; }
};

class Derived : Base //* Inherited as privately which is default type
{
    int data_3_of_Derived_class_in_private_scope;

public:
    void process_of_Derived_class_in_public_scope()
    {
        data_3_of_Derived_class_in_private_scope = get_data_1_of_Base_class_in_public_scope() * data_2_of_Base_class_in_public_scope;
    }

    void display_of_Derived_class_in_public_scope()
    {
        cout << "Data 1 is " << get_data_1_of_Base_class_in_public_scope() << endl
             << "Data 2 is " << data_2_of_Base_class_in_public_scope << endl
             << "Data 3 is " << data_3_of_Derived_class_in_private_scope << endl;
    }

    // * The below function is the major change in the (Part-1) and (Part-2)
    void set_data_of_Derived_class_in_public_scope(int a, int b) { set_data_of_Base_class_in_public_scope(a, b); }
};

int main()
{
    Derived der;
    der.set_data_of_Derived_class_in_public_scope(11, 2);
    der.process_of_Derived_class_in_public_scope();
    der.display_of_Derived_class_in_public_scope();

    return 0;
}

```

---

---

## **_81.) tutorial_39 of C++_**

### [**_Click me_**](tutorial_39.cpp "Clike here to see full file") to see full file of tutorial_39

```C++
//* Date 22-09-2021

//* In this tutorial you learn about Protected Access Modifiers

//* 	                    Public Derivation	Private Derivation	Protected Derivation
//* Private members	        Not Inherited	    Not Inherited	    Not Inherited
//* Protected members	    Protected	        Private	            Protected
//* Public members	        Public	            Private	            Protected

#include <iostream>

using namespace std;

class Base
{
protected:
    int data_1_of_Base_class_in_protected_scope;

private:
    int data_2_of_Base_class_in_private_scope;
};

class Derived : protected Base
{
};

int main()
{
    Derived der;
    // cout << derived.data_1_of_Base_class_in_protected_scope; //* It will give an error because it is inherited as Protected which is almost same to Private
    // cout << derived.data_2_of_Base_class_in_private_scope; //* It will give an error because it is not inherited, as the type mentioned is protected

    return 0;
}

```

---

---

## **_82.) tutorial_40 of C++_**

### [**_Click me_**](tutorial_40.cpp "Clike here to see full file") to see full file of tutorial_40

```C++
//* Date 07-10-2021

//* In this tutorial you learn deeply about Multilevel Inheritance

#include <iostream>
#include <string>

using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    int get_roll_number();
};

class Exam : public Student
{
protected:
    float maths_marks, physics_marks, chemistry_marks, biology_marks;

public:
    void set_marks(float, float, float, float);
    void get_marks(string);
};

class Result : public Exam
{
private:
    string name_of_student = "None";
    float total_precentage = 0;

public:
    void set_name(string);
    void calculate_precentage(void);
    void get_precentage(void);
};

void Student::set_roll_number(int roll_num)
{
    roll_number = roll_num;
}

int Student::get_roll_number(void)
{
    return roll_number;
}

void Exam::set_marks(float maths, float physics, float chemistry, float biology)
{
    maths_marks = maths;
    physics_marks = physics;
    chemistry_marks = chemistry;
    biology_marks = biology;
}

void Exam::get_marks(string name_of_student)
{
    cout << name_of_student << " whose roll_number is " << roll_number
         << " got-" << endl;
    cout << maths_marks << " in Maths" << endl;
    cout << physics_marks << " in Physics" << endl;
    cout << chemistry_marks << " in Chemistry" << endl;
    cout << biology_marks << " in Biology" << endl;
}

void Result::set_name(string name)
{
    name_of_student = name;
}

void Result::calculate_precentage(void)
{
    total_precentage = ((maths_marks + physics_marks + chemistry_marks + biology_marks) / 400) * 100;
}

void Result::get_precentage(void)
{
    cout << name_of_student << " whose roll_number is " << roll_number
         << " got " << total_precentage << "%" << endl;
}

int main()
{
    // Student Aman, Rohan;

    // Aman.set_roll_number(5);
    // Rohan.set_roll_number(46);

    // cout << "Aman Roll number is " << Aman.get_roll_number() << endl;
    // cout << "Rohan Roll number is " << Rohan.get_roll_number() << endl;

    // Exam Suman, Mohan;

    // Suman.set_roll_number(50);
    // Mohan.set_roll_number(31);

    // Suman.set_marks(54.4, 78.4, 35, 89.5);
    // Mohan.set_marks(45, 12, 65.4, 96.7);

    // Suman.get_marks("Suman");
    // Mohan.get_marks("Mohan");

    // cout << "Suman Roll number is " << Suman.get_roll_number() << endl;
    // cout << "Mohan Roll number is " << Mohan.get_roll_number() << endl;

    Result Billu;

    Billu.set_roll_number(11);
    Billu.set_name("Billu");
    Billu.set_marks(11.89, 74.21, 63.1, 81.33);
    Billu.calculate_precentage();
    Billu.get_marks("Billu");
    Billu.get_precentage();

    return 0;
}
```

---

---

## **_83.) tutorial_41 of C++_**

### [**_Click me_**](tutorial_41.cpp "Clike here to see full file") to see full file of tutorial_41

```C++
//* Date 07-10-2021

//* In this tutorial you learn deeply about Multiple Inheritance

//* Below given is the Syntax/Pesudocode for Multiple Inheritance:
//* class Derived_Class: visibility-mode base1, visibility-mode base2
//* {
//*      Class body of class "Derived_Class"
//* };

//* Person + Employee = Programmer

#include <iostream>
#include <string>

using namespace std;

class Person
{
protected:
    float weight_of_the_person, height_of_the_person;
    string name_of_the_person = "None";

public:
    void set_weight_height(float, float);
    void get_weight_height(void);
    void set_name(string);
};

class Employee
{
protected:
    int salary = 100, id;

public:
    void set_salary(int);
    int get_salary(void);
    void set_id(void);
};

class Programmer : public Person, public Employee
{
    int number_of_languages_knows = 1;
    string name_of_the_language_specialist_in;
    float year_of_experience = 1.1;

public:
    void set_number_of_languages_knows(int);
    void set_number_of_year_of_experience(float);
    void set_special_language(string);
    void get_full_info(void);
};

void Person::set_weight_height(float weight, float height)
{
    weight_of_the_person = weight;
    height_of_the_person = height;
}
void Person::get_weight_height(void)
{
    cout << name_of_the_person << "'s height is " << height_of_the_person << " cm, and weight is " << weight_of_the_person << " kg" << endl;
}
void Person::set_name(string name)
{
    name_of_the_person = name;
}

void Employee::set_salary(int income)
{
    salary = income;
}
int Employee::get_salary(void)
{
    return salary;
}
void Employee::set_id(void)
{
    static int id_of_the_employee = 1;
    id = id_of_the_employee++;
}

void Programmer::set_number_of_languages_knows(int num)
{
    number_of_languages_knows = num;
}
void Programmer::set_number_of_year_of_experience(float year_of_exp)
{
    year_of_experience = year_of_exp;
}
void Programmer::set_special_language(string lang)
{
    name_of_the_language_specialist_in = lang;
}
void Programmer::get_full_info(void)
{
    cout << "The below given information is of " << name_of_the_person << endl
         << "His Employee ID is " << id << endl
         << "His Height is " << height_of_the_person << " cm" << endl
         << "His Weight is " << weight_of_the_person << " kg" << endl
         << "His Salary is " << salary << " Rupees" << endl
         << "He Knows " << number_of_languages_knows << " languages" << endl
         << "His Specialty is in " << name_of_the_language_specialist_in << " programming language" << endl
         << "He has " << year_of_experience << " years of work experience as a Programmer" << endl;
}

int main()
{
    Programmer aman, Rohan;

    aman.set_name("Aman");
    aman.set_weight_height(58.4, 160.3);
    aman.set_salary(102454);
    aman.set_id();
    aman.set_number_of_languages_knows(12);
    aman.set_number_of_year_of_experience(6.9);
    aman.set_special_language("C++");

    aman.get_full_info();

    return 0;
}

```

---

---

## **_84.) tutorial_42_exercise of C++_**

### [**_Click me_**](tutorial_42_exercise.cpp "Clike here to see full file") to see full file of tutorial_42_exercise

```C++
//* Date 07-10-2021

//* This tutorial is an Exercise releated to Inheritance below given is the question

/*
?Create 2 classes:
?   1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
?   2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.
?
?   Create another class HybridCalculator and inherit it using these 2 classes:
?   Q1. What type of Inheritance are you using?
?   Q2. Which mode of Inheritance are you using?
?   Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
?   Q4. How is code reusability implemented?
*/

#include <iostream>
#include <math.h>

using namespace std;

class SimpleCalculator
{
protected:
    float num_1 = 0, num_2 = 0;

public:
    void set_values_for_simple_calculation(float, float);
    void get_values_for_simple_mathematical_operations(void);
    void preform_simple_mathematical_operations(void);
};

class ScientificCalculator
{
protected:
    float num_1 = 0, num_2 = 0, result = 0;

public:
    void set_values_for_scientific_calculation(float, float);
    void get_values_for_scientific_mathematical_operations(void);
    void preform_scientific_mathematical_operations(void);
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};

void SimpleCalculator ::set_values_for_simple_calculation(float num1, float num2)
{
    num_1 = num1;
    num_2 = num2;
}
void SimpleCalculator::get_values_for_simple_mathematical_operations(void)
{
    cout << "num_1 = " << num_1 << endl
         << " num_2 = " << num_2 << endl;
}
void SimpleCalculator::preform_simple_mathematical_operations(void)
{
    cout << num_1 << " + " << num_2 << " is " << num_1 + num_2 << endl
         << num_1 << " - " << num_2 << " is " << num_1 - num_2 << endl
         << num_1 << " * " << num_2 << " is " << num_1 * num_2 << endl
         << num_1 << " / " << num_2 << " is " << num_1 / num_2 << endl;
}

void ScientificCalculator ::set_values_for_scientific_calculation(float num1, float num2)
{
    num_1 = num1;
    num_2 = num2;
}
void ScientificCalculator::get_values_for_scientific_mathematical_operations(void)
{
    cout << "num_1 = " << num_1 << endl
         << " num_2 = " << num_2 << endl;
}
void ScientificCalculator::preform_scientific_mathematical_operations(void)
{
    cout << "sin(" << num_1 << ") + sin(" << num_2 << ") is " << sin(num_1) + sin(num_2) << endl
         << "cos(" << num_1 << ") + cos(" << num_2 << ") is " << cos(num_1) + cos(num_2) << endl
         << "tan(" << num_1 << ") + tan(" << num_2 << ") is " << tan(num_1) + tan(num_2) << endl
         << "tan(sin(" << num_1 << ") + cos(" << num_2 << ")) is " << tan(sin(num_1) + cos(num_2)) << endl;
}

int main()
{
    HybridCalculator calc_1;

    calc_1.set_values_for_scientific_calculation(4.5, 75.45);
    calc_1.preform_scientific_mathematical_operations();
    cout << endl
         << endl;

    calc_1.set_values_for_simple_calculation(957.45, 7.12);
    calc_1.preform_simple_mathematical_operations();

    return 0;
}
```

---

---

## **_85.) tutorial_43_1 of C++_**

### [**_Click me_**](tutorial_43_1.cpp "Clike here to see full file") to see full file of tutorial_43_1

```C++
//* Date 07-10-2021

//* In this tutorial you will learn about Ambiguity Resolution in Inheritance

#include <iostream>

using namespace std;

class Base_Class_1
{
public:
    void greet_me(void);
};

class Base_Class_2
{
public:
    void greet_me(void);
};

class Derived_Class : public Base_Class_1, public Base_Class_2
{
public:
    void greet_me(void);
};

void Base_Class_1::greet_me(void)
{
    cout << "This line is said by Base_Class_1 --->How are you ?" << endl;
}
void Base_Class_2::greet_me(void)
{
    cout << "This line is said by Base_Class_2 --->Kaise ho aap ?" << endl;
}

//! void Derived_Class::greet_me(void)
//! {
//!     cout << "Derived class Greet function" << endl;
//! }

void Derived_Class::greet_me(void)
{
    Base_Class_1::greet_me();
}

int main()
{

    Base_Class_1 base_1_object;
    Base_Class_2 base_2_object;

    base_1_object.greet_me();
    base_2_object.greet_me();

    Derived_Class derived_class_object;
    derived_class_object.greet_me();

    return 0;
}
```

---

---

## **_86.) tutorial_43_2 of C++_**

### [**_Click me_**](tutorial_43_2.cpp "Clike here to see full file") to see full file of tutorial_43_2

```C++
//* Date 07-10-2021

//* In this tutorial you will learn about Ambiguity Resolution in Inheritance

#include <iostream>

using namespace std;

class Base_Class
{
public:
    void greet_me(void)
    {
        cout << "This line is said by Base_Class --->How are you ?" << endl;
    }
};

class Derived_Class : public Base_Class
{
public:
    void greet_me(void) //! This method will overide Base_Class greet_me() method
    {
        cout << "This line is said by Derived_Class --->Kaise ho aap ?" << endl;
    }
};

int main()
{

    Base_Class base_class_object;
    Derived_Class derived_class_object;

    base_class_object.greet_me();
    derived_class_object.greet_me();

    return 0;
}
```

---

---

## **_87.) tutorial_43_3 of C++_**

### [**_Click me_**](tutorial_43_3.cpp "Clike here to see full file") to see full file of tutorial_43_3

```C++
//* Date 07-10-2021

//* In this tutorial you will learn about Ambiguity Resolution in Inheritance

#include <iostream>

using namespace std;

class Base_Class
{
public:
    void greet_me(void)
    {
        cout << "This line is said by Base_Class --->How are you ?" << endl;
    }
};

class Derived_Class : public Base_Class
{
    //! public:
    //!     void greet_me(void)
    //!     {
    //!         cout << "This line is said by Derived_Class --->Kaise ho aap ?" << endl;
    //!     }
};

int main()
{

    Base_Class base_class_object;
    Derived_Class derived_class_object;

    base_class_object.greet_me();
    derived_class_object.greet_me();

    return 0;
}
```

---

---

## **_88.) tutorial_45 of C++_**

### [**_Click me_**](tutorial_45.cpp "Clike here to see full file") to see full file of tutorial_45

```C++
//* Date 07-10-2021

//* In this tutorial you will learn about Implementation Virtual Base Class in Real Life

#include <iostream>
#include <string>

using namespace std;

class Student
{
protected:
    int roll_no = 0;
    string student_name = "None";

public:
    void set_roll_no(int);
    void print_roll_no(void);
    void set_name(string);
};

class Test : virtual public Student
{
protected:
    float total_marks = 0;

public:
    void set_total_marks(float);
    void get_total_marks(void);
};

class Extra_caricular : virtual public Student
{
protected:
    float total_points_in_extra_caricular = 0;

public:
    void set_total_points_in_extra_caricular(float);
    void get_total_points_in_extra_caricular(void);
};

class Result : public Test, public Extra_caricular
{
private:
    float result = 0;

public:
    void calculate_result(void);
    void show_result(void);
};

void Student::set_roll_no(int num)
{
    roll_no = num;
}
void Student::print_roll_no(void)
{
    cout << student_name << "\'s Roll Number is " << roll_no << endl;
}
void Student::set_name(string name)
{
    student_name = name;
}

void Test::set_total_marks(float marks)
{
    total_marks = marks;
}
void Test::get_total_marks(void)
{
    cout << student_name << " got " << total_marks << " total marks in tests" << endl;
}

void Extra_caricular::set_total_points_in_extra_caricular(float points)
{
    total_points_in_extra_caricular = points;
}
void Extra_caricular::get_total_points_in_extra_caricular(void)
{
    cout << student_name << " got " << total_points_in_extra_caricular << " total points in Extra Caricular" << endl;
}

void Result::calculate_result(void)
{
    result = ((total_marks + total_points_in_extra_caricular) / 200) * 100;
}
void Result::show_result(void)
{
    cout << student_name << " whose Roll Number is " << roll_no << " got total of " << result << " precentile in school" << endl;
}

int main()
{
    Result aman;
    aman.set_name("Aman");
    aman.set_roll_no(5);
    aman.set_total_marks(87.45);
    // aman.get_total_marks();
    aman.set_total_points_in_extra_caricular(95.12);
    // aman.get_total_points_in_extra_caricular();
    aman.calculate_result();
    aman.show_result();

    return 0;
}
```

---

---

## **_89.) tutorial_48 of C++_**

### [**_Click me_**](tutorial_48.cpp "Clike here to see full file") to see full file of tutorial_48

```C++
//* Date 08-10-2021

//* In this tutorial you will learn about Constructors in Derived Classes

/*
*   Case1:
*   class B: public A{
*      Order of execution of constructor -> first A() then B()
*   };

*   Case2:
*   class A: public B, public C{
*      Order of execution of constructor -> B() then C() and A()
*   };

*   Case3:
*   class A: public B, virtual public C{
*      Order of execution of constructor -> C() then B() and A()
*   };
*/

#include <iostream>

using namespace std;

class Base_Class_1
{
private:
    int int_of_base_class_1;

public:
    Base_Class_1(int);
    void print_data_of_base_class_1(void);
};

class Base_Class_2
{
private:
    int int_of_base_class_2;

public:
    Base_Class_2(int);
    void print_data_of_base_class_2(void);
};

class Derived_Class : public Base_Class_1, public Base_Class_2
{
private:
    int int_of_derived_class;
    float float_of_derived_class;

public:
    Derived_Class(int, int, int, float);
    void print_data_of_derived_class(void);
};

Base_Class_1::Base_Class_1(int num)
{
    int_of_base_class_1 = num;
    cout << "Base_Class_1 Constructor is called" << endl;
}

Base_Class_2::Base_Class_2(int num)
{
    int_of_base_class_2 = num;
    cout << "Base_Class_2 Constructor is called" << endl;
}

Derived_Class::Derived_Class(int num_1, int num_2, int num_3, float num_4) : Base_Class_2(num_2), Base_Class_1(num_1)
{
    int_of_derived_class = num_3;
    float_of_derived_class = num_4;
    cout << "Derived Class Constructor is called" << endl;
}

void Base_Class_1::print_data_of_base_class_1(void)
{
    cout << "Base_Class_1\'s \"int_of_base_class_1\" value is " << int_of_base_class_1 << endl;
}

void Base_Class_2::print_data_of_base_class_2(void)
{
    cout << "Base_Class_2\'s \"int_of_base_class_2\" value is " << int_of_base_class_2 << endl;
}

void Derived_Class::print_data_of_derived_class(void)
{
    cout << "Derived_Class\'s \"int_of_derived_class\" value is " << int_of_derived_class << endl
         << "Derived_Class\'s \"float_of_derived_class\" value is " << float_of_derived_class << endl;
}

int main()
{
    Derived_Class num(1, 2, 3, 4.44);
    cout << endl
         << endl;
    num.print_data_of_base_class_1();
    num.print_data_of_base_class_2();
    num.print_data_of_derived_class();

    return 0;
};
```

---

---

## **_90.) tutorial_49 of C++_**

### [**_Click me_**](tutorial_49.cpp "Clike here to see full file") to see full file of tutorial_49

```C++
//* Date 08-10-2021

//* In this tutorial you will learn about Initialization of values in Constructors

#include <iostream>

using namespace std;

class Test
{
private:
    int num_1, num_2;

public:
    Test(int, int);
};

//* Test::Test(int a, int b) : num_1(a), num_2(b)             // ---> This will not give a garbage value because num_1 is instilize before num_2
//* Test::Test(int a, int b) : num_1(b), num_2(a)             // ---> This will not give a garbage value because num_1 is instilize before num_2
//* Test::Test(int a, int b) : num_1(a + 1), num_2(b - 1)     // ---> This will not give a garbage value because num_1 is instilize before num_2
//* Test::Test(int a, int b) : num_1(a + b), num_2(b)         // ---> This will not give a garbage value because num_1 is instilize before num_2
//* Test::Test(int a, int b) : num_1(a), num_2(b - a)         // ---> This will not give a garbage value because num_1 is instilize before num_2
//* Test::Test(int a, int b) : num_1(a), num_2(b - num_1)     // ---> This will not give a garbage value because num_1 is instilize before num_2
//! Test::Test(int a, int b) : num_1(a + num_2), num_2(b)     // ---> This will give a garbage value because num_1 is instilize before num_2
//! Test::Test(int a, int b) : num_2(b), num_1(a + num_2)     // ---> This will give a garbage value because num_1 is instilize before num_2
Test::Test(int a, int b) : num_1(a), num_2(b * (num_1 + 1))
{
    cout << "num_1: " << num_1 << endl
         << "num_2: " << num_2 << endl;
}

int main()
{
    Test val_1(1, 3);

    return 0;
}
```

---

---

## **_91.) tutorial_50 of C++_**

### [**_Click me_**](tutorial_50.cpp "Clike here to see full file") to see full file of tutorial_50

```C++
//* Date 08-10-2021

//* In this tutorial you will learn about how to use Pointers in context of Classes and Objects

#include <iostream>

using namespace std;

int main()
{
    //* int num_1 = 456;
    //* int *ptr_1 = &num_1;
    //* cout << "ptr_1 = " << *ptr_1 << endl;

    //* float *ptr_2 = new float(87.5784);
    //* cout << "ptr_2 = " << *ptr_2 << endl;

    int *array_1 = new int[2];
    array_1[0] = 5;
    array_1[1] = 2;
    //! delete[] array_1;     // ---> This line will free-up the memory consumed by array_1
    cout << "array_1[0] = " << array_1[0] << endl
         << "array_1[1] = " << array_1[1] << endl;

    return 0;
}

```

---

---

## **_92.) tutorial_51_1_functions of C++_**

### [**_Click me_**](tutorial_51_1_functions.cpp "Clike here to see full file") to see full file of tutorial_51_1_functions

```C++
//* Date 08-10-2021

//* This is a function/method file created for Tutorial 51

#include <iostream>

using namespace std;

class Create_Complex_Number
{
protected:
    int real, imaginary;

public:
    Create_Complex_Number(int re, int im) : real(re), imaginary(im) {}
    void print_data(void);
    void set_data(int, int);
};

class Complex : public Create_Complex_Number
{
public:
    Complex(int real_number, int imaginary_number) : Create_Complex_Number(real_number, imaginary_number) {}
    Complex(void) : Create_Complex_Number(1, 1) {}
    void sum_complex_number(Complex, Complex);
};

void Create_Complex_Number::print_data(void)
{
    cout << "Your full number is " << real << " + " << imaginary << "i" << endl;
}

void Create_Complex_Number::set_data(int r, int i)
{
    real = r;
    imaginary = i;
}

void Complex::sum_complex_number(Complex a, Complex b)
{
    real = a.real + b.real;
    imaginary = a.imaginary + b.imaginary;
}
```

---

---

## **_93.) tutorial_51_2 of C++_**

### [**_Click me_**](tutorial_51_2.cpp "Clike here to see full file") to see full file of tutorial_51_2

```C++
//* Date 08-10-2021

//* In this tutorial you will learn about Pointers to Objects and Arrow Operator

#include "tutorial_51_1_functions.cpp"

int main()
{

    Complex num_1(45, 9);
    Complex num_2(55, 11);

    num_1.print_data();
    num_2.print_data();

    Complex num_3;
    num_3.sum_complex_number(num_1, num_2);
    num_3.print_data();

    return 0;
}
```

---

---

## **_94.) tutorial_51_3 of C++_**

### [**_Click me_**](tutorial_51_3.cpp "Clike here to see full file") to see full file of tutorial_51_3

```C++
//* Date 08-10-2021

//* In this tutorial you will learn about Pointers to Objects and Arrow Operator

#include <typeinfo>
#include "tutorial_51_1_functions.cpp"

int main()
{

    Complex num_1(15, 8);
    Complex *pointer_of_num_1 = &num_1;
    cout << "Value of pointer_of_num_1 is " << pointer_of_num_1 << endl;
    cout << "Type of num_1 is " << typeid(num_1).name() << endl;
    cout << "Type of pointer_of_num_1 is " << typeid(pointer_of_num_1).name() << endl;

    return 0;
}
```

---

---

## **_95.) tutorial_51_4 of C++_**

### [**_Click me_**](tutorial_51_4.cpp "Clike here to see full file") to see full file of tutorial_51_4

```C++
//* Date 08-10-2021

//* In this tutorial you will learn about Pointers to Objects and Arrow Operator

#include "tutorial_51_1_functions.cpp"

int main()
{

    Complex num_1(15, 8);
    Complex *pointer_of_num_1 = &num_1;
    (*pointer_of_num_1).print_data();

    return 0;
}
```

---

---

## **_96.) tutorial_51_5 of C++_**

### [**_Click me_**](tutorial_51_5.cpp "Clike here to see full file") to see full file of tutorial_51_5

```C++
//* Date 08-10-2021

//* In this tutorial you will learn about Pointers to Objects and Arrow Operator

#include "tutorial_51_1_functions.cpp"

int main()
{

    Complex *pointer_of_num_1 = new Complex(89, 4);
    pointer_of_num_1->print_data();

    return 0;
}
```

---

---

## **_97.) tutorial_51_6 of C++_**

### [**_Click me_**](tutorial_51_6.cpp "Clike here to see full file") to see full file of tutorial_51_6

```C++
//* Date 08-10-2021

//* In this tutorial you will learn about Pointers to Objects and Arrow Operator

#include "tutorial_51_1_functions.cpp"

int main()
{

    Complex *pointer_of_num_1 = new Complex[2];
    pointer_of_num_1->set_data(56, 74);
    pointer_of_num_1->print_data();

    return 0;
}
```

---

---

## **_98.) tutorial_51_7 of C++_**

### [**_Click me_**](tutorial_51_7.cpp "Clike here to see full file") to see full file of tutorial_51_7

```C++
//* Date 08-10-2021

//* In this tutorial you will learn about Pointers to Objects and Arrow Operator

#include "tutorial_51_1_functions.cpp"

int main()
{

    Complex *pointer_of_num_1 = new Complex[3];

    pointer_of_num_1->set_data(56, 74);
    (pointer_of_num_1 + 1)->set_data(32, 13);
    (pointer_of_num_1 + 2)->set_data(16, 94);

    pointer_of_num_1->print_data();
    (pointer_of_num_1 + 1)->print_data();
    (pointer_of_num_1 + 2)->print_data();

    return 0;
}
```

---

---

## **_99.) tutorial_52_1_functions of C++_**

### [**_Click me_**](tutorial_52_1_functions.cpp "Clike here to see full file") to see full file of tutorial_52_1_functions

```C++
//* Date 08-10-2021

//* This is a function/method file created for Tutorial 52

#include <iostream>
#include <string>

using namespace std;

class Shop
{
private:
        int id;
        float price;
        string item_company_name;

public:
        Shop(float, string);
        void print_details(void);
        void set_data(float, string);
};

Shop::Shop(float price_of_item = 1.1, string name_of_item_company = "Not Provided") : price(price_of_item), item_company_name(name_of_item_company)
{
        int static id_counter = 1;
        id = id_counter++;
}
void Shop::print_details(void)
{
        cout << "Item\'s id is " << id << endl
             << "Item\'s price is is " << price << endl
             << "Item\'s Company Name is " << item_company_name << endl;
}
void Shop::set_data(float price_of_item = 1.1, string name_of_item_company = "Not Provided")
{
        price = price_of_item;
        item_company_name = name_of_item_company;
}

```

---

---

## **_100.) tutorial_52_2 of C++_**

### [**_Click me_**](tutorial_52_2.cpp "Clike here to see full file") to see full file of tutorial_52_2

```C++
//* Date 08-10-2021

//* In this tutorial you will learn about creating Array of Objects using Pointers

#include "tutorial_52_1_functions.cpp"

int main()
{
    Shop butter(65.78, "Amul");
    butter.print_details();
    return 0;
}
```

---

---

## **_101.) tutorial_52_3 of C++_**

### [**_Click me_**](tutorial_52_3.cpp "Clike here to see full file") to see full file of tutorial_52_3

```C++
//* Date 08-10-2021

//* In this tutorial you will learn about creating Array of Objects using Pointers

#include "tutorial_52_1_functions.cpp"

int main()
{
    Shop chocolate;
    chocolate.print_details();
    cout << "\n\n";
    chocolate.set_data(45.98, "Nestley");
    chocolate.print_details();
    return 0;
}
```

---

---

## **_102.) tutorial_52_4 of C++_**

### [**_Click me_**](tutorial_52_4.cpp "Clike here to see full file") to see full file of tutorial_52_4

```C++
//* Date 08-10-2021

//* In this tutorial you will learn about creating Array of Objects using Pointers

#include "tutorial_52_1_functions.cpp"

int main()
{
    Shop dog_food(912.12, "Pet's Food"), processor(16000.784, "Intel");
    dog_food.print_details();
    processor.print_details();

    return 0;
}
```

---

---

## **_103.) tutorial_52_5 of C++_**

### [**_Click me_**](tutorial_52_5.cpp "Clike here to see full file") to see full file of tutorial_52_5

```C++
//* Date 08-10-2021

//* In this tutorial you will learn about creating Array of Objects using Pointers

#include "tutorial_52_1_functions.cpp"
#include <cstdlib>
#include <ctime>
// #include <string>

int main()
{
    int size = 3;

    Shop *pointer_pointing_to_shop = new Shop[size];

    for (int i = 0; i < size; i++)
    {
        srand((unsigned int)time(NULL) * i);
        float random_price = (float(rand()) / float((RAND_MAX)) * 5.0) * 1000;

        string company_name;
        cout << "Please enter the name of the Company: " << endl;
        cin >> company_name;

        (*(pointer_pointing_to_shop + i)).set_data(random_price, company_name);
    }
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        (*(pointer_pointing_to_shop + i)).print_details();
        cout << endl;
    }

    return 0;
}

```

---

---

## **_104.) tutorial_52_6 of C++_**

### [**_Click me_**](tutorial_52_6.cpp "Clike here to see full file") to see full file of tutorial_52_6

```C++
//* Date 08-10-2021

//* In this tutorial you will learn about creating Array of Objects using Pointers

#include "tutorial_52_1_functions.cpp"
#include <cstdlib>
#include <ctime>
// #include <string>

int main()
{
    int size = 3;

    Shop *pointer_pointing_to_shop = new Shop[size];

    for (int i = 0; i < size; i++)
    {
        srand((unsigned int)time(NULL) * i);
        float random_price = (float(rand()) / float((RAND_MAX)) * 5.0) * 1000;

        string company_name;
        cout << "Please enter the name of the Company: " << endl;
        cin >> company_name;

        (pointer_pointing_to_shop + i)->set_data(random_price, company_name);
    }
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        (pointer_pointing_to_shop + i)->print_details();
        cout << endl;
    }

    return 0;
}

```

---

---

## **_105.) tutorial_52_7 of C++_**

### [**_Click me_**](tutorial_52_7.cpp "Clike here to see full file") to see full file of tutorial_52_7

```C++
//* Date 08-10-2021

//* In this tutorial you will learn about creating Array of Objects using Pointers

#include "tutorial_52_1_functions.cpp"
#include <cstdlib>
#include <ctime>
// #include <string>

int main()
{
    int size = 3;

    Shop *pointer_pointing_to_shop = new Shop[size];

    short int i = 0;
    for (; i < size; i++)
    {
        srand((unsigned int)time(NULL) * i);
        float random_price = (float(rand()) / float((RAND_MAX)) * 5.0) * 1000;

        string company_name;
        cout << "Please enter the name of the Company: " << endl;
        cin >> company_name;

        (pointer_pointing_to_shop)->set_data(random_price, company_name);
        pointer_pointing_to_shop++;
    }
    cout << endl;

    pointer_pointing_to_shop -= size;

    for (i = 0; i < size; i++)
    {
        (pointer_pointing_to_shop + i)->print_details();
        cout << endl;
    }

    return 0;
}

```

---

---

## **_106.) tutorial_53_1 of C++_**

### [**_Click me_**](tutorial_53_1.cpp "Clike here to see full file") to see full file of tutorial_53_1

```C++
//* Date 08-10-2021

//* In this tutorial you will learn about this Pointer implementation in OOP on C++

#include <iostream>

using namespace std;

class A
{
    int a;

public:
    void set_data(int a) { a = a; }
    void get_data() { cout << a << endl; }
};

int main()
{
    A obj_1;
    obj_1.set_data(54);
    obj_1.get_data(); //! This will give a garbage value
    return 0;
}
```

---

---

## **_107.) tutorial_53_2 of C++_**

### [**_Click me_**](tutorial_53_2.cpp "Clike here to see full file") to see full file of tutorial_53_2

```C++
//* Date 08-10-2021

//* In this tutorial you will learn about this Pointer implementation in OOP on C++

#include <iostream>

using namespace std;

class A
{
    int a;

public:
    void set_data(int a) { this->a = a; }
    void get_data() { cout << a << endl; }
};

int main()
{
    A obj_1;
    obj_1.set_data(29);
    obj_1.get_data(); //* Now because of "this" keyword at function set_data in class A this will not give a garbage value
    return 0;
}
```

---

---

## **_108.) tutorial_53_3 of C++_**

### [**_Click me_**](tutorial_53_3.cpp "Clike here to see full file") to see full file of tutorial_53_3

```C++
//* Date 08-10-2021

//* In this tutorial you will learn about this Pointer implementation in OOP on C++

#include <iostream>

using namespace std;

class A
{
    int a;

public:
    void set_data_not_returning_object(int a) { this->a = a; }

    A &set_data_with_returning_object(int a) //* This function will return an object whose data is set by it
    {
        this->a = a;
        return *this;
    }

    void get_data() { cout << a << endl; }
};

int main()
{
    A obj_1, obj_2;
    obj_1.set_data_with_returning_object(236).get_data();
    obj_2.set_data_not_returning_object(789);
    obj_2.get_data();
    return 0;
}
```

---

---

## **_110.) tutorial_55_1_functions of C++_**

### [**_Click me_**](tutorial_55_1_functions.cpp "Clike here to see full file") to see full file of tutorial_55_1_functions

```C++
//* Date 08-10-2021

//* This is a function/method file created for Tutorial 55

#include <iostream>

using namespace std;

class BaseClass
{
public:
    int var_of_base_class = 4;
    void print_data(void)
    {
        cout << "Value of var_of_base_class = " << var_of_base_class << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int var_of_derived_class = 9;
    void print_data(void)

    {
        cout << "Value of var_of_base_class = " << var_of_base_class << endl;
        cout << "Value of var_of_derived_class = " << var_of_derived_class << endl;
    }
};
```

---

---

## **_111.) tutorial_55_2 of C++_**

### [**_Click me_**](tutorial_55_2.cpp "Clike here to see full file") to see full file of tutorial_55_2

```C++
//* Date 08-10-2021

//* In this tutorial you will learn about Pointers to Derived Classes and an Example of run time Polymorphism

#include "tutorial_55_1_functions.cpp"

int main()
{
    BaseClass *pointer_of_base_class;
    DerivedClass object_of_derived_class;
    pointer_of_base_class = &object_of_derived_class; //* This syntax will point BaseClass pointer to DerivedClass object

    pointer_of_base_class->var_of_base_class = 56;
    //! pointer_of_base_class->var_of_derived_class = 89; //* This syntax will throw an Error
    pointer_of_base_class->print_data();

    return 0;
}
```

---

---

## **_112.) tutorial_55_3 of C++_**

### [**_Click me_**](tutorial_55_3.cpp "Clike here to see full file") to see full file of tutorial_55_3

```C++
//* Date 08-10-2021

//* In this tutorial you will learn about Pointers to Derived Classes and an Example of run time Polymorphism

#include "tutorial_55_1_functions.cpp"

int main()
{
    BaseClass *pointer_of_base_class;
    DerivedClass object_of_derived_class;
    pointer_of_base_class = &object_of_derived_class; //* This syntax will point BaseClass pointer to DerivedClass object

    pointer_of_base_class->var_of_base_class = 56;
    //! pointer_of_base_class->var_of_derived_class = 89; //* This syntax will throw an Error
    //* pointer_of_base_class->print_data();

    DerivedClass *pointer_of_derived_class;
    pointer_of_derived_class = &object_of_derived_class;
    pointer_of_derived_class->var_of_derived_class = 74;
    //* pointer_of_derived_class->print_data();

    object_of_derived_class.print_data();

    return 0;
}
```

---

---

## **_113.) tutorial_56_1_functions of C++_**

### [**_Click me_**](tutorial_56_1_functions.cpp "Clike here to see full file") to see full file of tutorial_56_1_functions

```C++
//* Date 09-10-2021

//* This is a copy of function/method file created for Tutorial 55, and this  function/method file created for Tutorial 56

#include <iostream>

using namespace std;

class BaseClass
{
public:
    int var_of_base_class = 4;
    virtual void print_data(void)
    {
        cout << "Value of var_of_base_class = " << var_of_base_class << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_of_derived_class = 9;
    void print_data(void)
    {
        cout << "Value of var_of_base_class = " << var_of_base_class << endl;
        cout << "Value of var_of_derived_class = " << var_of_derived_class << endl;
    }
};
```

---

---

## **_114.) tutorial_56_2 of C++_**

### [**_Click me_**](tutorial_56_2.cpp "Clike here to see full file") to see full file of tutorial_56_2

```C++
//* Date 09-10-2021

//* In this tutorial you will learn about Virtual Functions

#include "tutorial_56_1_functions.cpp"

int main()
{

    BaseClass *pointer_of_base_class;
    DerivedClass object_of_derived_class;
    pointer_of_base_class = &object_of_derived_class;

    pointer_of_base_class->var_of_base_class = 56;
    object_of_derived_class.var_of_derived_class = 74;
    pointer_of_base_class->print_data();

    return 0;
}
```

---

---

## **_115.) tutorial_57_1_functions of C++_**

### [**_Click me_**](tutorial_57_1_functions.cpp "Clike here to see full file") to see full file of tutorial_57_1_functions

```C++
//* Date 09-10-2021

//* This is a function/method file created for Tutorial 57 to illustrate concept of Visual Functions
//* Note: Virtual Function defined in print_details() function of class Code_With_Harry/CWH

/*
Rules for virtual functions--
    1.  They cannot be static
    2.  They are accessed by object pointers
    3.  Virtual functions can be a friend of another class
    4.  A virtual function in the base class might not be used.
    5.  If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
*/

#include <iostream>
#include <string>

using namespace std;

typedef class Code_With_Harry
{
protected:
    string title;
    float rating;
    int id;

public:
    Code_With_Harry(string, float);
    virtual void print_details(void);
    // void print_details(void);
} CWH;

typedef class Code_With_Harry_video : public CWH
{
protected:
    float video_length_in_seconds;

public:
    Code_With_Harry_video(string title, float rating, float video_length_in_seconds) : CWH(title, rating), video_length_in_seconds(video_length_in_seconds) {}
    void print_details(void);
} CWH_v;

typedef class Code_With_Harry_blog : public CWH
{
protected:
    int number_of_words;

public:
    Code_With_Harry_blog(string title, float rating, int number_of_words) : CWH(title, rating), number_of_words(number_of_words) {}
    void print_details(void);
} CWH_b;

Code_With_Harry::Code_With_Harry(string title = "Not Specified", float rating = 0)
{
    static int id = 1;
    this->id = id++;
    this->title = title;
    this->rating = rating;
}
void CWH::print_details(void)
{
    cout << "ID of the video/blog is " << id << endl
         << "Title of the video/blog is " << title << endl
         << "Rating of the video/blog is " << rating << " out of 5" << endl;
}

void CWH_v::print_details(void)
{
    cout << "ID of the video/blog is " << id << endl
         << "Title of the video/blog is " << title << endl
         << "Rating of the video/blog is " << rating << " out of 5" << endl
         << "Video length is " << video_length_in_seconds << " minutes" << endl;
}

void CWH_b::print_details(void)
{
    cout << "ID of the video/blog is " << id << endl
         << "Title of the video/blog is " << title << endl
         << "Rating of the video/blog is " << rating << " out of 5" << endl
         << "There are " << number_of_words << " words in the blog" << endl;
}

```

---

---

## **_116.) tutorial_57_2 of C++_**

### [**_Click me_**](tutorial_57_2.cpp "Clike here to see full file") to see full file of tutorial_57_2

```C++
//* Date 09-10-2021

//* In this tutorial you will learn more about Virtual Functions

#include "tutorial_57_1_functions.cpp"

int main()
{
    CWH content("No Name For This Content", 3.245);
    content.print_details();

    return 0;
}
```

---

---

## **_117.) tutorial_57_3 of C++_**

### [**_Click me_**](tutorial_57_3.cpp "Clike here to see full file") to see full file of tutorial_57_3

```C++
//* Date 09-10-2021

//* In this tutorial you will learn more about Virtual Functions

#include "tutorial_57_1_functions.cpp"

int main()
{
    CWH_v vid_1("PHP Database Management", 4.98, 15.1254);
    vid_1.print_details();

    return 0;
}
```

---

---

## **_118.) tutorial_57_4 of C++_**

### [**_Click me_**](tutorial_57_4.cpp "Clike here to see full file") to see full file of tutorial_57_4

```C++
//* Date 09-10-2021

//* In this tutorial you will learn more about Virtual Functions

#include "tutorial_57_1_functions.cpp"

int main()
{
    CWH_b blog_1("SQL Password Encryption", 3.241, 3540);
    blog_1.print_details();

    return 0;
}
```

---

---

## **_119.) tutorial_57_5 of C++_**

### [**_Click me_**](tutorial_57_5.cpp "Clike here to see full file") to see full file of tutorial_57_5

```C++
//* Date 09-10-2021

//* In this tutorial you will learn more about Virtual Functions

#include "tutorial_57_1_functions.cpp"

int main()
{
    CWH_v vid_1("PHP Database Management", 4.98, 15.1254);
    vid_1.print_details();
    cout << endl;
    CWH_b blog_1("SQL Password Encryption", 3.241, 3540);
    blog_1.print_details();
    return 0;
}
```

---

---

## **_120.) tutorial_57_6 of C++_**

### [**_Click me_**](tutorial_57_6.cpp "Clike here to see full file") to see full file of tutorial_57_6

```C++
//* Date 09-10-2021

//* In this tutorial you will learn more about Virtual Functions

#include "tutorial_57_1_functions.cpp"

int main()
{
    cout << endl;
    CWH content("No Name For This Content", 3.245);
    content.print_details();
    cout << endl;
    CWH_v vid_1("PHP Database Management", 4.98, 15.1254);
    vid_1.print_details();
    cout << endl;
    CWH_b blog_1("SQL Password Encryption", 3.241, 3540);
    blog_1.print_details();
    return 0;
}
```

---

---

## **_121.) tutorial_57_7 of C++_**

### [**_Click me_**](tutorial_57_7.cpp "Clike here to see full file") to see full file of tutorial_57_7

```C++
//* Date 09-10-2021

//* In this tutorial you will learn more about Virtual Functions

#include "tutorial_57_1_functions.cpp"

int main()
{
    float vid_length = 21.56, rating = 4.5;
    int words, i = 1;
    string title = "Django Video Tutorial Number - " + to_string(i);
    CWH_v Django_vid(title, rating, vid_length);
    Django_vid.print_details();

    cout << endl;

    rating = 3.98, words = 5456, i = 1, title = "Django Text Tutorial Number - " + to_string(i);
    CWH_b Django_blog(title, rating, words);
    Django_blog.print_details();

    return 0;
}
```

---

---

## **_122.) tutorial_57_8 of C++_**

### [**_Click me_**](tutorial_57_8.cpp "Clike here to see full file") to see full file of tutorial_57_8

```C++
//* Date 09-10-2021

//* In this tutorial you will learn more about Virtual Functions

#include "tutorial_57_1_functions.cpp"

int main()
{
    float vid_length = 21.56, rating = 4.5;
    int words, i = 1;
    string title = "Django Video Tutorial Number " + to_string(i);
    CWH_v Django_vid(title, rating, vid_length);
    //! Django_vid.print_details();

    cout << endl;

    rating = 3.98, words = 5456, i = 1, title = "Django Text Tutorial Number " + to_string(i);
    CWH_b Django_blog(title, rating, words);
    //! Django_blog.print_details();

    CWH *pointer_pointing_to_class_CWH[2];
    pointer_pointing_to_class_CWH[0] = &Django_vid;
    pointer_pointing_to_class_CWH[1] = &Django_blog;

    pointer_pointing_to_class_CWH[0]->print_details();
    cout << endl;
    pointer_pointing_to_class_CWH[1]->print_details();
    return 0;
}
```

---

---

## **_123.) tutorial_57_9 of C++_**

### [**_Click me_**](tutorial_57_9.cpp "Clike here to see full file") to see full file of tutorial_57_9

```C++
//* Date 09-10-2021

//* In this tutorial you will learn more about Virtual Functions

/*
Rules for virtual functions--
    1.  They cannot be static
    2.  They are accessed by object pointers
    3.  Virtual functions can be a friend of another class
    4.  A virtual function in the base class might not be used.
    5.  If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
*/

#include <iostream>
#include <string>

using namespace std;

typedef class Code_With_Harry
{
protected:
    string title;
    float rating;
    int id;

public:
    Code_With_Harry(string, float);
    virtual void print_details(void);
} CWH;

typedef class Code_With_Harry_video : public CWH
{
protected:
    float video_length_in_seconds;

public:
    Code_With_Harry_video(string title, float rating, float video_length_in_seconds) : CWH(title, rating), video_length_in_seconds(video_length_in_seconds) {}

} CWH_v;

typedef class Code_With_Harry_blog : public CWH
{
protected:
    int number_of_words;

public:
    Code_With_Harry_blog(string title, float rating, int number_of_words) : CWH(title, rating), number_of_words(number_of_words) {}

} CWH_b;

Code_With_Harry::Code_With_Harry(string title = "Not Specified", float rating = 0)
{
    static int id = 1;
    this->id = id++;
    this->title = title;
    this->rating = rating;
}
void CWH::print_details(void)
{
    cout << "ID of the video/blog is " << id << endl
         << "Title of the video/blog is " << title << endl
         << "Rating of the video/blog is " << rating << " out of 5" << endl;
}

int main()
{
    float vid_length = 21.56, rating = 4.5;
    int words, i = 1;
    string title = "Django Video Tutorial Number " + to_string(i);
    CWH_v Django_vid(title, rating, vid_length);
    //! Django_vid.print_details();

    cout << endl;

    rating = 3.98, words = 5456, i = 1, title = "Django Text Tutorial Number " + to_string(i);
    CWH_b Django_blog(title, rating, words);
    //! Django_blog.print_details();

    CWH *pointer_pointing_to_class_CWH[2];
    pointer_pointing_to_class_CWH[0] = &Django_vid;
    pointer_pointing_to_class_CWH[1] = &Django_blog;

    pointer_pointing_to_class_CWH[0]->print_details(); //* There are no print_details() function in Derived classes so the print_details() function of the base class will invoked
    cout << endl;
    pointer_pointing_to_class_CWH[1]->print_details(); //* There are no print_details() function in Derived classes so the print_details() function of the base class will invoked
    return 0;
}
```

---

---

## **_124.) tutorial_58 of C++_**

### [**_Click me_**](tutorial_58.cpp "Clike here to see full file") to see full file of tutorial_58

```C++
//* Date 09-10-2021

//* In this tutorial you will learn about Abstract Base Class and Pure Virtual Functions. Pure Virtual Function commonly used in Abstract Base Class. Abstract Base Class is the base class for further declared subclasses and creating objects from abstract classes is very difficult so Abstract Base Class is designed in such a way that it can be inherited by any subclasses.

#include <iostream>
#include <string>

using namespace std;

typedef class Code_With_Harry
{
protected:
    string title;
    float rating;
    int id;

public:
    Code_With_Harry(string, float);
    virtual void print_details(void) = 0; //* do nothing function --> pure virtual function
} CWH;

typedef class Code_With_Harry_video : public CWH
{
protected:
    float video_length_in_seconds;

public:
    Code_With_Harry_video(string title, float rating, float video_length_in_seconds) : CWH(title, rating), video_length_in_seconds(video_length_in_seconds) {}
    void print_details(void);

} CWH_v;

typedef class Code_With_Harry_blog : public CWH
{
protected:
    int number_of_words;

public:
    Code_With_Harry_blog(string title, float rating, int number_of_words) : CWH(title, rating), number_of_words(number_of_words) {}
    void print_details(void);

} CWH_b;

Code_With_Harry::Code_With_Harry(string title = "Not Specified", float rating = 0)
{
    static int id = 1;
    this->id = id++;
    this->title = title;
    this->rating = rating;
}

//! void CWH::print_details(void)
//! {
//!     cout << "ID of the video/blog is " << id << endl
//!          << "Title of the video/blog is " << title << endl
//!          << "Rating of the video/blog is " << rating << " out of 5" << endl;
//! }

void CWH_v::print_details(void)
{
    cout << "ID of the video/blog is " << id << endl
         << "Title of the video/blog is " << title << endl
         << "Rating of the video/blog is " << rating << " out of 5" << endl
         << "Video length is " << video_length_in_seconds << " minutes" << endl;
}

void CWH_b::print_details(void)
{
    cout << "ID of the video/blog is " << id << endl
         << "Title of the video/blog is " << title << endl
         << "Rating of the video/blog is " << rating << " out of 5" << endl
         << "There are " << number_of_words << " words in the blog" << endl;
}

int main()
{

    //! CWH content("No name", 4.12); //* You cannot declare variable 'content' to be of abstract base class type. So, this line will give an error message

    CWH_v Django_vid("Django Video Tutorial Number 1", 4.5, 21.56);
    Django_vid.print_details();

    cout << endl;

    CWH_b Django_blog("Django Text Tutorial Number 1", 3.98, 5456);
    Django_blog.print_details();

    return 0;
}
```

---

---

## **_125.) tutorial_60_1 of C++_**

### [**_Click me_**](tutorial_60_1.cpp "Clike here to see full file") to see full file of tutorial_60_1

```C++
//* Date 09-10-2021

//* In this tutorial you will learn how to read and write in a file

/*
These are some useful classes for working with files in C++

    fstreambase --> short form/header use to include is fstream
    ifstream --> derived from fstreambase
    ofstream --> derived from fstreambase
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ofstream to_open_file_1("tutorial_60_2.txt");
    for (int i = 0; i < 100; i++)
    {
        to_open_file_1 << "This is added to file using C++ program " << i << endl;
    }

    return 0;
}
```

---

---

## **_126.) tutorial_60_3 of C++_**

### [**_Click me_**](tutorial_60_3.cpp "Clike here to see full file") to see full file of tutorial_60_3

```C++
//* Date 09-10-2021

//* In this tutorial you will learn how to read and write in a file

/*
These are some useful classes for working with files in C++

    fstreambase --> short form/header use to include is fstream
    ifstream --> derived from fstreambase
    ofstream --> derived from fstreambase
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string line;
    ifstream myfile("tutorial_60_4.txt");

    getline(myfile, line);

    cout << line << endl;

    myfile.close();

    return 0;
}
```

---

---

## **_127.) tutorial_60_5 of C++_**

### [**_Click me_**](tutorial_60_5.cpp "Clike here to see full file") to see full file of tutorial_60_5

```C++
//* Date 09-10-2021

//* In this tutorial you will learn how to read and write in a file

/*
These are some useful classes for working with files in C++

    fstreambase --> short form/header use to include is fstream
    ifstream --> derived from fstreambase
    ofstream --> derived from fstreambase
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string line;
    ifstream myfile("tutorial_60_6.txt");

    while (getline(myfile, line))
    {
        cout << line << endl;
    }
    myfile.close();

    return 0;
}
```

---

---

## **_128.) tutorial_61_1 of C++_**

### [**_Click me_**](tutorial_61_1.cpp "Clike here to see full file") to see full file of tutorial_61_1

```C++
//* Date 09-10-2021

//* In this tutorial you will learn how to read and write in a file

/*
These are some useful classes for working with files in C++

    fstreambase --> short form/header use to include is fstream
    ifstream --> derived from fstreambase
    ofstream --> derived from fstreambase
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string line = "My name is: ", name = "None";
    ofstream file_1("tutorial_61_2.txt");

    for (int i = 0; i < 2; i++)
    {
        cout << "Enter your name: " << endl;
        cin >> name;
        file_1 << line << name << " Person number: " << i + 1 << endl;
    }

    return 0;
}
```

---

---

## **_129.) tutorial_61_3 of C++_**

### [**_Click me_**](tutorial_61_3.cpp "Clike here to see full file") to see full file of tutorial_61_3

```C++
//* Date 09-10-2021

//* In this tutorial you will learn how to read and write in a file

/*
These are some useful classes for working with files in C++

    fstreambase --> short form/header use to include is fstream
    ifstream --> derived from fstreambase
    ofstream --> derived from fstreambase
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string line = "My name is: ", name = "None";
    ofstream file_1("tutorial_61_4.txt");

    for (int i = 1; i <= 4; i++)
    {
        cout << "Enter your name: " << endl;
        getline(cin, name);
        file_1 << line << name << " Person number: " << i << endl;
    }

    return 0;
}
```

---

---

## **_130.) tutorial_61_5 of C++_**

### [**_Click me_**](tutorial_61_5.cpp "Clike here to see full file") to see full file of tutorial_61_5

```C++
//* Date 09-10-2021

//* In this tutorial you will learn how to read and write in a file

/*
These are some useful classes for working with files in C++

    fstreambase --> short form/header use to include is fstream
    ifstream --> derived from fstreambase
    ofstream --> derived from fstreambase
*/

#include <iostream>
#include <fstream>
// #include <ifstream>
// #include <ofstream>
#include <string>

using namespace std;

int main()
{
    string line = "My name is: ", name = "None";
    ofstream file_1_write("tutorial_61_6.txt");

    for (int i = 1; i <= 4; i++)
    {
        cout << "Enter your name: " << endl;
        getline(cin, name);
        file_1_write << line << name << " Person number: " << i << endl;
    }
    file_1_write.close();

      return 0;
}
```

---

---

## **_131.) tutorial_62_1 of C++_**

### [**_Click me_**](tutorial_62_1.cpp "Clike here to see full file") to see full file of tutorial_62_1

```C++
//* Date 09-10-2021

//* In this tutorial you will learn more about files

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream out;
    out.open("tutorial_62_2.txt");
    for (int i = 1; i <= 1000; i++)
    {
        out << "This is written by C++. Line number is " << i << endl;
    }

    out.close();

    return 0;
}
```

---

---

## **_132.) tutorial_64_1 of C++_**

### [**_Click me_**](tutorial_64_1.cpp "Clike here to see full file") to see full file of tutorial_64_1

```C++
//* Date 10-10-2021

//* In this tutorial you will learn about Templates and there implementation in real world

#include <iostream>

using namespace std;

class vector
{

public:
    int size, *arr;
    vector(int, bool);
    int sum_vector();
    //todo void append_element(int);
};

vector::vector(int size = 1, bool choice = false) : size(size), arr(new int[size])
{
    if (choice)
    {
        cout << "Constructor is called! and size of array is " << size << endl;
    }
}

int vector::sum_vector()
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += this->arr[i];
    }

    return sum;
}

//todo void vector::append_element(int element)
//todo {
//todo     int *tp_array;
//todo     for (int i = 0; i < size; i++)
//todo     {
//todo         tp_array[i] = this->arr[i];
//todo     }

//todo     this->arr = new int[++size];
//todo     for (int i = 0; i < (size - 1); i++)
//todo     {
//todo         tp_array[i] = this->arr[i];
//todo     }
//todo     this->arr[size - 1] = element;
//todo }

int main()
{

    vector vec_1(3);
    vec_1.arr[0] = 5;
    vec_1.arr[1] = 2;
    vec_1.arr[2] = 3;
    //todo vec_1.append_element(5);
    cout << vec_1.sum_vector() << endl;

    return 0;
}
```

---

---

## **_133.) tutorial_64_2 of C++_**

### [**_Click me_**](tutorial_64_2.cpp "Clike here to see full file") to see full file of tutorial_64_2

```C++
//* Date 10-10-2021

//* In this tutorial you will learn about Templates and there implementation in real world

#include <iostream>

using namespace std;

template <class user_defined_variable>
class vector
{
    int size;

public:
    user_defined_variable *arr;
    // vector(int, bool);
    vector(int si = 1, bool choice = false)
    {
        arr = new user_defined_variable[size];
        size = si;
        if (choice)
        {
            cout << "Constructor is called! and size of array is " << size << endl;
        }
    }
    user_defined_variable sum_vector()
    {
        user_defined_variable sum = 0;

        for (int i = 0; i < size; i++)
        {
            sum += this->arr[i];
        }

        return sum;
    }
};
int main()
{

    vector<float> vec_1(3);
    vec_1.arr[0] = 5.6;
    vec_1.arr[1] = 2.12;
    vec_1.arr[2] = 3.004;
    cout << vec_1.sum_vector() << endl;

    return 0;
}
```

---

---

## **_134.) tutorial_65 of C++_**

### [**_Click me_**](tutorial_65.cpp "Clike here to see full file") to see full file of tutorial_65

```C++
//* Date 10-10-2021

//* In this tutorial you will learn about Templates with multiple parameters

#include <iostream>
#include <string>

using namespace std;

template <class user_defined_variable_1, class user_defined_variable_2>
class my_class
{
private:
    user_defined_variable_1 var_1;
    user_defined_variable_2 var_2;

public:
    my_class(user_defined_variable_1 val_1, user_defined_variable_2 val_2) : var_1(val_1), var_2(val_2) {}

    void print_data(void)
    {
        cout << "user_defined_variable_1 = " << var_1 << endl
             << "user_defined_variable_2 = " << var_2 << endl;
    }
};

int main()
{

    my_class<string, float> obj_1("Aman", 123.1);
    obj_1.print_data();

    return 0;
}
```

---

---

## **_135.) tutorial_66 of C++_**

### [**_Click me_**](tutorial_66.cpp "Clike here to see full file") to see full file of tutorial_66

```C++
//* Date 10-10-2021

//* In this tutorial you will learn about Templates with default parameters

#include <iostream>
#include <string>

using namespace std;

template <class user_defined_variable_1 = int, class user_defined_variable_2 = float>
class my_class
{
private:
    user_defined_variable_1 var_1;
    user_defined_variable_2 var_2;

public:
    my_class(user_defined_variable_1 val_1, user_defined_variable_2 val_2) : var_1(val_1), var_2(val_2) {}

    void print_data(void)
    {
        cout << "user_defined_variable_1 = " << var_1 << endl
             << "user_defined_variable_2 = " << var_2 << endl;
    }
};

int main()
{

    my_class<> obj_1(5454, 324.88);
    obj_1.print_data();

    return 0;
}
```

---

---

## **_136.) tutorial_67 of C++_**

### [**_Click me_**](tutorial_67.cpp "Clike here to see full file") to see full file of tutorial_67

```C++
//* Date 10-10-2021

//* In this tutorial you will learn about Functions Templates and Functions Templates with Parameters

#include <iostream>

using namespace std;

template <class var_1_type, class var_2_type>
float average(var_1_type var_1, var_2_type var_2) { return (var_1 + var_2) / 2; }

template <class var_1_type>
void average(var_1_type &var_1, var_1_type &var_2)
{
    var_1_type temp = var_1;
    var_1 = var_2;
    var_2 = temp;
}

int main()
{
    //* cout << "Average of 43.76 and 8 is " << average(43.76, 8) << endl;

    float num_1 = 4.9, num_2 = 9863.12;
    swap(num_1, num_2);
    cout << "num_1 = " << num_1 << endl
         << "num_2 = " << num_2 << endl;

    return 0;
}
```

---

---

## **_137.) tutorial_68_1 of C++_**

### [**_Click me_**](tutorial_68_1.cpp "Clike here to see full file") to see full file of tutorial_68_1

```C++
//* Date 10-10-2021

//* In this tutorial you will learn about Forward Declaration in a Template Function

#include <iostream>
#include <string>

using namespace std;

template <class user_defined_variable_1, class user_defined_variable_2>
class my_class
{
private:
    user_defined_variable_1 var_1;
    user_defined_variable_2 var_2;

public:
    my_class(user_defined_variable_1 val_1, user_defined_variable_2 val_2) : var_1(val_1), var_2(val_2) {}

    void print_data(void);
};

template <class user_defined_variable_1, class user_defined_variable_2>
void my_class<user_defined_variable_1, user_defined_variable_2>::print_data(void)
{
    cout << "user_defined_variable_1 = " << var_1 << endl
         << "user_defined_variable_2 = " << var_2 << endl;
}
int main()
{

    my_class<string, float> obj_1("Aman", 123.1);
    obj_1.print_data();

    return 0;
}

```

---

---

## **_138.) tutorial_68_2 of C++_**

### [**_Click me_**](tutorial_68_2.cpp "Clike here to see full file") to see full file of tutorial_68_2

```C++
//* Date 10-10-2021

//* In this tutorial you will learn about OverLoading a Template Function

#include <iostream>
#include <string>

using namespace std;

void print_hello(void)
{
    cout << "Hello! Function with 0 Argument" << endl;
}

template <class user_defined_variable_1>
void print_hello(user_defined_variable_1 var1)
{
    cout << "Hello! Function with 1 Argument var1 = " << var1 << endl;
}

template <class user_defined_variable_1, class user_defined_variable_2>
void print_hello(user_defined_variable_1 var1, user_defined_variable_2 var2)
{
    cout << "Hello! Function with 2 Argument var1 = " << var1 << ", var2 = " << var2 << endl;
}
int main()
{

    print_hello();
    print_hello(1.2);
    print_hello("aman", 12);
    return 0;
}

```

---

---

## **_139.) tutorial_71_1 of C++_**

### [**_Click me_**](tutorial_71_1.cpp "Clike here to see full file") to see full file of tutorial_71_1

```C++
/*
Date 12-10-2021

In this tutorial, you will learn about implementation of vector in our program
*/

#include <iostream>
#include <vector>

using namespace std;

template <class user_defined>
void display_vector(vector<user_defined> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << "On index " << i << " value of vector is " << vec[i] << endl;
    }
}

int main()
{

    vector<int> vec_1;
    int element, size;

    cout << "Please enter the size of the vector you need" << endl;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to append to the vector" << endl;
        cin >> element;
        vec_1.push_back(element);
    }

    display_vector<int>(vec_1);

    return 0;
}
```

---

---

## **_140.) tutorial_71_2 of C++_**

### [**_Click me_**](tutorial_71_2.cpp "Clike here to see full file") to see full file of tutorial_71_2

```C++
/*
Date 12-10-2021

In this tutorial, you will learn about implementation of vector in our program
*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

template <class user_defined>
void display_vector(vector<user_defined> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << "On index " << i << " value of vector is " << vec[i] << endl;
    }
}

int main()
{

    vector<int> vec_1;
    int element = 10, size = 10;

    for (int i = 0; i < size; i++)
    {
        srand(((unsigned)time(0)) + i);
        element = (rand() % 100);
        vec_1.push_back(element);
    }

    display_vector<int>(vec_1);
    cout << endl;
    vector<int>::iterator iter = vec_1.begin();
    vec_1.insert((iter + 10), 5, 4587);
    display_vector<int>(vec_1);

    return 0;
}
```

---

---

## **_141.) tutorial_71_3 of C++_**

### [**_Click me_**](tutorial_71_3.cpp "Clike here to see full file") to see full file of tutorial_71_3

```C++
/*
Date 12-10-2021

In this tutorial, you will learn about implementation of vector in our program
*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

template <class user_defined>
void display_vector(vector<user_defined> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << "On index " << i << " value of vector is " << vec[i] << endl;
    }
}

int main()
{

    vector<int> vec_1;
    int element = 10, size = 100;

    for (int i = 0; i < size; i++)
    {
        srand(((unsigned)time(0)) + i);
        element = (rand() % 100);
        vec_1.push_back(element);
    }

    display_vector<int>(vec_1);
    // cout << endl;
    // vector<int>::iterator iter = vec_1.begin();
    // vec_1.insert((iter + 10), 5, 4587);
    // display_vector<int>(vec_1);
    int at_which_index = 45;
    cout << "Element on " << at_which_index << " is "
         << vec_1.at(at_which_index) << endl;

    return 0;
}
```

---

---

## **_142.) tutorial_72_1 of C++_**

### [**_Click me_**](tutorial_72_1.cpp "Clike here to see full file") to see full file of tutorial_72_1

```C++
/*
Date 13-10-2021

In this tutorial, you will learn about Lists in C++
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> li_1;
    // list<int> li_1(10);
    list<int>::iterator iterator_of_li_1;
    li_1.push_back(5);
    li_1.push_back(54);
    li_1.push_back(544);
    li_1.push_back(4544);
    li_1.push_back(123);
    li_1.push_back(972);
    iterator_of_li_1 = li_1.begin();

    cout << *(iterator_of_li_1++) << endl;
    cout << *(iterator_of_li_1++) << endl;
    cout << *(iterator_of_li_1++) << endl;
    cout << *(iterator_of_li_1++) << endl;
    cout << *(iterator_of_li_1++) << endl;
    cout << *(iterator_of_li_1++) << endl;
    cout << *(iterator_of_li_1++) << endl;
    cout << *(iterator_of_li_1++) << endl;
    cout << *(iterator_of_li_1++) << endl;
    cout << *(iterator_of_li_1++) << endl;
    cout << *(iterator_of_li_1++) << endl;
    cout << *(iterator_of_li_1++) << endl;
    cout << *(iterator_of_li_1++) << endl;
    cout << *(iterator_of_li_1++) << endl;
    cout << *(iterator_of_li_1++) << endl;

    return 0;
}
```

---

---

## **_143.) tutorial_72_2 of C++_**

### [**_Click me_**](tutorial_72_2.cpp "Clike here to see full file") to see full file of tutorial_72_2

```C++
/*
Date 13-10-2021

In this tutorial, you will learn about Lists in C++
*/

#include <iostream>
#include <list>

using namespace std;

template <class user_defined>
void display_list(list<user_defined> &li)
{
    list<int>::iterator iter;
    for (iter = li.begin(); iter != li.end(); iter++)
    {
        cout << *iter << endl;
    }
}

int main()
{
    list<int> li_1;

    li_1.push_back(5);
    li_1.push_back(54);
    li_1.push_back(544);
    li_1.push_back(4544);
    li_1.push_back(123);
    li_1.push_back(972);

    display_list<int>(li_1);

    return 0;
}
```

---

---

## **_144.) tutorial_72_3 of C++_**

### [**_Click me_**](tutorial_72_3.cpp "Clike here to see full file") to see full file of tutorial_72_3

```C++
/*
Date 13-10-2021

In this tutorial, you will learn about Lists in C++
*/

#include <iostream>
#include <list>

using namespace std;

template <class user_defined>
void display_list(list<user_defined> &li)
{
    list<int>::iterator iter;
    for (iter = li.begin(); iter != li.end(); iter++)
    {
        cout << *iter << endl;
    }
}

int main()
{
    list<int> li_1(5);

    // li_1
    list<int>::iterator iterator_of_li_1;
    iterator_of_li_1 = li_1.begin();

    *(iterator_of_li_1++) = 82;
    *(iterator_of_li_1++) = 10387;
    *(iterator_of_li_1++) = 79;
    *(iterator_of_li_1++) = 98;
    *(iterator_of_li_1++) = 1234;

    display_list<int>(li_1);

    return 0;
}
```

---

---

## **_145.) tutorial_72_4 of C++_**

### [**_Click me_**](tutorial_72_4.cpp "Clike here to see full file") to see full file of tutorial_72_4

```C++
/*
Date 13-10-2021

In this tutorial, you will learn about Lists in C++
*/

#include <iostream>
#include <list>

using namespace std;

template <class user_defined>
void display_list(list<user_defined> &li)
{
    list<int>::iterator iter;
    for (iter = li.begin(); iter != li.end(); iter++)
    {
        cout << *iter << endl;
    }
}

int main()
{
    list<int> li_1(5);

    // li_1
    list<int>::iterator iterator_of_li_1;
    iterator_of_li_1 = li_1.begin();

    *(iterator_of_li_1++) = 82;
    *(iterator_of_li_1++) = 10387;
    *(iterator_of_li_1++) = 79;
    *(iterator_of_li_1++) = 98;
    *(iterator_of_li_1++) = 1234;

    li_1.pop_back();
    li_1.pop_front();

    display_list<int>(li_1);

    return 0;
}
```

---

---

## **_146.) tutorial_72_5 of C++_**

### [**_Click me_**](tutorial_72_5.cpp "Clike here to see full file") to see full file of tutorial_72_5

```C++
/*
Date 13-10-2021

In this tutorial, you will learn about Lists in C++
*/

#include <iostream>
#include <list>

using namespace std;

template <class user_defined>
void display_list(list<user_defined> &li)
{
    list<int>::iterator iter;
    for (iter = li.begin(); iter != li.end(); iter++)
    {
        cout << *iter << endl;
    }
}

int main()
{
    list<int> li_1(5);

    // li_1
    list<int>::iterator iterator_of_li_1;
    iterator_of_li_1 = li_1.begin();

    *(iterator_of_li_1++) = 82;
    *(iterator_of_li_1++) = 10387;
    *(iterator_of_li_1++) = 79;
    *(iterator_of_li_1++) = 98;
    *(iterator_of_li_1++) = 1234;

    li_1.push_front(9715);
    li_1.push_back(567);

    display_list<int>(li_1);

    return 0;
}
```

---

---

## **_147.) tutorial_72_6 of C++_**

### [**_Click me_**](tutorial_72_6.cpp "Clike here to see full file") to see full file of tutorial_72_6

```C++
/*
Date 13-10-2021

In this tutorial, you will learn about Lists in C++
*/

#include <iostream>
#include <list>

using namespace std;

template <class user_defined>
void display_list(list<user_defined> &li)
{
    list<int>::iterator iter;
    for (iter = li.begin(); iter != li.end(); iter++)
    {
        cout << *iter << "  ";
    }
    cout << endl;
}

int main()
{
    list<int> li_1(8);

    // li_1
    list<int>::iterator iterator_of_li_1;
    iterator_of_li_1 = li_1.begin();

    *(iterator_of_li_1++) = 98;
    *(iterator_of_li_1++) = 82;
    *(iterator_of_li_1++) = 17;
    *(iterator_of_li_1++) = 98;
    *(iterator_of_li_1++) = 79;
    *(iterator_of_li_1++) = 98;
    *(iterator_of_li_1++) = 13;
    *(iterator_of_li_1++) = 93;

    display_list<int>(li_1);
    li_1.remove(98);
    display_list<int>(li_1);

    return 0;
}
```

---

---

## **_148.) tutorial_72_7 of C++_**

### [**_Click me_**](tutorial_72_7.cpp "Clike here to see full file") to see full file of tutorial_72_7

```C++
/*
Date 13-10-2021

In this tutorial, you will learn about Lists in C++
*/

#include <iostream>
#include <list>
#include <cstdlib>
#include <ctime>

using namespace std;

template <class user_defined>
void display_list(list<user_defined> &li)
{
    list<int>::iterator iter;
    for (iter = li.begin(); iter != li.end(); iter++)
    {
        cout << *iter << ",";
    }
    cout << endl;
}

bool even_or_not(int val)
{
    if (val == 0)
    {
        return true;
    }
    if ((val % 2) == 0)
    {
        return false;
    }
    return true;
}

int main()
{
    int size = 20;
    list<int> li_1(size);

    list<int>::iterator iterator_of_li_1;
    iterator_of_li_1 = li_1.begin();

    int element;

    for (int i = 0; i < size; i++)
    {
        srand(((unsigned)time(0)) + i);
        element = (rand() % 100);
        *(iterator_of_li_1++) = element;
    }

    display_list<int>(li_1);
    li_1.remove_if(even_or_not);
    display_list<int>(li_1);

    return 0;
}
```

---

---

## **_149.) tutorial_72_8 of C++_**

### [**_Click me_**](tutorial_72_8.cpp "Clike here to see full file") to see full file of tutorial_72_8

```C++
/*
Date 13-10-2021

In this tutorial, you will learn about Lists in C++
*/

#include <iostream>
#include <list>
#include <cstdlib>
#include <ctime>

using namespace std;

template <class user_defined>
void display_list(list<user_defined> &li)
{
    list<int>::iterator iter;
    for (iter = li.begin(); iter != li.end(); iter++)
    {
        cout << *iter << ",";
    }
    cout << endl;
}

int main()
{
    int size = 20;
    list<int> li_1(size);

    list<int>::iterator iterator_of_li_1;
    iterator_of_li_1 = li_1.begin();

    int element;

    for (int i = 0; i < size; i++)
    {
        srand(((unsigned)time(0)) + i);
        element = (rand() % 100);
        *(iterator_of_li_1++) = element;
    }

    display_list<int>(li_1);
    li_1.sort();
    display_list<int>(li_1);

    return 0;
}
```

---

---

## **_150.) tutorial_72_9 of C++_**

### [**_Click me_**](tutorial_72_9.cpp "Clike here to see full file") to see full file of tutorial_72_9

```C++
/*
Date 13-10-2021

In this tutorial, you will learn about Lists in C++
*/

#include <iostream>
#include <list>
#include <cstdlib>
#include <ctime>

using namespace std;

template <class user_defined>
void display_list(list<user_defined> &li)
{
    list<int>::iterator iter;
    for (iter = li.begin(); iter != li.end(); iter++)
    {
        cout << *iter << ",";
    }
    cout << endl;
}

int main()
{
    int size = 10;
    list<int> li_1(size);
    list<int> li_2(size);

    list<int>::iterator iterator_of_li_1;
    iterator_of_li_1 = li_1.begin();
    list<int>::iterator iterator_of_li_2;
    iterator_of_li_2 = li_2.begin();

    int element;

    for (int i = 0; i < size; i++)
    {
        srand(((unsigned)time(0)) + i);
        element = (rand() % 100);
        *(iterator_of_li_1++) = element;

        srand(((unsigned)time(0)) + (i * i));
        element = (rand() % 100);
        *(iterator_of_li_2++) = element;
    }

    display_list<int>(li_1);
    display_list<int>(li_2);
    li_1.merge(li_2);
    li_1.sort();
    display_list<int>(li_1);

    return 0;
}
```

---

---

## **_151.) tutorial_73_1 of C++_**

### [**_Click me_**](tutorial_73_1.cpp "Clike here to see full file") to see full file of tutorial_73_1

```C++
/*
Date 14-10-2021

In this tutorial, you will learn about map in C++ STL
*/

#include <iostream>
#include <map>
#include <string>

using namespace std;

void display(map<string, int> &marks)
{
    map<string, int>::iterator iter;
    for (iter = marks.begin(); iter != marks.end(); iter++)
    {
        cout << (*iter).first << " got " << (*iter).second << " marks" << endl;
    }
}

int main()
{

    map<string, int> marks;
    marks["Rohit"] = 64;
    marks["Rohan"] = 24;
    marks["Aman"] = 67;
    marks["Suresh"] = 42;
    marks["Bablu"] = 98;

    display(marks);

    return 0;
}
```

---

---

## **_152.) tutorial_73_2 of C++_**

### [**_Click me_**](tutorial_73_2.cpp "Clike here to see full file") to see full file of tutorial_73_2

```C++
/*
Date 14-10-2021

In this tutorial, you will learn about map in C++ STL
*/

#include <iostream>
#include <map>
#include <string>

using namespace std;

void display(map<string, int> &marks)
{
    map<string, int>::iterator iter;
    for (iter = marks.begin(); iter != marks.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }
}

int main()
{

    map<string, int> marks;
    marks["Rohit"] = 64;
    marks["Rohan"] = 24;
    marks["Aman"] = 67;
    marks["Suresh"] = 42;
    marks["Bablu"] = 12;

    marks.insert({{"Naman", 48}, {"Harry", 91}});

    display(marks);

    return 0;
}
```

---

---

## **_153.) tutorial_74_1 of C++_**

### [**_Click me_**](tutorial_74_1.cpp "Clike here to see full file") to see full file of tutorial_74_1

```C++
/*
Date 14-10-2021

In this tutorial, you will learn about function objects
Note: We also call function object as Functor
*/

#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{

    int arr[] = {45, 78, 36, 94, 12, 98, 89, 54, 32, 87, 15, 54, 4, 85, 63, 41, 74, 85, 93, 1};

    for (int i = 0; i < 20; i++)
    {
        cout << *(arr + i) << " ";
    }
    sort(arr, arr + 19);
    cout << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << *(arr + i) << " ";
        // cout << "Element on index number " << i << " is " << (arr + i) << " \n";
    }

    return 0;
}
```

---

---

## **_154.) tutorial_74_2 of C++_**

### [**_Click me_**](tutorial_74_2.cpp "Clike here to see full file") to see full file of tutorial_74_2

```C++
/*
Date 14-10-2021

In this tutorial, you will learn about function objects
Note: We also call function object as Functor
*/

#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{

    int arr[] = {45, 78, 36, 94, 12, 98, 89, 54, 32, 87, 15, 54, 4, 85, 63, 41, 74, 85, 93, 75};

    for (int i = 0; i < 20; i++)
    {
        cout << *(arr + i) << " ";
    }

    sort(arr, arr + 20, greater<int>());

    cout << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << *(arr + i) << " ";
        // cout << "Element on index number " << i << " is " << (arr + i) << " \n";
    }

    return 0;
}
```

---

---
