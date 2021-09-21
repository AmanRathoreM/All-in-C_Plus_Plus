//* Date 20-09-2021

//* In this tutorial you will learn about Dynamic creation of Construstors

#include <iostream>
using namespace std;
class Bank_Deposit
{
    float principal_amount, invest_rate, return_value;
    int years;

public:
    void print_data(void) { cout << "You deposit " << principal_amount << " Rupees" << endl
                                 << "Your intreast rate is " << invest_rate << endl
                                 << "Your time is " << years << " year" << endl
                                 << "You will receive " << return_value << " Rupees" << endl; }

    // Bank_Deposit();
    Bank_Deposit(int, float, int);
    Bank_Deposit(int, int, int);
};
Bank_Deposit::Bank_Deposit(int p, float rate, int time)
{
    principal_amount = p;
    years = time;
    invest_rate = rate;
    return_value = p;

    for (int i = 0; i < time; i++)
    {
        return_value = return_value * (1 + rate);
    }
}

Bank_Deposit::Bank_Deposit(int p, int rate, int time) //* We will take rate as int because here rate is in %
{
    principal_amount = p;
    years = time;
    invest_rate = float(rate) / 100;
    return_value = p;

    for (int i = 0; i < time; i++)
    {
        return_value = return_value * (1 + invest_rate);
    }
}
int main()
{

    float at_a_rate_of;
    int entry_amount, year;

    cout << "Enter you amount" << endl;
    cin >> entry_amount;
    cout << "Enter Years" << endl;
    cin >> year;
    cout << "Enter Intrest Rate" << endl;
    cin >> at_a_rate_of;

    Bank_Deposit aman_1 = Bank_Deposit(entry_amount, at_a_rate_of, year); //* Here Bank_Deposit is a Date Type
    aman_1.print_data();

    int Entry_amount, At_a_rate_of, Year;
    cout << endl
         << endl
         << "Enter you amount (Rate is in %)" << endl;
    cin >> Entry_amount;
    cout << "Enter Years (Rate is in %)" << endl;
    cin >> Year;
    cout << "Enter Intrest Rate (Rate is in %)" << endl;
    cin >> At_a_rate_of;

    Bank_Deposit aman_2 = Bank_Deposit(Entry_amount, At_a_rate_of, Year); //* Here Bank_Deposit is a Date Type
    aman_2.print_data();
}