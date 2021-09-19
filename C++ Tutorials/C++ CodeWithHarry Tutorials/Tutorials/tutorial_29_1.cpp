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