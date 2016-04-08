#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string str = "1234567890";
    cout << str << endl;
    size_t num = str.find("3");
    cout << num << endl;
    return 0;
}
