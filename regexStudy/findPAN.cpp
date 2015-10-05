#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <regex>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    const regex pattern("[A-Z]{5}\\d{4}[A-Z]");
    int num = 0;
    int i = 0;
    cin >> num;
    string str[num];
    while ((i < num) && (cin >> str[i]))
    {
        i++;
    }
    for (int j = 0; j < num; j++)
    {
        if (regex_match(str[j], pattern))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
