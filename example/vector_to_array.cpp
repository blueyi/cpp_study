#include<iostream>
#include<cstddef>
#include<vector>

int main(void)
{
    using namespace std;

    cout << "Enter some numbers: (Any other words to end)" << endl;
    int itemp;
    vector<int> num;
    while (cin >> itemp)
    {
        num.push_back(itemp);
    }
    size_t nlen = num.size();
    int *anum = new int[nlen];
    int nx = 0;
    for (vector<int>::iterator ite = num.begin(); ite != num.end(); ++ite)
    {
       anum[nx++] = *ite; 
    }

    for (size_t ix = 0; ix < nlen; ++ix)
        cout << anum[ix] << " ";

    cout << endl;

    return 0;
}
