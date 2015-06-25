#include <iostream>

typedef int (*tdpf)(void);

using namespace std;

int get_num(void);
int main(void)
{

    tdpf p1 = &get_num;
    cout << p1() << endl;
    return 0;
}

int get_num(void)
{
    int num;
    cin >> num;
    return num;
}
