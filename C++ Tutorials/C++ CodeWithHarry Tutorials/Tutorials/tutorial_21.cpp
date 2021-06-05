// Date 31-05-2021

#include <iostream>

using namespace std;

class employee
{
private:
    int a, b, c;

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
    return 0;
}