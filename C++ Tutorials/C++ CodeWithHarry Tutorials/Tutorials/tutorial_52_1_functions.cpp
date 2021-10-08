//* Date 08-10-2021

//* This is a function/method file created for Tutorial 52

#include <iostream>
#include <string>

using namespace std;

class Shop
{
private:
        int id;
        float price;
        string item_company_name;

public:
        Shop(float, string);
        void print_details(void);
        void set_data(float, string);
};

Shop::Shop(float price_of_item = 1.1, string name_of_item_company = "Not Provided") : price(price_of_item), item_company_name(name_of_item_company)
{
        int static id_counter = 1;
        id = id_counter++;
}
void Shop::print_details(void)
{
        cout << "Item\'s id is " << id << endl
             << "Item\'s price is is " << price << endl
             << "Item\'s Company Name is " << item_company_name << endl;
}
void Shop::set_data(float price_of_item = 1.1, string name_of_item_company = "Not Provided")
{
        price = price_of_item;
        item_company_name = name_of_item_company;
}
