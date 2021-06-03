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