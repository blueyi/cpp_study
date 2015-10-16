#include <iostream>
#include <regex>

int main()
{
    std::string str = "Hello world";
    std::regex pattern("\\w+(?=ld)");  //声明正则表达式匹配规则  
    //此处regex_match返回false，因为regex_search只有整个字符串全部匹配时才返回true。
    std::cout << regex_match(str, pattern) << std::endl;  
    //此处返回true
    std::cout << regex_match(str, std::regex(".*ld")) << std::endl;  
    //regex_search返回true，因为它只要能够成功匹配就会返回true
    std::cout << regex_search(str, pattern) << std::endl;
    return 0;
}
