//Homework Assignment 2 (20 Points)
//CSE 100, ASU-Online
//CIDSE, ASU-Online
//Max Comfort

//Part 1. 1)
//This program calculates the velocity of sound when the user
//enters the air temperature in degress C
//#include <iostream>;
//using namespace std;

//int main()
//{
//	double temp_C;
//	double velocity;
//
//	cout << "Enter the air temperature in degress Celsius: \n";
//	cin >> temp_C;
//	velocity = 331.3 + 0.61 * temp_C;
//	cout << "At " << temp_C << " degress Celsius, the velocity of sound is " << velocity << " m/s";
//
//	return 0;
//}

//Part 1. 2)
// 3+4-5 = 2
// 4+4*3/6 = 6
// 6+12*2-8 = 22
// 6+12*(2-8) = -66
// (19-3) * (2+2)/4 = 16

//Part 1. 3)
//myString1 = This
//myString 2 = s my first C++ program.
//myChar1 = ' ' (space)
//myChar2 = i

//Part 2. 4)
#include <iostream>;
#include <string>;
using namespace std;

int main()
{
	string instructor_name, user_name, food, number, adjective, color, animal;

	cout << "Please enter the following data for the Mad Lib:\n\n";
	cout << "a) Name of instructor: \n";
	getline(cin, instructor_name);
	cout << "b) Your name: \n";
	getline(cin, user_name);
	cout << "c) A food: \n";
	getline(cin, food);
	cout << "d) A number between 100 and 120: \n";
	getline(cin, number);
	cout << "e) An adjective: \n";
	getline(cin, adjective);
	cout << "f) A color: \n";
	getline(cin, color);
	cout << "g) An animal: \n";
	getline(cin, animal);
	
	cout << "\nDear Instructor " << instructor_name << ",\n";
	cout << "I am sorry than I am unable to turn in my homeowrk at this time. First, I ate a rotten " << food << ",\n";
	cout << "which made me turn " << color << " and extremely ill. I come down with a fever of " << number << ".\n";
	cout << "Next, my " << adjective << " pet " << animal << " must have smelled the remains of the " << food << " on my\n";
	cout << "homework, becuase he ate it. I am currently rewriting my homework and hope you will accept it\n";
	cout << "here.\n";
	cout << "Sincerely,\n";
	cout << user_name << endl;

	return 0;
}