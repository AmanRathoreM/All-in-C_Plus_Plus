// Date 03-06-2021

#include <iostream>

using namespace std;

class shop
{
    int item_id[100], item_price[100], counter;

public:
    void counter_value_changer(void) { counter = 0; }
    void set_item_information(void);
    void display_item_information(void);
};
void shop::set_item_information(void)
{
    cout << "Please enter item id for item " << counter + 1 << "!" << endl;
    cin >> item_id[counter];
    cout << "Please enter item price for item " << counter + 1 << "!" << endl;
    cin >> item_price[counter++];
}

void shop::display_item_information(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Price of item id " << item_id[i] << " is " << item_price[i] << endl;
    }
}

int main()
{
    // cout << "Hello Aman!" << endl;
    shop s;
    s.counter_value_changer();
    s.set_item_information();
    s.set_item_information();
    s.display_item_information();

    return 0;
}