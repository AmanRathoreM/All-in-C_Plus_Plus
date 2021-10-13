/*
Date 13-10-2021

In this tutorial, you will learn about Lists in C++
*/

#include <iostream>
#include <list>

using namespace std;

template <class user_defined>
void display_list(list<user_defined> &li)
{
    list<int>::iterator iter;
    for (iter = li.begin(); iter != li.end(); iter++)
    {
        cout << *iter << endl;
    }
}

int main()
{
    list<int> li_1;

    li_1.push_back(5);
    li_1.push_back(54);
    li_1.push_back(544);
    li_1.push_back(4544);
    li_1.push_back(123);
    li_1.push_back(972);

    display_list<int>(li_1);

    return 0;
}