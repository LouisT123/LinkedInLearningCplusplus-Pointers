
#include <iostream>
using namespace std;

int main()
{
	cout << "Size of boolean: " << sizeof(bool) << endl;
	cout << "Size of char: " << sizeof(char) << endl;
	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of float: " << sizeof(float) << endl;
	cout << "Size of long: " << sizeof(long) << endl;
	cout << "Size of double: " << sizeof(double) << endl;

	// 3 pointer variables
	bool *pBool;
	char *pChar;
	int *pInt;
	cout << "Size of boolean ptr: " << sizeof(pBool) << endl;
	cout << "Size of char ptr: " << sizeof(pChar) << endl;
	cout << "Size of int ptr: " << sizeof(pInt) << endl;
	//these cout to be 4 because only data that a pointer data type has is an address which is a 
	// hexadecimal value pointing to an address in memory

	return 0;
}

