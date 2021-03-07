/**************************************************/
/* Assignment #2 Chapter 9                        */
/* Luke Balmer                                    */
/* Computer Engineering Technology 3              */
/* Period #3                                      */
/* Due: 3/12/21                                   */
/**************************************************/
/*
Look at the following array definition.
int set[10];
Write a statement using pointer notation that stores the value 99in set[7];
*/
#include <iostream>
using namespace std;

int main()
{
	int set[10];
	*(set + 7) = 99; //set + 7 is the address for set[7], must be in ()
	cout << set[7] << endl;
	
	return 0;
}
