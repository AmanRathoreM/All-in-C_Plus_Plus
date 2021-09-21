//* Date 20-09-2021

//* This is a quiz in which you need to find distance between two given coordinates(use class)

#include <iostream>
#include <cmath> //* To preform mathematical operations

using namespace std;
class Coordinate;
double get_coordinate_distance(Coordinate, Coordinate);

class Coordinate
{
    double x, y;
    int object_number;

public:
    friend double get_coordinate_distance(Coordinate a, Coordinate b);
    Coordinate(double, double);
    void print_number(void)
    {
        cout << "Your Coordinates are (" << x << "," << y << ") "
             << "and it is " << object_number << " member of your Class" << endl;
    }
};
double get_coordinate_distance(Coordinate a, Coordinate b)
{
    return sqrt(pow((b.x - a.x), (2)) + pow((b.y - a.y), (2)));
}

Coordinate ::Coordinate(double num_1, double num_2)
{
    static int number_of_object = 1;
    x = num_1;
    y = num_2;
    object_number = number_of_object++;
}

int main()
{
    Coordinate a_point(18.65, 78.45);
    a_point.print_number();

    Coordinate b_point(.454, 7.312);
    b_point.print_number();

    cout << "Distance between Coordinates is " << get_coordinate_distance(a_point, b_point) << endl; //* Answer will be 73.4283

    return 0;
}