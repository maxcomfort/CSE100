// This program prints student's grade if a student's average falls 
// between the specified parameters, otherwise it prints "Invalid Data" if average
// is greater than 100 or less than 0
// Max Comfort
#include <iostream> 
using namespace std; 
int main() { 
	float average; // holds the grade average 
	cout << "Input your average:" << endl; 
cin >> average; 

if ((average >= 0) && (average <= 100)) {
	if ((average >= 90) && (average <= 100))
	{
		cout << "You have an A." << endl;
	}

	if ((average >= 80) && (average <= 89))
	{
		cout << "You have a B." << endl;
	}

	if ((average >= 60) && (average <= 79))
	{
		cout << "You Pass." << endl;
	}
	if ((average >= 0) && (average <= 59))
	{
		cout << "You Fail." << endl;
	}
}
else
cout << "Invalid data." << endl;

return 0; 
}