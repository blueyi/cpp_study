/*优化处理Notes，每一行中的英语字符前后自动添加``，以实现markdown代码高亮。以“## 数字”开头的字符串下面要以数字.数字.开始为后面的语句排序。如1.1,1.2,1.3，如果已经有标号了，则删除原标号。将处理完的内容写入到新的文件中。*/
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cctype>

using namespace std;

const string title = "##";
string deal_english(string &str);  //处理其中的英文字符为代码高亮
string & serial_num(string &str, int h_num);  //替换行首的序号

int main(void)
{
    string s;
    ifstream infile("temp.txt");
    int heading_num = 0;
    while (!infile.eof())
    {
        getline(infile, s);
        string pound;
        int pound_num = 0;
        int content = 0;

        if (!s.empty())  // jump over empty line
        {
            size_t dot_pos = s.find(".");
            if ((dot_pos == string::npos) || (dot_pos > 6))  //不是单独一行不处理
            {
                cout << "Don't to deal: " << s << endl;
                continue;
            }
            istringstream stream(s.substr(0, dot_pos));
            stream >> pound >> pound_num;
            if ((pound == title) && (pound_num != 0))  //处理标题行
            {
                heading_num = pound_num;

            }
        }
    }
    string str1 = "1.i love chain";
    cout << "*******" << serial_num(str1, 3) << endl;
    return 0;
}

string & serial_num(string &str, int h_num)  //替换行首的序号
{
    ostringstream ost;
    ost << h_num;
    size_t dot_pos = str.find(".");
    str.replace(0, dot_pos, ost.str());
    return str;
}
