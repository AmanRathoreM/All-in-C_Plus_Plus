// Date 05-06-2021

#include <iostream>

using namespace std;

class emoloyee
{
    int salary;
    int id;

public:
    void set_id(void)
    {
        salary = 1000;
        cout << "What is the id of the employee!" << endl;
        cin >> id;
    }
    void get_id(void)
    {
        cout << "Id is! " << id << endl
             << "Salary is! " << salary << endl;
    }
};

int main()
{

    emoloyee company[4];

    for (int i = 0; i < 5; i++)
    {
        company[i].set_id();
        company[i].get_id();
    }

    return 0;
}