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