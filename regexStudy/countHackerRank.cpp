#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <regex>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int lineNum = 0;
    int num = 0;
    cin >> lineNum;
    cin.ignore();
    string str;
    regex pattern("\\b[@#]?(h|H)acker(r|R)ank\\b");
    while((lineNum--) > 0)
    {
        getline(cin,str);
        
        if (regex_search(str, pattern))
            num++;
    }
    cout << num << endl;
    return 0;
}
