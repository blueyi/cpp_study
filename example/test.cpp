#include<iostream>
#include<cstring>
#include<vector>
#include<string>

int main(void)
{
    using namespace std;

    cout << "Enter your string:" << endl;
    string str;
    getline(cin,str);
    const size_t slen = str.length() + 1;
    char *pstr =  new char[slen];
    strncpy(pstr, str.c_str(), slen);
    cout << pstr << endl;
    delete [] pstr;
    return 0;
}
