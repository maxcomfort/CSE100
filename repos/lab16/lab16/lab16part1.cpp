//lab16part1.cpp
//Max Comfort

#include <iostream>
using namespace std;

double getRadius(double input_radius);
double findArea(double radius);
double findCircumference(double radius);


int main() {
	double input_radius = 0; //user input radius
	double radius = 0; //the radius of the circle 
	double area = 0; //the area of the circle 
	double circumference = 0; //the circumference of the circle 
	
	//get the value of the radius from the user 
	radius = getRadius(input_radius); 
	//determine the area and circumference 
	area = findArea(radius); 
	circumference = findCircumference(radius); //output the results 
	
	cout << "A circle of radius " << radius << " has an area of: " << area <<endl; 
	cout << "and a circumference of: "<< circumference << endl; 
	
	system("PAUSE"); 
	return 0; 
}

double getRadius(double input_radius) {
	cout << "Enter the radius of the circle: ";
	cin >> input_radius;

	return input_radius;
}

double findArea(double radius) {
	double area = 3.14159 * radius * radius;

	return area;
}

double findCircumference(double radius) {

	double circumference = 2 * 3.14159 * radius;
	
	return circumference;
}