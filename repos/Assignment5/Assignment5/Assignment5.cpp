//Max Comfort
//Assignment 5

//Part 1. a) i=10	n=20
//Part 1. b) i=20	n=10
//Part 1. c) The swapValue function is using the pass by value technique, 
//which a copy of the variable values is passed to the function but not returned
//to the main function. The swapReference function is using the pass by reference 
//technique, which the variable values will be passed back to the main function.

//Part 2
#include <iostream>
#include <cctype>
using namespace std;

bool grade(char correctAnswers[], char studentAnswers[], int size);

int main()
{
    const int size = 10;
    char correctAnswers[size] = {'B', 'D', 'A', 'D', 'C', 'A', 'B', 'A', 'C', 'D'};
    char studentAnswers[size];
    int invalid = 0;
    char input;
    
    for (int i = 0; i < size; i++)
    {
        cout << "Please enter the answer for the question " << i +1 << ": \n";
        cin >> input;
        input = toupper(input);
       
       
        while (input != 'A' && input != 'B' && input != 'C' && input != 'D')
        {
            invalid++;
        
            if (invalid > 5)
            {
                cout << "GOOD BYE" << endl;
                return 0;
            }
            
            cout << "Invalid answer. Please enter A/a, B/b, C/c, or D/d only: \n";
            cin >> input;
            input = toupper(input);
        }

        studentAnswers[i] = input;
    }
    
  grade(correctAnswers, studentAnswers, size);

    cout << endl;
    system("PAUSE");
} 

bool grade(char correctAnswers[], char studentAnswers[], int size)
{
    int correct = 0;
    
    for (int i = 0; i < size; i++)
    {
        if (correctAnswers[i] == studentAnswers[i])
        {
            correct++;
        }
    }

    if (correct >= 8)
    {
        cout << "\nCongratulations! You have passed exam." << endl;
        cout << "Total number of correct answers is: " << correct << endl;
        cout << "Total number of incorrect answers is: " << (size - correct) << endl;
        return true;
    }
    else
    {  
        cout << "\nSorry, you have not passed the exam!" << endl;
        cout << "Total number of correct answers is: " << correct << endl;
        cout << "Total number of incorrect answers is: " << (size - correct) << endl;
        return false;
    } 
} 
