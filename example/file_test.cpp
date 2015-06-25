#include <iostream>
#include <fstream>
#include <string>

using namespace std;

istream & f(istream &in)
{
    int ival;
    while (in >> ival, !in.eof())
    {
        if (in.bad())
            cout << "IO stream corrupted" << endl;
        if (in.fail())
        {
            cerr << "Bad data, try again" << endl;
            in.clear();
            in.setstate(istream::eofbit);
            continue;
        }
        cout << ival << endl;
    }
    in.clear();
    return in;
}

int main(void)
{
   string file_name;
   cout << "Enter file:"  << endl;
   cin >> file_name; 
   ifstream file;
   file.open(file_name.c_str());
   if (!file)
   {
      cerr << "Error open file: " << file_name << endl;
      return -1;
   }
   f(file);
   return 0;
}
