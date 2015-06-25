/*优化处理Notes，每一行中的英语字符前后自动添加``，以实现markdown代码高亮。以“## 数字”开头的字符串下面要以数字.数字.开始为后面的语句排序。如1.1,1.2,1.3，如果已经有标号了，则删除原标号。将处理完的内容写入到新的文件中。*/
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cctype>

using namespace std;

const string title = "##";
string deal_english(string &str);

int main(void)
{
    string s;
    ifstream infile("temp.txt");
    while (!infile.eof())
    {
        getline(infile, s);
        istringstream stream(s);
        string pound;
        string content;
        int num;
        stream >> pound >> num >> content;
        cout << pound << num << content << endl;
    }
    return 0;
}
