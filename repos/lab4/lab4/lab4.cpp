// lab4.cpp 
// This programs calculates how many large and small brownies a baking pan will produce when the user enters the length and width of the pan. 
// Max Comfort
#include <iostream>;
using namespace std; 

int main()  { 
	double pan_width, pan_length, pan_surfaceArea;
	int small_brownies, large_brownies;
	
	cout << "Enter pan length in inches: ";
	cin >> pan_length;
	cout << "Enter pan width in inches: ";
	cin >> pan_width;

	pan_surfaceArea = pan_width * pan_length;
	small_brownies = static_cast<int>(pan_surfaceArea / 1);
	large_brownies = static_cast<int>(pan_surfaceArea / 4);

	cout << "A " << pan_length << " X " << pan_width << " inch pan can hold " << small_brownies << " small brownies or " << large_brownies << " large brownies." << endl;
	
	return 0; 
}