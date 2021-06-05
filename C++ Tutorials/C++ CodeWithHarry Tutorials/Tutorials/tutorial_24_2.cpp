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
        cout << "Enter Employee id for Employee number " << count + 1 << endl;
        cin >> employee_id;
        count++;
    }
    void show_employee_info(void)
    {

        cout << "Employee id for Employee number " << count << " is " << employee_id << endl;
    }
    static void show_count(void)
    {
        //* The Below line will throw an Error
        //! cout << id;
        //* The Above line will throw an Error
        cout << "For Employee number " << count + 1 << endl;
    }
};
//* The Below line is very import
int employee::count; //* Default value of static variable is 0
//* The Above line is very import

int main()
{
    // cout << "Hello Aman!" << endl;
    employee aman, rohit;
    // aman.show_employee_info();
    aman.show_count();
    aman.data_taker();
    rohit.show_count();
    rohit.data_taker();

    aman.show_employee_info();
    rohit.show_employee_info();
    return 0;
}