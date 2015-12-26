#include "Sales_item.h"

int main()
{
    Sales_item sum;
    for (Sales_item b; std::cin >> b; sum += b);
    std::cout << sum << std::endl;
    return 0;
}
