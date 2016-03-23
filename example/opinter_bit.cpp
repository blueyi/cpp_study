#include <iostream>
#include <vector>
#include <string>

using namespace std;
int get_big(int a, int *b);
void swap(int *a, int *b);
int find(const string &s);
int main(void)
{

    int num1, num2;
    cout << "Enter to number:";
    cin >> num1 >> num2;
    cout << "Original: " << num1 << ' ' << num2 << endl;
    cout << num1 << num2 << endl;
    swap(&num1, &num2);
    cout << "Swaped: " << num1 << ' ' << num2 << endl;
    cout << find("Hellow");
    return 0;
}

int get_big(int a, int *b)
{
    return (a > (*b) ? a : (*b));
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int find(const string &s)
{
    return static_cast<int>(s.size());
}
