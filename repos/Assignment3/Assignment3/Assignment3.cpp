//Homework Assignment 3
//Max Comfort

// Part 1.a)
// Run 1: 1 4 ---- Output: 50.2654
// Run 2: 1 0 ---- Output: 0
// Run 3: 4 -1 --- Output: Bye!

//Part 1.c)
/*#include <iostream>
using namespace std;

int main()
{
	const double PI = 3.14159;

	char y_n;				// User's choice to run program again
	int    choice;         // User's shape choice
	double radius,         // Circle radius
		length,         // Rectangle length
		width,          // Rectangle width
		base,           // Triangle base
		height,         // Triangle height
		area;           // Area of the selected shape
	
	bool run = true;
	
	while (run)
	{
		// Display selections and request user input
		cout << "Geometry Calculator\n\n";
		cout << "1. Calculate the area of a Circle\n";
		cout << "2. Calculate the area of a Rectangle\n";
		cout << "3. Calculate the area of a Triangle\n";
		cout << "4. Quit\n\n";
		cout << "Enter your choice (1-4): ";
		cin >> choice;

		// Calculate and display the area of the selected shape
		switch (choice)
		{
		case 1:  // Area of a circle
			cout << "\nEnter the circle's radius: ";
			cin >> radius;

			if (radius < 0)
				cout << "\nThe radius can not be less than zero.\n";
			else
			{
				area = PI * radius * radius;
				cout << "\nThe area is " << area << endl;
				break;
			}

		case 2:  // Area of a rectangle
			cout << "\nEnter the rectangle's length: ";
			cin >> length;
			cout << "Enter the rectangle's width: ";
			cin >> width;

			if (length < 0 || width < 0)
				cout << "\nOnly enter positive values for length and width.\n";
			else
			{
				area = length * width;
				cout << "\nThe area is " << area << endl;
			}
			break;

		case 3:  // Area of a triangle
			cout << "Enter the length of the base: ";
			cin >> base;
			cout << "Enter the triangle's height: ";
			cin >> height;

			if (base < 0 || height < 0)
				cout << "\nOnly enter positive values for base and height.\n";
			else
			{
				area = base * height * 0.5;
				cout << "\nThe area is " << area << endl;
			}
			break;

		case 4:	 cout << "\nBye!\n";
			return 0;

		default:  cout << "\nYou may only enter 1, 2, 3, or 4.\n";
		}
		cout << "Do you want to run the program again? (Enter 'Y' or 'N')" << endl;
		cin >> y_n;

		if ((y_n == 'N') || (y_n == 'n'))
		{
			run = false;
		}
	}

	return 0;
}

*/

//Part 2
//Phone Bill Generation Software
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string phone_number;
	char charge_type;
	int usage_min;
	float bill = 0, base_rate = 0, stage1 = 0, stage2 = 0;
	char ans;
	
	do {
		
		cout << "Please Enter the Customer Phone Number with no spaces (eg 55555551234 or 555-555-1234): ";
		cin >> phone_number;

		cout << "Please Enter the Customer Type (R for Regular, B for Business): ";
		cin >> charge_type;
	
		if ((charge_type == 'R') || (charge_type == 'r') || (charge_type == 'B') || (charge_type == 'b'))
		{
			cout << "Enter the phone usage in minutes: ";
			cin >> usage_min;

			while ((usage_min < 0))
			{
				cout << "Invalid data. Minutes should be greater than or equal to zero." << endl;
				cout << "Enter the phone usage in minutes: ";
				cin >> usage_min;
				continue;
			}
			if ((charge_type == 'B') || (charge_type == 'b'))
			{
				base_rate = 99.99;
				if (usage_min < 600) (bill = base_rate);
				else if (usage_min < 700)
				{
					stage1 = (0.45 * (usage_min - 600));
				}
				else
				{
					stage1 = (0.45 * 600);
					stage2 = (0.99 * (usage_min - 700));
				}
			}

			else if ((charge_type == 'R') || (charge_type == 'r'))
			{
				base_rate = 29.99;
				if (usage_min < 200) { bill = base_rate; }
				else if (usage_min < 450)
				{
					stage1 = (0.55 * (usage_min - 200));
				}
				else {
					stage1 = (0.55 * 250);
					stage2 = (0.88 * (usage_min - 450));
				}

			}

			bill = base_rate + stage1 + stage2;
			cout << setprecision (2) << fixed;
			cout << "\nPhone Bill for: " << phone_number << endl;
			cout << "= = = = = = = = = = =" << endl;
			cout << "\nTotal Minutes Used= " << usage_min << " minutes." << endl;
			cout << "I Monthly base payment: $ " << base_rate << endl;
			cout << "Cost for Stage1 units: $ " << stage1 << endl;
			cout << "Cost for Stage2 units: $ " << stage2 << endl;
			cout << "Total cost: " << bill << endl;
		}
		else
		{
			cout << "Invalid customer type." << endl;
			cout << "Please enter R, r for regular and B, b for business customers." << endl;
			continue;
		}
		cout << "\nMore bills? (Y/N): ";
		cin >> ans;

	} while ((ans == 'Y' || ans == 'y'));

}
