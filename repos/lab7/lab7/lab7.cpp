//This programs calculates the area of a square, circle and right triangle after
//the user inputs a menu choice and the values needed to calculate the area.
//Max Comfort
#include <iostream>
using namespace std;

int main()
{
	const double pi = 3.14;
	int choice; //Menu choice
	double side_square; //user inputs one side of square to determine area
	double radius; //user inputs radius of circle to determine area
	double leg1, leg2; //user inputs leg1 and leg2 of a right triangle
	double area_square, area_circle, area_rtriangle; //Outcomes for the area formulas

	cout << "   Area Calculator Menu\n\n";
	cout << "1. Area of a square\n";
	cout << "2. Area of a circle\n";
	cout << "3. Area of a right triangle\n";
	cout << "4. Quite the Program\n\n";
	cout << "Enter your choice: ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "Enter side value of the square: ";
		cin >> side_square;
		area_square = side_square * side_square;
		cout << "The area of the square is : " << area_square << endl;
		break;

	case 2:
		cout << "Enter the radius of the circle: ";
		cin >> radius;
		area_circle = pi * radius * radius;
		cout << "The area of the circle is : " << area_circle << endl;
		break;

	case 3:
		cout << "Enter the vale of leg 1 for the right triangle: ";
		cin >> leg1;
		cout << "Enter the value of leg 2 for the right triangle: ";
		cin >> leg2;
		area_rtriangle = (leg1 * leg2) / 2;
		cout << "The area of the right triangle is : " << area_rtriangle << endl;
		break;

	case 4:

		cout << "End of program." << endl;
		break;

	default:

		cout << "The valid choices are 1 through 4. Run the\n"
			<< "program again and select one of those.\n";
		break;
	}

	return 0;
}