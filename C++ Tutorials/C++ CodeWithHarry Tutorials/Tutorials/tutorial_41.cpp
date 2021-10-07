//* Date 07-10-2021

//* In this tutorial you learn deeply about Multiple Inheritance

//* Below given is the Syntax/Pesudocode for Multiple Inheritance:
//* class Derived_Class: visibility-mode base1, visibility-mode base2
//* {
//*      Class body of class "Derived_Class"
//* };

//* Person + Employee = Programmer

#include <iostream>
#include <string>

using namespace std;

class Person
{
protected:
    float weight_of_the_person, height_of_the_person;
    string name_of_the_person = "None";

public:
    void set_weight_height(float, float);
    void get_weight_height(void);
    void set_name(string);
};

class Employee
{
protected:
    int salary = 100, id;

public:
    void set_salary(int);
    int get_salary(void);
    void set_id(void);
};

class Programmer : public Person, public Employee
{
    int number_of_languages_knows = 1;
    string name_of_the_language_specialist_in;
    float year_of_experience = 1.1;

public:
    void set_number_of_languages_knows(int);
    void set_number_of_year_of_experience(float);
    void set_special_language(string);
    void get_full_info(void);
};

void Person::set_weight_height(float weight, float height)
{
    weight_of_the_person = weight;
    height_of_the_person = height;
}
void Person::get_weight_height(void)
{
    cout << name_of_the_person << "'s height is " << height_of_the_person << " cm, and weight is " << weight_of_the_person << " kg" << endl;
}
void Person::set_name(string name)
{
    name_of_the_person = name;
}

void Employee::set_salary(int income)
{
    salary = income;
}
int Employee::get_salary(void)
{
    return salary;
}
void Employee::set_id(void)
{
    static int id_of_the_employee = 1;
    id = id_of_the_employee++;
}

void Programmer::set_number_of_languages_knows(int num)
{
    number_of_languages_knows = num;
}
void Programmer::set_number_of_year_of_experience(float year_of_exp)
{
    year_of_experience = year_of_exp;
}
void Programmer::set_special_language(string lang)
{
    name_of_the_language_specialist_in = lang;
}
void Programmer::get_full_info(void)
{
    cout << "The below given information is of " << name_of_the_person << endl
         << "His Employee ID is " << id << endl
         << "His Height is " << height_of_the_person << " cm" << endl
         << "His Weight is " << weight_of_the_person << " kg" << endl
         << "His Salary is " << salary << " Rupees" << endl
         << "He Knows " << number_of_languages_knows << " languages" << endl
         << "His Specialty is in " << name_of_the_language_specialist_in << " programming language" << endl
         << "He has " << year_of_experience << " years of work experience as a Programmer" << endl;
}

int main()
{
    Programmer aman, Rohan;

    aman.set_name("Aman");
    aman.set_weight_height(58.4, 160.3);
    aman.set_salary(102454);
    aman.set_id();
    aman.set_number_of_languages_knows(12);
    aman.set_number_of_year_of_experience(6.9);
    aman.set_special_language("C++");

    aman.get_full_info();

    return 0;
}
