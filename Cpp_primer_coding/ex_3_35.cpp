#include <iostream>
#include <iterator>

using namespace std;

int main()
{
    int arr[100];
    for (int *pbeg = begin(arr); pbeg != end(arr); ++pbeg) {
        *pbeg = 1;
    }
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;
}
