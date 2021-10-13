/*
Date 13-10-2021

In this tutorial, you will learn about Lists in C++
*/

#include <iostream>
#include <list>
#include <cstdlib>
#include <ctime>

using namespace std;

template <class user_defined>
void display_list(list<user_defined> &li)
{
    list<int>::iterator iter;
    for (iter = li.begin(); iter != li.end(); iter++)
    {
        cout << *iter << ",";
    }
    cout << endl;
}

int main()
{
    int size = 20;
    list<int> li_1(size);

    list<int>::iterator iterator_of_li_1;
    iterator_of_li_1 = li_1.begin();

    int element;

    for (int i = 0; i < size; i++)
    {
        srand(((unsigned)time(0)) + i);
        element = (rand() % 100);
        *(iterator_of_li_1++) = element;
    }

    display_list<int>(li_1);
    li_1.sort();
    display_list<int>(li_1);

    return 0;
}