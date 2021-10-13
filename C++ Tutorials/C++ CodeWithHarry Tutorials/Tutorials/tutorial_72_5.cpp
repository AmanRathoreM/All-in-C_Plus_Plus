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
    list<int> li_1(5);

    // li_1
    list<int>::iterator iterator_of_li_1;
    iterator_of_li_1 = li_1.begin();

    *(iterator_of_li_1++) = 82;
    *(iterator_of_li_1++) = 10387;
    *(iterator_of_li_1++) = 79;
    *(iterator_of_li_1++) = 98;
    *(iterator_of_li_1++) = 1234;

    li_1.push_front(9715);
    li_1.push_back(567);

    display_list<int>(li_1);

    return 0;
}