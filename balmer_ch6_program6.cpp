/**************************************************/
/* Assignment #6- Celsius Temperature Table-      */
/* Luke Balmer                                    */
/* Computer Engineering Technology 3              */
/* Period #3                                      */
/* Due: 1/22/21                                   */
/**************************************************/
/* The formula for converting a temperature from Fahrenheit to Celsius is:C = 5/9(F - 32)
where F is the Fahrenheit temperature and C is the Celsius temperature. Write a function named celsius that accepts a Fahrenheit temperature
as an argument. The function should return the temperature, converted to Celsius. Demonstrate the function by calling it in a loop that
displays a table of the Fahrenheit temperatures 0 through 20 and their Celsius equivalents.
*/
#include <iostream>
#include <cstdlib>

using namespace std;

float celsius(float);

int main()
{
    float F = 0, C;
    cout << "Fahrenheit:    Celsius:" << endl;
    for(F; F <= 20; F++)
    {
        C = celsius(F);
        cout << F << "      " << C << endl;
    }
    return 0;
}

float celsius(float F)
{
    float C;
    C = (5.0 / 9.0)*(F-32);
    return C;
}
