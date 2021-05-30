// Date 28-05-2021
//* Make a Multiplacation Table of 6 using do while loop
//* Make a Multiplacation Table of 6 using do while loop
//* Make a Multiplacation Table of 6 using do while loop
//* Make a Multiplacation Table of 6 using do while loop
//* Make a Multiplacation Table of 6 using do while loop
//* Make a Multiplacation Table of 6 using do while loop
//* Make a Multiplacation Table of 6 using do while loop
//* Make a Multiplacation Table of 6 using do while loop
//* Make a Multiplacation Table of 6 using do while loop
//* Make a Multiplacation Table of 6 using do while loop
#include <iostream>

using namespace std;

int main()
{
    int i = 6;
    int number_of_time_table_printed = 1;
    do
    {
        cout << "6 * " << number_of_time_table_printed++ << " = " << i << endl;
        i = i + 6;
    } while (i <= 60);
    return 0;
}
