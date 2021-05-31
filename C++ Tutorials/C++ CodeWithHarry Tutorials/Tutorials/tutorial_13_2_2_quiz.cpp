// Date 29-05-2021

//* Make an array of 10 indices and print it using do while loop
//* Make an array of 10 indices and print it using do while loop
//* Make an array of 10 indices and print it using do while loop
//* Make an array of 10 indices and print it using do while loop
//* Make an array of 10 indices and print it using do while loop
//* Make an array of 10 indices and print it using do while loop
//* Make an array of 10 indices and print it using do while loop
//* Make an array of 10 indices and print it using do while loop
//* Make an array of 10 indices and print it using do while loop
//* Make an array of 10 indices and print it using do while loop

#include <iostream>

using namespace std;

int main()
{
    int array_1[10] = {12, 3, 45, 7, 6, 12, 87, 34, 45, 23};
    int i = 0;
    do
    {

        cout << "Value of array_1[" << i << "] is " << array_1[i++] << endl;
    } while (i < 10);
    return 0;
}
