//ec2.cpp
//Max Comfort

#include <iostream>
using namespace std;

void displayMenu();
double fahrenheitToCelsius(double fTemp);
double milesToKilometes(double miles);
double litersToGallons(double gallons);

int main() {
	double fTemp;
	double miles;
	double liters;
	int input;
	bool flag = true;

	displayMenu();
	do {
		cout << "\nChoose a number from the menu above.\n";
		cin >> input;
		
			switch (input) {
			case 1:
				cout << "Enter degrees in Fahrenheit:\n";
				cin >> fTemp;
				cout << "\nThe temperature in degrees Celsius is: " << fahrenheitToCelsius(fTemp) << endl;
				break;
			case 2:
				cout << "Enter number of miles to convert to kilometers: \n";
				cin >> miles;
				cout << "\nThe distance in kilometers is: " << milesToKilometes(miles) << endl;
				break;
			case 3:
				cout << "Enter number of liters to convert to gallons: \n";
				cin >> liters;
				cout << "\nThe amount in liters is: " << litersToGallons(liters) << endl;
				break;
			case 4:
				cout << "Quitting the program....\n";
				return 0;
			default:
				cout << "Invalid choice entered. Please choose between 1 and 4.\n";
				flag = false;
				continue;
			}
		}while (flag != true);

	return 0;
}

void displayMenu() {
	cout << "\t\tWelcome to the Conversion Program\n";
	cout << "\t\t=================================\n";
	cout << "1. Fahrenheit to Celsius\n";
	cout << "2. Miles to Kilometers\n";
	cout << "3. Liters to Gallons\n";
	cout << "4. Exit the program\n";
}
	
	double fahrenheitToCelsius(double fTemp) {
		double celsius;
		celsius = (5.0 / 9.0) * (fTemp-32);
			return celsius;
	}

	double milesToKilometes(double miles) {
		double kilometers;
		kilometers = miles * 1.609344;
			return kilometers;
	}

	double litersToGallons(double liters) {
		double gallons;
		gallons = liters * 0.264172;
			return gallons;
	}

