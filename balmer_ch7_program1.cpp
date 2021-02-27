/**************************************************/
/* Assignment #1- Largest/Smallest Array Values   */
/* Luke Balmer                                    */
/* Computer Engineering Technology 3              */
/* Period #3                                      */
/* Due: 2/12/21                                   */
/**************************************************/
#include <iostream>
using namespace std;

int main()
{
	const int arraySize = 10;
	int userValues[arraySize] = {}, temp = 0;
	cout << "Please enter 10 values: " << endl;
	for(int count = 0; count < arraySize; count++)
		cin >> userValues[count];
	
	for(int i = 0; i < arraySize - 1; i++)
	{
		for(int loop = 0; loop < arraySize; loop++)
		{
			if(userValues[loop] > userValues[loop + 1])
			{
				temp = userValues[loop];
				userValues[loop] = userValues[loop + 1];
				userValues[loop + 1] = temp;
			}
		}	
	}
	
	cout << "The largest value is: " << userValues[arraySize - 1] << endl;
	cout << "The smallest values is: " << userValues[0] << endl;
	
	return 0;
}
