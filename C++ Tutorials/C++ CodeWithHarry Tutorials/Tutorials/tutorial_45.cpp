//* Date 07-10-2021

//* In this tutorial you will learn about Implementation Virtual Base Class in Real Life

#include <iostream>
#include <string>

using namespace std;

class Student
{
protected:
    int roll_no = 0;
    string student_name = "None";

public:
    void set_roll_no(int);
    void print_roll_no(void);
    void set_name(string);
};

class Test : virtual public Student
{
protected:
    float total_marks = 0;

public:
    void set_total_marks(float);
    void get_total_marks(void);
};

class Extra_caricular : virtual public Student
{
protected:
    float total_points_in_extra_caricular = 0;

public:
    void set_total_points_in_extra_caricular(float);
    void get_total_points_in_extra_caricular(void);
};

class Result : public Test, public Extra_caricular
{
private:
    float result = 0;

public:
    void calculate_result(void);
    void show_result(void);
};

void Student::set_roll_no(int num)
{
    roll_no = num;
}
void Student::print_roll_no(void)
{
    cout << student_name << "\'s Roll Number is " << roll_no << endl;
}
void Student::set_name(string name)
{
    student_name = name;
}

void Test::set_total_marks(float marks)
{
    total_marks = marks;
}
void Test::get_total_marks(void)
{
    cout << student_name << " got " << total_marks << " total marks in tests" << endl;
}

void Extra_caricular::set_total_points_in_extra_caricular(float points)
{
    total_points_in_extra_caricular = points;
}
void Extra_caricular::get_total_points_in_extra_caricular(void)
{
    cout << student_name << " got " << total_points_in_extra_caricular << " total points in Extra Caricular" << endl;
}

void Result::calculate_result(void)
{
    result = ((total_marks + total_points_in_extra_caricular) / 200) * 100;
}
void Result::show_result(void)
{
    cout << student_name << " whose Roll Number is " << roll_no << " got total of " << result << " precentile in school" << endl;
}

int main()
{
    Result aman;
    aman.set_name("Aman");
    aman.set_roll_no(5);
    aman.set_total_marks(87.45);
    // aman.get_total_marks();
    aman.set_total_points_in_extra_caricular(95.12);
    // aman.get_total_points_in_extra_caricular();
    aman.calculate_result();
    aman.show_result();

    return 0;
}