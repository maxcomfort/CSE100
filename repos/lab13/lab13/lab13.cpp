//lab13.ccp
//Max Comfort

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string month;
	double snowfallData[7][2];
	double sum = 0;
	double highest, date;

	cout << "Please enter the month of the snow report: ";
	getline(cin, month);

	cout << "\nPlease enter the date and corresponding snowfall amount.\n";
	cout << "Date\tSnowfall:\n";

	for (int rows = 0; rows < 7; rows++) 
	{
		for (int col = 0; col < 2; col++) 
		{
			cin >> snowfallData[rows][col];	
		}
		
	}
	for (int rows = 0; rows < 7; rows++)
	{
		sum += snowfallData[rows][1];
	}

	highest = snowfallData[0][0];
	for (int rows = 0; rows < 7; rows++)
	{
			if (highest < snowfallData[rows][1]) {
				highest = snowfallData[rows][1];
			}
			if (highest == snowfallData[rows][1]) {
				date = snowfallData[rows][0];
			}
	}
	

	cout << "\nSnow report: " << month << " " << snowfallData[0][0] << " - " << snowfallData[6][0] << endl;
	cout << "Date\tSnowfall\n";
	for (int rows = 0; rows < 7; rows++) {
		
		cout << static_cast<int>(snowfallData[rows][0]) << "\t" <<setprecision(2) << fixed << snowfallData[rows][1];

		cout << endl;
	}

	cout << "The highest snowfall is " << setprecision(2) << fixed << highest << " on the " << static_cast<int>(date) << " day of " << month << endl;
	cout << "The average snowfall is " << setprecision(2) << fixed << sum / 7.0;
	
	
	cout << endl;
	return 0;
}



	

	






