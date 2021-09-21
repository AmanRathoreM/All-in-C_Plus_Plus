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
