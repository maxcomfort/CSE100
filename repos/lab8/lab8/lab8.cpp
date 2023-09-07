//1.1) The expected output for line 12 is 11.
// The expecte output for line 18 is 0.
//
//1.2)
// The observed output for line 12 is 11.
// The observed output for line 18 is 0. 

// **************************************************************** 
// lab8.cpp 
// 
// Use a while loop to print many messages declaring your 
// passion for computer science 
// **************************************************************** 
#include<iostream> 
using namespace std; 
int main (){
	int numTimes;
	
cout << "How many times should I print? ";
cin >> numTimes;

int count = 1;
while(count <= numTimes) 
{ 
	cout << count << " I love Computer Science!!" << endl;
		count++;
}
cout << "Output the printed this message " << numTimes << " times." << endl;
}

