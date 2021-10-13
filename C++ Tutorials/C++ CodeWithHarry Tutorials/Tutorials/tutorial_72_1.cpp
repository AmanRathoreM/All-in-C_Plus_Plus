/*
Date 13-10-2021

In this tutorial, you will learn about Lists in C++
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> li_1;
    // list<int> li_1(10);
    list<int>::iterator iterator_of_li_1;
    li_1.push_back(5);
    li_1.push_back(54);
    li_1.push_back(544);
    li_1.push_back(4544);
    li_1.push_back(123);
    li_1.push_back(972);
    iterator_of_li_1 = li_1.begin();

    cout << *(iterator_of_li_1++) << endl;
    cout << *(iterator_of_li_1++) << endl;
    cout << *(iterator_of_li_1++) << endl;
    cout << *(iterator_of_li_1++) << endl;
    cout << *(iterator_of_li_1++) << endl;
    cout << *(iterator_of_li_1++) << endl;
    cout << *(iterator_of_li_1++) << endl;
    cout << *(iterator_of_li_1++) << endl;
    cout << *(iterator_of_li_1++) << endl;
    cout << *(iterator_of_li_1++) << endl;
    cout << *(iterator_of_li_1++) << endl;
    cout << *(iterator_of_li_1++) << endl;
    cout << *(iterator_of_li_1++) << endl;
    cout << *(iterator_of_li_1++) << endl;
    cout << *(iterator_of_li_1++) << endl;

    return 0;
}