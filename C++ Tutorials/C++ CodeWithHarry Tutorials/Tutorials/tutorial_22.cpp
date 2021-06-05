// Date 03-06-2021

#include <iostream>
// #include <string>

using namespace std;
class binary
{
private:
    string str;
    void check_binary_or_not(void);

public:
    void read_binary(void);
    void binary_0_1_position_interchange(void);
};

void binary ::read_binary(void)
{
    cout << "Enter a number to check it is a binary number or not!" << endl;
    cin >> str;
}

void binary ::check_binary_or_not(void)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) != '0' && str.at(i) != '1')
        {
            cout << str << " is not a Binary number!" << endl
                 << "Please enter an another number" << endl;
            exit(0);
        }
        // else if (i <= str.length())
        // {
        //     cout << str << " is a Binary number!" << endl;
        //     exit(0);
        // }
    };
}

void binary ::binary_0_1_position_interchange(void)
{
    check_binary_or_not();
    string str_copy = str;
    for (int i = 0; i < str.length(); i++)
    {

        if (str.at(i) == '0')
        {
            str.at(i) = '1';
        }
        else
        {
            str.at(i) = '0';
        }
    };
    cout << str_copy << " changed into " << str << endl;
}
int main()
{
    binary b;
    b.read_binary();
    //* b.check_binary_or_not();
    b.binary_0_1_position_interchange();

    return 0;
}