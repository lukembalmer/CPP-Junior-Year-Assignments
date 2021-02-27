/**************************************************/
/* Assignment #2- Winning Division                */
/* Luke Balmer                                    */
/* Computer Engineering Technology 3              */
/* Period #3                                      */
/* Due: 1/22/21                                   */
/**************************************************/
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void findHighest(double, double, double, double);//function prototypes
double getSales(string);

int main()
{
	double NESales = 0, NWSales = 0, SESales = 0, SWSales = 0, quarterlySales;
	string divName;
	for(int count = 1; count <= 4; count++)	
	{
		cout << "What is the name of the division you're entering data for? Enter as two capital letters(e.g. NE): " << endl;
		cin >> divName;
		quarterlySales = getSales(divName);//sends divName to getSales, getSales, returns quarterlySales
		if(divName == "NE")//decides where to send quarterlySales value based on the division
			NESales = quarterlySales;
		else if(divName == "NW")
			NWSales = quarterlySales;
		else if(divName == "SW")
			SWSales = quarterlySales;
		else if(divName == "SE") 
			SESales = quarterlySales;
		else
			{
			cout << "Please restart the program, entering a value other than two capital letters has caused an error." << endl;
			break;
			}
	}
	findHighest(NESales, NWSales, SWSales, SESales);
	return 0;
}	

double getSales(string divName)
{
	cout << "Current Division: " << divName << endl;
	double quarterlySales = 0;
	while(1)//input validation
	{
		cout << "What is this division's quarterly sales figure?"<< endl;
		cin >> quarterlySales;
		if(quarterlySales >= 0)
			break;
		else
			cout << "Error, please retry." << endl;
	}
	return quarterlySales;
}
	
void findHighest(double NESales, double NWSales, double SWSales, double SESales)
{
	double highestSales = 0;
	string winner = "Error";
	//'finding the largest value' loop, similar to ch5 program but using an array

	if(NESales > NWSales){
		if(NESales > SWSales){
			if(NESales > SESales){
				highestSales = NESales;
			}
		}	
	}
	if(SESales > NWSales){
		if(SESales > SWSales){
			if(SESales > NESales){
				highestSales = SESales;
			}
		}	
	}
	if(NWSales > NESales){
		if(NWSales > SWSales){
			if(NWSales > SESales){
				highestSales = NWSales;
			}
		}	
	}
	if(SWSales > NWSales){
		if(SWSales > NESales){
			if(SWSales > SESales){
				highestSales = SWSales;
			}
		}	
	}

	if(highestSales == NESales)//finding which string to display for the winning division
		{winner = "NE";
		goto finished; }
	else if(highestSales == NWSales)
		{winner = "NW";
		goto finished; }
	else if(highestSales == SESales)
		{winner = "SE";
		goto finished; }
	else if(highestSales == SWSales)
		{winner = "SW";
			goto finished;}
	finished:
	cout << "The winning division is: " << winner << endl;
	cout << "With a sales figure of: " << highestSales << endl;
}
