//* Date 08-10-2021

//* In this tutorial you will learn about creating Array of Objects using Pointers

#include "tutorial_52_1_functions.cpp"
#include <cstdlib>
#include <ctime>
// #include <string>

int main()
{
    int size = 3;

    Shop *pointer_pointing_to_shop = new Shop[size];

    short int i = 0;
    for (; i < size; i++)
    {
        srand((unsigned int)time(NULL) * i);
        float random_price = (float(rand()) / float((RAND_MAX)) * 5.0) * 1000;

        string company_name;
        cout << "Please enter the name of the Company: " << endl;
        cin >> company_name;

        (pointer_pointing_to_shop)->set_data(random_price, company_name);
        pointer_pointing_to_shop++;
    }
    cout << endl;

    pointer_pointing_to_shop -= size;

    for (i = 0; i < size; i++)
    {
        (pointer_pointing_to_shop + i)->print_details();
        cout << endl;
    }

    return 0;
}
