#include <iostream>
#include <string>
#include <map>
#include <set>
#include <iterator>
#include <fstream>
#include <algorithm>
#include <cctype>
int main()
{
    //声明文件流并初始化
    std::ifstream in("test.cpp");
    //使用文件流初始化流迭代器
    std::istream_iterator<std::string> in_ite(in), eof;
    //声明map，用于存放单词与其个数
    std::map<std::string, size_t> word_count;
    //声明set，存放排除列表
    std::set<std::string> exclude = {"{", "}", "the", "and"};
    std::string word;
    while (in_ite != eof) {
        //std::cout << *in_ite << std::endl;
        word = *in_ite;
        for(auto &ch : word) ch = std::tolower(ch);
        word.erase(std::remove_if(word.begin(), word.end(), ispunct), word.end());
        if (exclude.find(word) == exclude.end()) {
            ++word_count[word];
        }
        in_ite++;
    }
    for(const auto &w : word_count) {
        std::cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << std::endl;
    }
    return 0;
}
