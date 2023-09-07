// Lab3q1.cpp

#include <iostream>
using namespace std;

int main()
{
    double user_weight;
    double weight_kilos;
    cout << "Enter your weight in pounds: ";
    cin >> user_weight;
    weight_kilos = user_weight / 2.2;
    cout << "Your weight in kilograms is " << weight_kilos << endl;

    return 0;
}


