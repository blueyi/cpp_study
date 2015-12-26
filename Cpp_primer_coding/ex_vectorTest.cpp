#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    /*
    vector<string> vecstr;
    string str;
    while (cin >> str) {
        vecstr.push_back(str);
    }
    for (auto item : vecstr) {
        for (char ch : item) {
            ch = toupper(ch);
            cout << ch;
        }
        cout << endl;
    }
    */
    vector<int> vec;
    for (int i = 0; i < 10; ++i) vec.push_back(i + 1);
    for (auto item : vec) {
        cout << item << " ";
    }
    cout << endl;
    for (decltype(vec.size()) i = 0; i < vec.size() / 2; ++i) {
        cout << vec[i] + vec[vec.size()-1 - i] << endl;
    }
    return 0;
}

