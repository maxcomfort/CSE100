// Part 1:
//The problem-solving process of writing a program consists of 9 steps to help one create a program logically. 
//The first step consists of planning, which is stating the purpose, input, process, and output of the program. 
//The second step is visualizing how the program will run on the computer by creating it in your mind. 
//The third step will be to use a design tool like a hierarchy, flowchart, or pseudocode to model the program. 
//Step 4 is to check the model for logical error by checking the model for erroneous results. 
//Next step will be to type the code, save it, and compile it. If errors are reported, they must be corrected. 
//Steps 5 and 6 must be repeated until the program is free of compile-time errors. 
//Step 7 is to run the program with test data for input.
//Step 8 is to correct any errors found while running the program, such as runtime errors. 
//Repeat steps 5 through 8 as many times as necessary. 
//The final step is to validate the results of the program when it is believed all runtime errors are corrected, 
//and the program runs as necessary. 






// *************************************************************** 
// Names.cpp 
// 
// Prints a list of student names with their hometowns 
// and intended major 
// *************************************************************** 
#include<iostream> 
using namespace std; 
int main() { 
	// ------------------------ 
	// main prints the list 
	// ------------------------ 
	cout<<endl; 
	cout<<"\tName\t\tHometown\t\tMajor"<<endl; 
	cout<<"\t====\t\t========\t\t====="<<endl; 
	cout << "\tSally\t\tRoanoke\t\t\tComputer Science" << endl; 
	cout << "\tAlexander\tWashington\t\tMath" << endl; 
	cout << "\tMax\t\tRedondo Beach\t\tElectrical Engineering" << endl;
	cout << "\tCarrie\t\tLexington\t\tPlanetary Sciences" << endl;
	cout << "\tRand\t\tLoveland\t\tEngineering Management" << endl;
	cout << endl; 
}