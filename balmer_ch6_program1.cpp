/**************************************************/
/* Assignment #1- Markup                          */
/* Luke Balmer                                    */
/* Computer Engineering Technology 3              */
/* Period #3                                      */
/* Due: 1/22/21                                   */
/**************************************************/

#include <iostream>
#include <cstdlib>

using namespace std;

float calculateRetail(float, float);

int main()
{
	float wholesale, markup, retail;
	cout << "Please enter the wholesale cost: " << endl;
	cin >> wholesale;
	cout << "Please enter the markup percentage as a decimal: " << endl;
	cin >> markup;
	
	retail = calculateRetail(wholesale, markup);
	
	cout << "Retail: " << retail << endl;
	
	return 0;
}

float calculateRetail(float wholesale, float markup)
{
	//calculate retail price
	float retail;
	
	retail = (wholesale * markup) + wholesale;
	
	return retail;
}
