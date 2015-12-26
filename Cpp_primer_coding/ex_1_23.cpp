#include "Sales_item.h"

int main()
{
    Sales_item book, sum;
    int cnt = 0;
    if (std::cin >> sum) {
        while (std::cin >> book) {
            if (book.isbn() == sum.isbn()) {
                sum += book;
                cnt++;
            }
            else {
                std::cout << sum << " occurs " << cnt << "times" << std::endl;
                cnt = 0;
                sum = book;
            }
        }
        std::cout << sum << " occurs " << cnt << "times" << std::endl;
    }
    return 0;
}
