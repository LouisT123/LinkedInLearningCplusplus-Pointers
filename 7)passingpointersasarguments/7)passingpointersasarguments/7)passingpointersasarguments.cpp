

#include <iostream>
using namespace std;

//takes in array by defining pointer to that array
double averageCost(double *priceArray, int *count)
{
	double sum = 0;
	for (int i = 0; i < *count; i++)
	{
		sum += *(priceArray + i);
	}
	double avg = sum / *count;
	*count += 5;
	cout << "in function count value: " << *count << endl;
	return avg;

}
int main()
{
	double prices[5]{ 5.00, 4.50, 3.75, 3.10, 6.75 };
	int quanitity = 5;
	double average = averageCost(prices, &quanitity);
	cout << "$" << average << endl;
	cout << "quanitity value: " << quanitity;
	//when you pass a value into to a function and you're passing a pointer (*count)
	// that whatever changes are made in the function are also made in the original variable
	// back in main
}

