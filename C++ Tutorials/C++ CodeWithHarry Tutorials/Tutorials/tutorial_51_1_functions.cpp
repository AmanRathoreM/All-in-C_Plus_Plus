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