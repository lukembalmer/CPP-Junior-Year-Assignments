//Luke Balmer 2/19/21 Per 3 Computer Engineering Technology 3

// Demetris Leadership Center (DLC) product lookup program
// This program allows the user to enter a product number
// and then displays the title, description, and price of
// that product. 
#include <iostream>
#include <string>
using namespace std;

int getProdNum(int), binarySearch(int, int[]); //function prototypes lines 5-7
void displayProd(int, const double[], const string[], const string[]);
void sortIds(int[]);
const int NUM_PRODS = 9, MIN_PRODNUM = 914, MAX_PRODNUM = 922;//global constants

int main()
{
	int prodNum, position;
	
	int id[NUM_PRODS] = {914, 921, 920, 918, 918, 917, 916, 915, 922};
	const string title[NUM_PRODS] = {"Six Steps to Leadership", "Six Steps to Leadership", 
	"The Road to Excellence", "Seven Lessons of Quality", "Seven Lessons of Quality", 
	"Seven Lessons of Quality", "Teams Are Made, Not Born", "Leadership for the Future", "Leadership for the Future"}; 
	const string description[NUM_PRODS] = {"Book", "Audio CD", "DVD", "Book", "Audio CD", "DVD", "Book", "Book", "Audio CD"}; 
	string again = "No";
	double prices[NUM_PRODS] = {12.95, 14.95, 18.95, 16.95, 21.95, 31.95, 14.95, 14.95, 16.95};
	
	do{
		prodNum = getProdNum(prodNum);
		sortIds(id);
		position = binarySearch(prodNum, id);
		
		if(position == -1)//binary search program will return -1 if value is not present in the array
			cout << "The product number was not found." << endl;
		else
			displayProd(position, prices, title, description);
		
		cout << "Do you want to repeat the program?(Yes or No) " << endl;
		cin >> again;
	} while(again == "Yes");
	return 0;
}

int getProdNum(int prodNum) 
{//asks user for prodNum, validates prodNum, returns prodNum to main
	cout << "Please enter the product number: " << endl;
		cin >> prodNum;
	while(prodNum < MIN_PRODNUM || prodNum > MAX_PRODNUM)
	{
		cout << "Please enter a product number between " << MIN_PRODNUM;
		cout << " and " << MAX_PRODNUM << ": " << endl;
		cin >> prodNum;
	}
	return prodNum;
}

int sortIds(int id[])
{//sorts id array into ascending order to be binary searched effectively
	int minIndex, minValue;
	
	for(int startScan = 0; startScan < (NUM_PRODS - 1); startScan++)
	{
		minIndex = startScan;
		minValue = id[startScan];
		for(int tempIndex = startScan + 1; tempIndex < NUM_PRODS; tempIndex++)
		{
			if(id[tempIndex] < minValue)
			{
				minValue = id[tempIndex];
				minIndex = tempIndex;
			}
		}
	id[minIndex] = id[startScan];
	id[startScan] = minValue;
	}
}

int binarySearch(int prodNum, int id[])
{//searches for value within list of id's, returns value's position to main
	bool found = false;
	int position = -1, firstIndex = 0, lastIndex = NUM_PRODS - 1, middleIndex = 0;

	while(found == false && firstIndex <= lastIndex)
	{
		middleIndex = (lastIndex + firstIndex) / 2;
		if(id[middleIndex] == prodNum)
		{
			found = true;
			position = middleIndex;
		}
		else if(id[middleIndex] > prodNum)
			lastIndex = middleIndex - 1;
		else
			firstIndex = middleIndex + 1;
	}
	
	return position;
}

void displayProd(int position, const double prices[], const string title[], const string description[])
{//displays data for searchvalue
	cout << "Title: " << title[position] << endl;
	cout << "Description: " << description[position] << endl;
	cout << "Price: $" << prices[position] << endl; 
}
