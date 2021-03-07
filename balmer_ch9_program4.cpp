/**************************************************/
/* Assignment #4 Chapter 9                        */
/* Luke Balmer                                    */
/* Computer Engineering Technology 3              */
/* Period #3                                      */
/* Due: 3/12/21                                   */
/**************************************************/
/*
Rewrite the following loop so it uses pointer notation
(with the indirection operator) instead of subscript notation.
for (int x = 0; x < 100; x++)cout << arr[x] << endl;
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double arr[100];
	double* ptr = arr;
	
	for(int x = 0; x < 100; x++)
	{
		*(ptr + x) = pow(x, 2);
		cout << *(ptr + x) << endl;
	}
	return 0;	
}
