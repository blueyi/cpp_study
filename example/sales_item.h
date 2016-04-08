#ifndef SALES_ITEM_H
#define SALES_ITEM_H
#endif

#include <iostream>
#include <string>
using namespace std;


class Sales_item 
{
    public:
        Sales_item(const string &book): isbn(book), price(0.0), num(0) {}
        string get_isbn() const;
        double get_price() const;
        unsigned get_num() const;
        void add_price(double price);
        void add_num(unsigned num);

    private:
        string isbn;
        double price;
        unsigned num;
};

inline string Sales_item::get_isbn() const 
{
    return isbn;
}

inline double Sales_item::get_price() const
{
    return price;
}
 
inline unsigned Sales_item::get_num() const
{
    return num;
}

inline void Sales_item::add_price(double price)
{
    this->price = price;
}

inline void Sales_item::add_num(unsigned num)
{
    this->num = num;
}
