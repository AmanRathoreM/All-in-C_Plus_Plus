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