// 8)newanddeleteoperator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //variable pointer which contains address of location of #55
    int *pointer(new int(55));
    cout << *pointer << endl; //will print out 55
    delete pointer;

    //create pointer to array and point to memory somewhere that has enough memory allocated for 5 integer varables (20bytes)
    int* pArray(new int[5]{ 10,20.30,40,50 });
    *(pArray + 1) += 5;
    cout << *pArray << ", " << *(pArray + 1) << endl;
    delete pArray;
}

