#include <regex>
#include <iostream>
#include <string>

bool is_email_valid(const std::string& email)
{
//   const std::regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
   const std::regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
   return std::regex_match(email, pattern);
}

int main()
{
   std::string email1 = "marius.bancila@domain.com";
   std::string email2 = "mariusbancila@domain.com";
   std::string email3 = "marius_b@domain.co.uk";
   std::string email4 = "marius@domain";
   std::cout << email1 << " : " << (is_email_valid(email1) ?
      "valid" : "invalid") << std::endl;
   std::cout << email2 << " : " << (is_email_valid(email2) ?
      "valid" : "invalid") << std::endl;
   std::cout << email3 << " : " << (is_email_valid(email3) ?
     "valid" : "invalid") << std::endl;
   std::cout << email4 << " : " << (is_email_valid(email4) ?
     "valid" : "invalid") << std::endl;
   return 0;
}
