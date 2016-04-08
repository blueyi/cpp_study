#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
char c[5]="今天";
cout<<c<<endl;
for(int i=0;i<4;++i)
   cout<<int(c[i])<<endl;
char ch[2]={-67,-15};
ch[0] ^= 2;
ch[0] -= 100;
ch[1] ^= 1;
ch[1] -= 100;
cout<<ch<<endl;
return 0;
}
