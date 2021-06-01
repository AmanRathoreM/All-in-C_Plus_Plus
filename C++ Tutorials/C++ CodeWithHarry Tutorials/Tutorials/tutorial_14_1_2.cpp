// Date 29-05-2021

#include <iostream>
#include <iomanip>

using namespace std;

typedef struct employee
{
    int employee_id;
    char employee_favorite_character;
    float employee_salary;
} em;

int main()
{
    em suresh;
    suresh.employee_id = 78179;
    suresh.employee_favorite_character = 'A';
    suresh.employee_salary = 7845.14;

    em rohan;
    rohan.employee_id = 17844;
    rohan.employee_favorite_character = 'R';
    rohan.employee_salary = 14551.65;

    cout << "Suresh's Id is " << suresh.employee_id << endl;
    cout << "Suresh's Favorite Character is " << suresh.employee_favorite_character << endl;
    cout << "Suresh's Salary is " << suresh.employee_salary << endl;

    cout << "Rohan's Id is " << rohan.employee_id << endl;
    cout << "Rohan's Favorite Character is " << rohan.employee_favorite_character << endl;
    cout << "Rohan's Salary is " << rohan.employee_salary << endl;

    return 0;
}