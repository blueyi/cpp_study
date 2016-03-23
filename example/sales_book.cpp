#include "sales_item.h"

int main(void)
{
    Sales_item book("A byte of python");
    cout << book.get_isbn() << endl;
    book.add_price(99.99);
    cout << book.get_price() << endl;
    return 0;
}
