// ********************************************************************** 
// Assignment1.cpp 
// 
// Calculates the BMI of a user when prompted to enter height and weight
// **********************************************************************

#include<iostream>;
using namespace std;

int main() {
	int user_height_inches, user_height_feet, user_weight;
	double	BMI, height_meters, weight_kg, calculate_feet, calculate_height;
	
	cout << "Welcome to BMI calculator Program\n";
	cout << "Please enter your height, (feet followed by inches), and weight (eg: 5 3 115): ";
	cin >> user_height_feet;
	cin >> user_height_inches;
	cin >> user_weight;
	
	calculate_feet = user_height_inches / 12.0 ;
	calculate_height = user_height_feet + calculate_feet;

	height_meters = calculate_height  / 3.3;
	weight_kg = user_weight / 2.2;

	BMI = weight_kg / (height_meters * height_meters);

	cout << "Your BMI is " << BMI << endl;

	return 0;
}
