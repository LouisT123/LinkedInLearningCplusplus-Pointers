// 1)addressvspointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int number = 240;   //define int
    int *numPtr;        //define int pointer numPtr (pointer contains 
    numPtr = &number;   //assign address to numPtr (& = address of operator) ((using adress of operator (&)
                        // to grab address of the variable number and put that into integer numPtr.
    cout << "The address of number is: " << numPtr << endl;
    //address represents the location of the data in memory in hexadecimal, the pointers contains that address value
}


