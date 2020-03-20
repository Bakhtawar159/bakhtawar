#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
	int i;	
	string st1;
	cout << "Now enter a line of text: ";
	getline(cin, st1);
	cout << endl;
	for (i = 0; i <= st1.length( ); i++)
	{
		if (st1[i] >= '0' && st1[i] <= '9')
		{
			st1.at(i)='x';
		}
	}
	cout << "\nNew string with numbers replaced with 'x':  " << st1 << endl << endl;
		
	return 0;
}
