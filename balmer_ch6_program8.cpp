/**************************************************/
/* Assignment #8- Present Value Calculator        */
/* Luke Balmer                                    */
/* Computer Engineering Technology 3              */
/* Period #3                                      */
/* Due: 1/22/21                                   */
/**************************************************/

#include <iostream>
#include <cstdlib>
#include <math.h>
#include <iomanip>
using namespace std;

float presentValue(float, float, float);

int main()
{
	float futureVal, yearlyIntRate, years, presentVal;
	cout << "Please enter the future value desired: " << endl;
	cin >> futureVal;
	cout << "Please enter the annual interest rate as a decimal: " << endl;
	cin >> yearlyIntRate;
	cout << "Please enter the the number of years the money will be in the account: " << endl;
	cin >> years;
	presentVal = presentValue(futureVal, yearlyIntRate, years);
	cout << "You would need to deposit $"<< setprecision(4) << presentVal << "today to reach that goal." << endl;
	
	return 0;
}

float presentValue(float futureVal, float yearlyIntRate, float years)
{
	float presentVal;
	presentVal = futureVal / pow((1 + yearlyIntRate), years);
	return presentVal;
}
