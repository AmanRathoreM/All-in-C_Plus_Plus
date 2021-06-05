// Date 03-06-2021

#include <iostream>

using namespace std;

class employee
{
    int employee_id;
    static int count;

public:
    void data_taker(void)
    {
        cout << "Enter Employee for Employee number " << count + 1 << endl;
        cin >> employee_id;
        count++;
    }
    void show_employee_info(void)
    {

        cout << "Employee id for Employee number " << count << " is " << employee_id << endl;
    }
};
int employee::count;

int main()
{
    // cout << "Hello Aman!" << endl;
    employee aman, rohit;
    // aman.show_employee_info();
    aman.data_taker();
    rohit.data_taker();
    aman.show_employee_info();
    rohit.show_employee_info();
    return 0;
}