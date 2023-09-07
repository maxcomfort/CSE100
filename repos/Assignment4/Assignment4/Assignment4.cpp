//Homework Assignment 4
//Max Comfort

/*Part 1 - 1)
Output: 5678910111213141516171819202122232425262728293031323334353637383940414243444546474849505
		15253545556575859606162636465666768697071727374757677787980818283848586878889909192939495969798991
		00101102103104

Part 1 - 2) 
Output: !lwt d,duyrv a
The program takes the last character of the string and then every other character and space before it and 
displays it. 

Part 1 -3)
#include <iostream>
using namespace std;

int main()
{
	int input, coffee = 0, coke = 0, oj = 0, tea = 0, count = 0, person=0;

	cout << "Each person participating in the survey should choose their favorite beverage from the following list:\n 1. Coffee 2. Tea 3. Coke 4. Orange Juice\n\n";

	do
	{
		person++;
		cout << "Please input the favorite beverage of person #" << person << ": Choose 1, 2, 3, or 4 from the above menu or -1 to exit the program" << endl;
		cin >> input;
		
			switch (input)
			{
			case -1:
				person--;
				break;
			case 1:
				coffee++;
				break;
			case 2:
				tea++;
				break;
			case 3:
				coke++;
				break;
			case 4:
				oj++;
				break;
			default:
				cout << "Invalid entry. Please enter 1-4 or -1 to quit the program.\n\n";
				person--;
			}

	} while (input != -1);

	if (input == -1)
	{
		cout << "\nThe total number of people surveyed is " << person << ". The results are as follows:\n";
		cout << "Beverage Number of Votes\n";
		cout << "********************************\n";
		cout << "Coffee " << coffee;
		cout << "\nTea " << tea;
		cout << "\nCoke " << coke;
		cout << "\nOrange Juice " << oj << endl;
	}
	return 0;
}
*/

//Part 2 - B)
/*
#include <iostream>

using namespace std;

int gcd(int a, int b)

{
	if (a == 0)

		return b;

	return gcd(b % a, a);
}

int ngcd(int nums[], int n)

{
	int result = nums[0];

	for (int i = 1; i < n; i++)

		result = gcd(nums[i], result);

	return result;
}

int main()

{

	int* dynamicArray;

	int size;

	do
	{
		cout << "Please enter the number of cities: ";
		cin >> size;
		if (size < 0)
		{
			cout << "Number of cities cannot be negative. Please re-enter.\n\n";
		}
		if (size == 0)
		{
			return 0;
		}

	} while (size <= 0);

	dynamicArray = new int[size];

	for (int i = 0; i < size; i++)
	{
		do
		{
			cout << "Enter the population of City " << i+1 << ": ";
			cin >> dynamicArray[i];

			if (dynamicArray[i] < 0)
			{
				cout << "Population cannot be negative. Please re-enter.\n\n";
			}
		} while (dynamicArray[i] <= 0);
	}

	cout << endl << "\n\n\t\tPOPULATION" << endl;

	int unit = ngcd(dynamicArray, size);

	cout << "\t(each * = " << unit << " people)\n" << endl;

	for (int i = 0; i < size; i++)
	{
		cout << "City " << i+1 << ": ";
		for (int j = 0; j < dynamicArray[i] / unit; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
*/

//Part 2 - A)
#include<iostream>
using namespace std;

int main() 
{
	const int numCities = 3;
	int population[numCities];

	for (int i = 0; i < numCities; i++)
	{
		do
		{
			cout << "Enter the population of City " << i + 1 << ": ";
			cin >> population[i];

			if (population[i] < 0)
			{
				cout << "Population cannot be negative. Please re-enter.\n\n";
			}
		} while (population[i] <= 0);
	}
	
	int pop1 = population[0] / 1000;
	int pop2 = population[1] / 1000;
	int pop3 = population[2] / 1000;

	cout << "\n\n\t\tPOPULATION\n\t(each * = 1000 people)\n";
	cout << "\nCity 1: ";

	for (int i = 0; i < pop1; ++i)
	{
		cout << "*";
	}
	
	cout << "\nCity 2: ";

	for (int i = 0; i < pop2; ++i)
	{
		cout << "*";
	}

	cout << "\nCity 3: ";
	for (int i = 0; i < pop3; ++i)
	{
		cout << "*";
	}
	cout << endl;

	return 0;
}

