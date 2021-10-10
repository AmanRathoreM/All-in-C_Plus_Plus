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