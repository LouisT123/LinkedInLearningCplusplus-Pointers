// 02_04_pointToPointer.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;


int main()
{	/*
	int num = 10;
	int* pNum = &num;
	int** p2Num = &pNum;
	*/

	//pointing to pointer
	/*
	cout << "Address of num: " << &num << endl;
	cout << "Address stored in pNum pointer variable:  " << pNum << endl;
	cout << "address of pNum: " << &pNum << endl;
	cout << "Address in p2Num: (is address of pNum pointer so same) " << p2Num << endl;
	*/

	//Creating an array of pointers
	int testScores[5]{ 100,95,99,85,83 };
	int* pointerArray[5];
	for (size_t i = 0; i < 5; i++)
	{
		pointerArray[i] = &(testScores[i]); //populate pointer array with address of each element of testScores array and 
											// store that address in pointerArray
		//prints the addresses of the 5 elements
		//cout << pointerArray[i] << endl;
		//prints the actual data of the 5 elements
		//cout << *(pointerArray[i]) << endl;
		//addresses of the invidual items in testScores Array
		//cout << *(pointerArray + i) << endl;
		//print items by deref pointers array then deref testscores array
		cout << **(pointerArray + i) << endl;
	}
	
}

