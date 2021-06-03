// Date 31-05-2021

#include <iostream>

using namespace std;

int volume(int side)
{
    //* Volume of cube
    return side * side * side;
}
int volume(int length, int breadth, int height)
{
    //* Volume of cuboid
    return length * breadth * height;
}
double volume(double radius, double height)
{
    //* Volume of cylinder
    return 3.14285714286 * radius * radius * height;
}
int main()
{
    cout << "The Volume of Cube with side 3 is: " << endl
         << volume(3) << " >>>>>>>>>> Using function named volume(i.e. same name but diffrent arguments function)" << endl;
    cout << "The Volume of Cuboid with side 3, 7 and 10  is: " << endl
         << volume(3, 7, 10) << " >>>>>>>>>> Using function named volume(i.e. same name but diffrent arguments function)" << endl;
    cout << "The Volume of Cylinder with height 23 and radius 6 is: " << endl
         << volume(6, 23) << " >>>>>>>>>> Using function named volume(i.e. same name but diffrent arguments function)" << endl;
    return 0;
}