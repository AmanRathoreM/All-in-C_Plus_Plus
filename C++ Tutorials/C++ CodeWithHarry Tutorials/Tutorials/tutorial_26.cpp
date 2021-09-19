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