//* Date 07-10-2021

//* In this tutorial you learn deeply about Multilevel Inheritance

#include <iostream>
#include <string>

using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    int get_roll_number();
};

class Exam : public Student
{
protected:
    float maths_marks, physics_marks, chemistry_marks, biology_marks;

public:
    void set_marks(float, float, float, float);
    void get_marks(string);
};

class Result : public Exam
{
private:
    string name_of_student = "None";
    float total_precentage = 0;

public:
    void set_name(string);
    void calculate_precentage(void);
    void get_precentage(void);
};

void Student::set_roll_number(int roll_num)
{
    roll_number = roll_num;
}

int Student::get_roll_number(void)
{
    return roll_number;
}

void Exam::set_marks(float maths, float physics, float chemistry, float biology)
{
    maths_marks = maths;
    physics_marks = physics;
    chemistry_marks = chemistry;
    biology_marks = biology;
}

void Exam::get_marks(string name_of_student)
{
    cout << name_of_student << " whose roll_number is " << roll_number
         << " got-" << endl;
    cout << maths_marks << " in Maths" << endl;
    cout << physics_marks << " in Physics" << endl;
    cout << chemistry_marks << " in Chemistry" << endl;
    cout << biology_marks << " in Biology" << endl;
}

void Result::set_name(string name)
{
    name_of_student = name;
}

void Result::calculate_precentage(void)
{
    total_precentage = ((maths_marks + physics_marks + chemistry_marks + biology_marks) / 400) * 100;
}

void Result::get_precentage(void)
{
    cout << name_of_student << " whose roll_number is " << roll_number
         << " got " << total_precentage << "%" << endl;
}

int main()
{
    // Student Aman, Rohan;

    // Aman.set_roll_number(5);
    // Rohan.set_roll_number(46);

    // cout << "Aman Roll number is " << Aman.get_roll_number() << endl;
    // cout << "Rohan Roll number is " << Rohan.get_roll_number() << endl;

    // Exam Suman, Mohan;

    // Suman.set_roll_number(50);
    // Mohan.set_roll_number(31);

    // Suman.set_marks(54.4, 78.4, 35, 89.5);
    // Mohan.set_marks(45, 12, 65.4, 96.7);

    // Suman.get_marks("Suman");
    // Mohan.get_marks("Mohan");

    // cout << "Suman Roll number is " << Suman.get_roll_number() << endl;
    // cout << "Mohan Roll number is " << Mohan.get_roll_number() << endl;

    Result Billu;

    Billu.set_roll_number(11);
    Billu.set_name("Billu");
    Billu.set_marks(11.89, 74.21, 63.1, 81.33);
    Billu.calculate_precentage();
    Billu.get_marks("Billu");
    Billu.get_precentage();

    return 0;
}