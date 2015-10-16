#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1, str2;
    while(getline(cin, str1) && getline(cin, str2))
    {
        if (str1 == str2)
          cout << "Equal" << endl;
        else if (str1.size() > str2.size())
          cout << str1 << endl;
        else
          cout << str2 << endl;
    }
    return 0;
}
