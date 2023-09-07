#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	int numList[50];

	for (int i = 0; i < 50; i++)
		numList[i] = 2 * i;

	numList[10] = -20;
	numList[30] = 8;

	return 0;
}