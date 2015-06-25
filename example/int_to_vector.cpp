#include<iostream>
#include<cstring>
#include<vector>
#include<string>

int main(void)
{
    using namespace std;

    int a[] = {0, 1, 2, 3};
    int b = 4;
    int *p[4];
    p[1] = &b;
    int (*pa)[4];
    pa = &a;
    cout << *(*pa + 1) << endl;
    cout << *(a+1) << endl;
    cout << endl;
    return 0;
}
