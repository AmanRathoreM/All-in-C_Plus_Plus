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
        cout << *iter << "  ";
    }
    cout << endl;
}

int main()
{
    list<int> li_1(8);

    // li_1
    list<int>::iterator iterator_of_li_1;
    iterator_of_li_1 = li_1.begin();

    *(iterator_of_li_1++) = 98;
    *(iterator_of_li_1++) = 82;
    *(iterator_of_li_1++) = 17;
    *(iterator_of_li_1++) = 98;
    *(iterator_of_li_1++) = 79;
    *(iterator_of_li_1++) = 98;
    *(iterator_of_li_1++) = 13;
    *(iterator_of_li_1++) = 93;

    display_list<int>(li_1);
    li_1.remove(98);
    display_list<int>(li_1);

    return 0;
}