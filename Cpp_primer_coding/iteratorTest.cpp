#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> intvec(10);
    int i = 0;
    for (vector<int>::iterator iter = intvec.begin(); iter != intvec.end(); ++iter) {
        *iter = i++;
        cout << *iter << " ";
    }

    cout << endl;

    for (vector<int>::iterator iter = intvec.begin(); iter != intvec.end(); ++iter) {
        *iter *= 2;
        cout << *iter << " ";
    }

    cout << endl;
}

