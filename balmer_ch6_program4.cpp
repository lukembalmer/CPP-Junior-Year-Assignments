/**************************************************/
/* Assignment #4- Falling Distance                */
/* Luke Balmer                                    */
/* Computer Engineering Technology 3              */
/* Period #3                                      */
/* Due: 1/22/21                                   */
/**************************************************/
#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

double fallingDistance(double);

int main()
{
	double t = 1, d = 0;
	for(t; t <= 10; t++)
	{
		d = fallingDistance(t);
		cout << "The object has fallen " << d << " meters." << endl;
	}
	return 0;
}

double fallingDistance(double t)
{
	
	double d;
	float g = 9.8;
	d = 0.5 * g * pow(t, 2);
	
	return d;
}


