/**************************************************/
/* Assignment #6 Chapter 9        */
/* Luke Balmer                                    */
/* Computer Engineering Technology 3              */
/* Period #3                                      */
/* Due: 3/12/21                                   */
/**************************************************/
//Write the definition statement for a variable fltPtr. 
//The variable should be a pointer to a float.
#include <iostream>
using namespace std;

int main()
{
	float avgPrice = 10.5;
	float* fltPtr = &avgPrice;
	
	cout << fltPtr << endl;
	
	
	return 0;
}
