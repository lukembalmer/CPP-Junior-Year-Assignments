/**************************************************/
/* Assignment #3- Chips and Salsa                 */
/* Luke Balmer                                    */
/* Computer Engineering Technology 3              */
/* Period #3                                      */
/* Due: 2/12/21                                   */
/**************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string names[5] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
	string tempName;
	int sales[5] = {};
	int total, temp;
	
	for(int count = 0; count < 5; count++)
	{
		while(1)//input validation
		{
			cout << "Please enter the number of jars sold of " << names[count] << " salsa: " << endl;
			cin >> sales[count];
			if(sales[count] >= 0)
				break;
			else
				cout << "Error, please retry: "; //no endl for clearer output
		}
		total += sales[count];
	}
	
	cout << "***Sales Report***" << endl;
	cout << names[0] << ": " << sales[0] << endl;
	cout << names[1] << ": " << sales[1] << endl;
	cout << names[2] << ": " << sales[2] << endl;
	cout << names[3] << ": " << sales[3] << endl;
	cout << names[4] << ": " << sales[4] << endl;
	cout << "Total Sales: " << total << endl;
	
	for(int i = 0; i < 4; i++)//bubble sort alg to find highest/lowest
	{
		for(int loop = 0; loop < 4; loop++)
		{
			if(sales[loop] > sales[loop + 1])
			{
				temp = sales[loop];
				sales[loop] = sales[loop + 1];
				sales[loop + 1] = temp;
				
				tempName = names[loop];//strings are sorted parallel to the sales ints, not based on char values
				names[loop] = names[loop + 1];
				names[loop + 1] = tempName;
			}
		}	
	}
	cout << "Highest Selling Type: " << names[4] << " with " << sales[4] << " sales!" << endl;
	cout << "Lowest Selling Type: " << names[0] << " with " << sales[0] << " sales!" << endl;
	cout << "******************" << endl;
	return 0;
}
