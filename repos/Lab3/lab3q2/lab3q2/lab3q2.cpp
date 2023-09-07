// Lab3q2.cpp

#include <iostream>
using namespace std;

int main()
{
    double degrees_F;
    double degrees_C;
    cout << "Enter the temperature in degress Fahrenheit: ";
    cin >> degrees_F;
    degrees_C = (5.0 / 9) * (degrees_F - 32);;
    cout << "The temperature in degress Fahrenheit is " << degrees_F << endl;
    cout << "The temperature in degrees Celsius is " << degrees_C << endl;

    return 0;
}


