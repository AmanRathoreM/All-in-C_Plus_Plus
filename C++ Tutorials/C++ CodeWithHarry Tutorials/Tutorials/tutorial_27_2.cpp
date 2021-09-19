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