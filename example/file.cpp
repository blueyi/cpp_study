#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
int main(void)
{
//    string file = "out.txt";
//    cin >> file;
//    ofstream outfile(file.c_str());  //定义并打开一个用于写入的文件流outfile，记得转成c风格字符串
//    cin.clear();  //重置输入流标志防止cin有可能出现的错误
//    cin.sync();  //清空输入流缓冲区的内容
//    if (!outfile)  //判断写文件流是否有效
//    {
//        cout << "Error to open the file " << file << endl;
//    }
//    else
//    {
//        cout << "Enter some words:" << endl;
//        string str;
//        getline(cin, str);  //一次读到一行
//        outfile << str;  //将str写到文件输出流outfile中
//    }
//    outfile.close();  //关闭文件流
    string file = "sales_item.h";
    ifstream infile(file.c_str());  //定义并初始化文件输入流 
    if (!infile)
    {
        cout << "Error to open infile " << file << endl;
    }
    else
    {
        cout << file << ": " << endl;
//        string str;
//        getline(infile, str);
//        cout << str << endl;
        string str;
        vector<string> sales;
        while (!infile.eof())
        {
            getline(infile, str);
            sales.push_back(str);
        }
        for (vector<string>::const_iterator ite = sales.begin(); ite != sales.end(); ++ite)
        {
            cout << *ite << endl;
        }
    }
    infile.close();
    return 0;
}
