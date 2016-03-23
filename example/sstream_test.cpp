#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(void)
{
    string s;
    int  b;
    b = 2;
    float a = 0.0f;
    string dump1, dump2;
    cout << "enter line:" << endl;
    while (getline(cin, s))
    {
        istringstream istring(s);
        ostringstream ostring;
        cout << "-------------------------" << endl;
        cout << (istring.str()).length() << endl;
        istring >> a >> dump2;
        cout << "a:" << a << "dump2:" << dump2 << endl;

        istring.clear();
        istring.sync();
        istring.str(istring.str());
        cout << "-------------------------" << endl;
        cout << (istring.str()).length() << endl;
        istring >> dump1 >> b;
        cout << "dump1:" << dump1 << "b:" << b << endl;
        cout << ostring.str() << endl;

        return 0;

    }
}
