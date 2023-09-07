//lab15.cpp
//Max Comfort

#include <iostream> 
using namespace std; 

void readTestandHwScore(double& test1Score, double& test2Score, double& hwScore);
double calcFinalScore(double test1, double test2, double hw);
void printFinalScore(double finalScore);

int main() { 
	double test1, test2; 
	double hw; 
	double finalScore; 
	
	readTestandHwScore(test1, test2, hw);
	calcFinalScore(test1, test2, hw);
	
	return 0;
}

void readTestandHwScore(double& test1Score, double& test2Score, double& hwScore)
{
	cout << "Enter the score for test #1: ";
	cin >> test1Score;
	cout << "Enter the score for test #2: ";
	cin >> test2Score; 
	cout << "Enter the score for the homework: ";
	cin >> hwScore;
}

double calcFinalScore(double test1, double test2, double hw)
{
	double finalScore = 0;
	finalScore = ((test1 * 0.4) + (test2 * 0.4) + (hw * 0.2));
	printFinalScore(finalScore);
	return finalScore;
}
void printFinalScore(double finalScore)
{
	if (finalScore >= 90)
	{
		cout << "The final score is: " << finalScore << endl;
		cout << "Final Grade is an A" << endl;
	}
	else if (finalScore >= 80)
	{
		cout << "The final score is: " << finalScore << endl;
		cout << "Final Grade is a B" << endl;
	}
	else if (finalScore >= 70)
	{
		cout << "The final score is " << finalScore << endl;
		cout << "Final Grade is a C" << endl;
	}
	else if (finalScore >= 60)
	{
		cout << "The final score is: " << finalScore << endl;
		cout << "Final Grade is a D" << endl;
	}
	else
	{
		cout << "The final score is: " << finalScore << endl;
		cout << "Final Grade is a big fat F" << endl;
	}
}