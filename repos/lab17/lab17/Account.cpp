//Max Comfort
//Lab 17
//Account.cpp

#include<string>
#include<iostream>
#include<iomanip>

using namespace std;
#include "Account.h"

BankAccount::BankAccount()
{
	balance = 0.00;
	accountNumber = 0;
	ownerName = " ";
	interestRate = 0.0;
}

BankAccount::BankAccount(double bal, int acctnum, string on, double intrate)
{
	balance = bal;
	accountNumber = acctnum;
	ownerName = on;
	interestRate = intrate;

}

double BankAccount::getBalance()
{
	return balance;
}

void BankAccount::deposit(double depositAmt)
{
	balance = balance + depositAmt;
}

void BankAccount::withdraw(double withdrawAmt)
{
	balance = balance - withdrawAmt;
}

void BankAccount::addInterest()
{
	balance = balance * (1.0 + interestRate);
}

void BankAccount::displayAccountSummary()
{
	cout << setprecision(2) << fixed;
	cout << "Account Number : " << accountNumber << endl;
	cout << "Owner's Name : " << ownerName << endl;
	cout << "Balance : $" << balance << endl;
	cout << "Interest rate : " << interestRate << "%" << endl;
}