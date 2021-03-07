/**************************************************/
/* Assignment #3 Chapter 9                        */
/* Luke Balmer                                    */
/* Computer Engineering Technology 3              */
/* Period #3                                      */
/* Due: 3/12/21                                   */
/**************************************************/
/*
Assume that tempNumbers is a pointer that points to a dynamically allocated array.
Write code that releases the memory used by the array.
*/
#include <iostream>
using namespace std;

int main()
{
	double* tempNumbers = new double[10];
	
	delete [] tempNumbers;

	return 0;
}
