// Date 25-05-2021

#include <iostream>
using namespace std;

int main()
{
    int variable_1, variable_2;
    //* << is called Insertion operator
    cout << "Enter the value 1 to add:\n";
    //* << is called Insertion operator
    //* >> is called Extration operator
    cin >> variable_1;
    //* >> is called Extration operator

    //* << is called Insertion operator
    cout << "Enter the value 2 to add:\n";
    //* << is called Insertion operator
    //* >> is called Extration operator
    cin >> variable_2;
    //* >> is called Extration operator

    cout << "Sum of your values is: " << variable_1 + variable_2;

    return 0;
}
