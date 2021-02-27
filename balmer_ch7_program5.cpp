/**************************************************/
/* Assignment #5- Monkey Business                 */
/* Luke Balmer                                    */
/* Computer Engineering Technology 3              */
/* Period #3                                      */
/* Due: 2/12/21                                   */
/**************************************************/
/*A local zoo wants to keep track of how many pounds of food each of its three monkeys
eats each day during a typical week. Write a program that stores this information in a
two-dimensional 3 × 5 array, where each row represents a different monkey and each
column represents a different day of the week. The program should first have the user
input the data for each monkey. Then it should create a report that includes the following information:
• Average amount of food eaten per day by the whole family of monkeys.
• The least amount of food eaten during the week by any one monkey.
• The greatest amount of food eaten during the week by any one monkey.
Input Validation: Do not accept negative numbers for pounds of food eaten*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int weekdays = 7;
	float poundsEaten[3][5];
	float total, dailyTotal, average, temp; 
	string dayOfWeek;

	for(int i = 0; i < weekdays; i++)
	{
		switch(i) //switch statement connects different values of i to strings for clearer output to the user
		{
			case 0 : dayOfWeek = "Sunday";
			break;
			case 1 : dayOfWeek = "Monday";
			break;
			case 2 : dayOfWeek = "Tuesday";
			break;
			case 3 : dayOfWeek = "Wednesday";
			break;
			case 4 : dayOfWeek = "Thursday";
			break;
			case 5 : dayOfWeek = "Friday";
			break;
			case 6 : dayOfWeek = "Saturday";
			break;
		}
		//next three while loops fill 3x5 2D array column by column, their repetition through the for loop will fill entire table
		while(1) //while loop is used for input validation, ensuring valued entered is not negative(see line 16)
		{
			cout << "Please enter the pounds of bananas eaten by monkey 1 on " << dayOfWeek << ": " << endl;
			cin >> poundsEaten[0][i];
			if(poundsEaten[0][i] >= 0)
				break;
			else
				cout << "Error, please retry: ";
		}
		
		while(1) //inputs for monkey 2
		{
			cout << "Please enter the pounds of bananas eaten by monkey 2 on " << dayOfWeek << ": " << endl;
			cin >> poundsEaten[1][i];
			if(poundsEaten[1][i] >= 0)
				break;
			else
				cout << "Error, please retry: ";
		}
		
		while(1) //inputs for monkey 3
		{
			cout << "Please enter the pounds of bananas eaten by monkey 3 on " << dayOfWeek << ": " << endl;
			cin >> poundsEaten[2][i];
			if(poundsEaten[2][i] >= 0)
				break;
			else
				cout << "Error, please retry: ";
		}
		dailyTotal = poundsEaten[0][i] + poundsEaten[1][i] + poundsEaten[2][i];
		total += dailyTotal;
	}
	average = total / 21;
	
	float allMonkeys[21];
	for(int i = 0; i < 21; i++)
	{
		if(i < 7)
			allMonkeys[i] = poundsEaten[0][i];
		else if(i < 14)
			allMonkeys[i] = poundsEaten[1][i - 7];//must subtract 7, 14 because otherwise will try to access monkey2[7], monkey3[14], etc where values are 0
		else
			allMonkeys[i] = poundsEaten[2][i - 14];//^ this will cause issues in sorting later with zeroes as part of the list
	}
	
	for(int i = 0; i < 20; i++)//20 is (weekdays * 3) -1 or n-1
	{
		for(int loop = 0; loop < 20; loop++)
		{
			if(allMonkeys[loop] > allMonkeys[loop + 1])
			{
				temp = allMonkeys[loop];
				allMonkeys[loop] = allMonkeys[loop + 1];
				allMonkeys[loop + 1] = temp;
			}
		}	
	}
	
	cout << "***REPORT***" << endl;
	cout << "Average food per day for all three monkeys: " << average << endl;
	cout << "Least amount of food eaten on any day by any monkey: " << allMonkeys[0] << endl;
	cout << "Greatest amount of food eaten on any day by any monkey: " << allMonkeys[20] << endl;
	cout << "***END REPORT***" << endl;
	
	return 0;
}
/*     .="=.
     _/.-.-.\_     _
    ( ( o o ) )    ))
     |/  "  \|    //
      \'---'/    //
      /`"""`\\  ((
     / /_,_\ \\  \\
     \_\\_'__/ \  ))
     /`  /`~\  |//
    /   /    \  /
,--`,--'\/\    /
 '-- "--'  '--'
*/


