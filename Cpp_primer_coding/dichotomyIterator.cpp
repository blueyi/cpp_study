#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> intVec;
    for (int i = 0; i < 100; intVec.push_back(++i));
    int num = 0;
    cout << "Enter num: ";
    cin >> num;
    cout << endl;
    vector<int>::iterator beg = intVec.begin(), end = intVec.end();
    vector<int>::iterator mid = beg + (end - beg) / 2;
    while ((*mid != num) && (beg != end)) {
        if (num < *mid) {
            end = mid;
        }
        else {
            beg = mid + 1;
        }
        mid = beg + (end - beg) / 2;
    }
    if (*mid == num) {
        vector<int>::difference_type dis =  mid - intVec.begin();
        cout << num << " in " << dis << endl;
    }
    else
      cout << num << " not in here!" << endl;

    return 0;
}
