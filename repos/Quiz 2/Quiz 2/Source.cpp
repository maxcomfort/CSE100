#include<iostream>
using namespace std;

int main()
{

	const int CAL_PER_SERVING = 300, COOKIES_PER_SERVING = 4;
	int cookies;
	double caloriesConsumed;

	cout << "How many cookies did you eat? ";
	cin >> cookies;

	caloriesConsumed = (cookies / COOKIES_PER_SERVING) * CAL_PER_SERVING;

	cout << "Caloried Consumed = " << caloriesConsumed << endl;

	return 0;
}