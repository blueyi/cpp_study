#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str("Hello, world!!!");
    for (auto c : str) {
        if (!ispunct(c))
          cout << c;
    }
    cout << endl;


    return 0;
}
