/**************************************************/
/* Assignment #10- Days Out                       */
/* Luke Balmer                                    */
/* Computer Engineering Technology 3              */
/* Period #3                                      */
/* Due: 1/22/21                                   */
/**************************************************/

#include <iostream>
#include <cstdlib>

using namespace std;

int getNumEmployed();
int getTotalAbsences(int);
double getAverageAbsences(int, int);

int main()
{
	int numEmployed, totalAbsences;
	double averageDaysAbsent;
	numEmployed = getNumEmployed();
	totalAbsences = getTotalAbsences(numEmployed);
	averageDaysAbsent = getAverageAbsences(numEmployed, totalAbsences);
	
	cout << "The average number of days absent is " << averageDaysAbsent << " day(s)." << endl;
	return 0;
}

int getNumEmployed()
{
	int numEmployed;
	while(1){//input validation
		cout << "Please enter the number of employees in the company: " << endl;
		cin >> numEmployed;
		if(numEmployed >= 1)
			break;
		else
			cout << "Please retry, number of employees cannot be less than 1." << endl;
	}
	return numEmployed;
}

int getTotalAbsences(int numEmployed)
{
	int indivAbsences, totalAbsences = 0;
	for(int count = 1; count <= numEmployed; count++)
	{
		cout << "Please enter the days missed for employee number "<< count << ":" << endl;
		cin >> indivAbsences;
		if(indivAbsences >= 0)//input validation
			totalAbsences += indivAbsences;
		else
		{
			cout << "Please retry, the number of days missed cannot be negative." << endl;
			count -= 1;
		}
	}
	return totalAbsences;
}

double getAverageAbsences(int numEmployed, int totalAbsences)
{
	double averageDaysAbsent, sub1, sub2;//using type conversion to ensure im calculating for and returning a double
	sub1 = totalAbsences;
	sub2 = numEmployed;
	averageDaysAbsent = sub1 / sub2;
	return averageDaysAbsent;
}
