//Max Comfort
//Lab 17
//Account.h

#include <string>
using namespace std;

class BankAccount {
public:
	double getBalance();
	void deposit(double);
	void withdraw(double);
	void addInterest();
	BankAccount();
	BankAccount(double, int, string, double);
	void displayAccountSummary();

private:
	double balance;
	int accountNumber;
	string ownerName;
	double interestRate;
};
