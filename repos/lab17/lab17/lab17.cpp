//Max Comfort
//Lab 17
//lab17.cpp

#include<iostream>
using namespace std;
#include "Account.h"
int main()
{
	BankAccount myAccount(1000.50, 1111, "John William", 0.05);
	myAccount.deposit(500);
	myAccount.withdraw(200);
	myAccount.addInterest();
	myAccount.displayAccountSummary();
	return 0;
}