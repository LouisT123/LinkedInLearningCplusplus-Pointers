// 3)pointerstoarrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	double values[10];						//declare an array values with 10 elements
	double* pValue = values;				//define a pointer to the array 
											// array doesn't need & b4 "values" because arrays contain address 
											//of the first element in the array
	cout << "value array address: " << values << endl;
	cout << "pValues: " << pValue << endl << endl;


	int numbers[10];
	int *ptrNumbers = numbers;

	
	cout << "display addresses of 10 numbers in an integer array (int numbers[10])" << endl;
	for (int i = 0; i < 10; i++)
	{
		//takes position of the number and adds the pointer to it to get its address
		cout << "numbers address: " << i << ": " << ptrNumbers + i << endl;

	}
	cout << "notice that each element (since was int (4bytes) was 4 bytes more then the element before it";

	return 0;
}


