/**************************************************/
/* Assignment #7- Number Analysis Program         */
/* Luke Balmer                                    */
/* Computer Engineering Technology 3              */
/* Period #3                                      */
/* Due: 2/12/21                                   */
/**************************************************/
/* Write a program that asks the user for a file name. Assume the file contains a series of
numbers, each written on a separate line. The program should read the contents of the
file into an array and then display the following data:
• The lowest number in the array
• The highest number in the array
• The total of the numbers in the array
• The average of the numbers in the array
If you have downloaded this book’s source code from the companion Web site, you
will find a file named numbers.txt in the Chapter 07folder. You can use the file to
test the program. (The companion Web site is at www.pearsonhighered.com/gaddis .) */

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string fileName;
	int numFromFile[] = {};
	int count = 0, temp = 0;
	float average, total;
	cout << "Please enter the name of the file you would like to read from: " << endl;
	cin >> fileName;
	
	ifstream infile (fileName.c_str());
	if(infile.is_open())
	{
		while(infile >> numFromFile[count])
			count++;	
	}

	for(int i = 0; i < (count - 1); i++)
	{
		for(int loop = 0; loop < (count - 1); loop++)
		{
			if(numFromFile[loop] > numFromFile[loop + 1])
			{
				temp = numFromFile[loop];
				numFromFile[loop] = numFromFile[loop + 1];
				numFromFile[loop + 1] = temp;
			}
		}	
	}

	for(int j = 0; j < count; j++)
		total += numFromFile[j];
	average = total / count;
	cout << "Lowest number in the array: " << numFromFile[0] << endl;
	cout << "Highest number in the array: " << numFromFile[count-1] << endl;
	cout << "Total numbers in the array: " << count << endl;
	cout << "Average of the numbers in the array: " << average << endl;
	
	infile.close();
	return 0;
}
