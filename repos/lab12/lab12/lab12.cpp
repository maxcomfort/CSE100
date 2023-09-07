//lab12.cpp
//Max Comfort

//Prelab
//Question 1.) 
//Output: 10, 80, 68. This program display the numbers in the array if after
//using the modulo % 2, it equals 0. 10%2=0. 11%2=1, 67%2=1, 80%2=0, 68%2=0.

//Question 2.) 
//Output: Flagstaff.
//This loop compares the length of each city in the array from index 0 to index 4. 
//It first compares the length of Tempe to New York. New York becomes the nex max
//length. New York is greater than length than Atlanta, but shorter than Flagstaff. 
//Flagstaff becomes the new max length and is greater than Chicago, which makes it
//the final output.

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	const int size = 10;
	string storeNumber[size] = { "0", "66", "25", "88", "101", "74", "82", "105", "303", "42" };
	double storeSales[size] = { 1357, 2200, 984, 1149, 447, 8000, 7732, 240, 109, 888 };
	int max = storeSales[0];
	int min = storeSales[0];
	int maxSales = 0, minSales = 0;
	double totalSales = 0;
	double average;

	for (int i = 0; i < size; i++)
	{
		if (storeSales[maxSales] > storeSales[i])
			maxSales = i;
	}
	for (int i = 0; i < size; i++)
	{
		if (storeSales[minSales] < storeSales[i])
			minSales = i;
	}
	for (int i = 0; i < size; i++)
	{
		totalSales += storeSales[i];
		average = totalSales / size;
	}

	cout << setprecision(2) << fixed;
	cout << "Store Number: " << storeNumber[minSales] << endl;
	cout << "Min Sales: $" << storeSales[minSales] << endl;
	cout << "\nStore Number: " << storeNumber[maxSales] << endl;
	cout << "Max Sales: $" << storeSales[maxSales] << endl;
	cout << "\nAverge Sales: $" << average << endl;
	
	return 0;
}