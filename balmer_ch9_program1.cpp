/**************************************************/
/* Assignment #1 Chapter 9                        */
/* Luke Balmer                                    */
/* Computer Engineering Technology 3              */
/* Period #3                                      */
/* Due: 3/12/21                                   */
/**************************************************/
/*Look at the following code.
double value = 29.7;
double *ptr = &value;
Write a cout statement that uses the ptrvariable to display the contents of the value variable. */
#include <iostream>
using namespace std;

int main()
{
	double value = 29.7;
	double* ptr = &value;
	
	cout << *ptr << endl;//use of the indirection operator
	
	return 0;
}
