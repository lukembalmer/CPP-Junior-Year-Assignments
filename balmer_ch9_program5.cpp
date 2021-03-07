/**************************************************/
/* Assignment #5 Chapter 9                        */
/* Luke Balmer                                    */
/* Computer Engineering Technology 3              */
/* Period #3                                      */
/* Due: 3/12/21                                   */
/**************************************************/
//Write a statement that displays the address of the variable count.
#include <iostream>
using namespace std;

int main()
{
	for(int count = 0; count < 10; count++)
	{
		cout << &count << endl;//even as its value changes, the address of count stays the same
	}
	return 0;	
}
