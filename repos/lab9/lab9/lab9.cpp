#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double seconds;
	const double gravity = 9.8;
	double distance;
	double meters;
	int count;

	cout << "Please input the time of the fall in seconds: ";
	cin >> seconds;

	cout << "Please input the height of the bridge in meters: ";
	cin >> meters;
	
	cout << "\nTime Falling: " << seconds << " seconds. Distance Fallen: " << meters << " meters\n";
	cout << "*******************************************\n\n";

	count = 0;

	if ((seconds < 0) || (meters < 0))
	{
		cout << "Warining Bad Data. Please quit the program and try again.\n";
	}

	else
	{
		while (count <= seconds)
		{
			distance = (0.5 * gravity * (count * count));
			cout << count << "\t" << distance << endl;
			count++;
			if ((distance > meters))
			{
				cout << " Warning Bad Data: The distance Fallen exceeds the height of the bridge.\n";
				break;
			}
			
		}
	}

	return 0;
}
