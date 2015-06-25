#include <iostream>

using namespace std;
istream & f(istream &in)
{
	int ival;
	while (in >> ival, !in.eof())
	{
		if (in.bad())
		{
			cout << "IO stream has be corrupted";
			break;
		}
		if (in.fail())
		{
			cout << "An error, try again." << endl;
			in.clear();
			in.sync();
			//in.setstate(istream::eofbit);
			cout << "debug--------------" << flush;
			continue;
		}
		cout << ival << endl;
	}
	in.clear();
	return in;
}

int main(void)
{

	f(cin);
	return 0;
}
