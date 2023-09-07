//
//  lab11.cpp
//
//Max Comfort


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double Starting_Balance,           
           Deposit,                     
           Withdrawn,                   
           Total_Deposits = 0,          
           Total_Withdraws  = 0,        
           Month_StartingBalance = 0,   
           Monthly_Interest,            
           Total_Interest = 0,          
           Monthly_EndBalance,          
           AnnualInterest;             
    

    cout << "What is the starting balance of the account: $";
    cin  >> Starting_Balance;


    cout << "\nEnter the annual interest as a decimal number (eg if annual interest is 5% enter 0.05): ";
    cin  >> AnnualInterest;
    cout << endl;

    Month_StartingBalance += Starting_Balance;

    for (int Month = 1; Month <= 3; Month++)
    {

        do
        {
            cout << "What is the total amount deposited\n"
                 << "into the account during month " << Month << ": $";
            cin  >> Deposit;

            if (Deposit < 0)
            {
                cout << "Error, invalid number.\n"
                     << "Deposits must be a positive value.\n";
            }

        }
        
        while (Deposit < 0);

        cout << endl;
        Total_Deposits += Deposit;

        do
        {
      
            cout << "What is the total amount withdrawn\n"
                 << "from the account during month " << Month << ": $";
            cin  >> Withdrawn;

            if (Withdrawn < 0 || Withdrawn > Month_StartingBalance)
            {

                if (Withdrawn < 0)
                {
                    cout << "Withdrawals must be a positive number, please chek your withdraw value and enter it again.\n";
                }
                else
                {
                    cout << "The balacne in your account must be greater than the withdrawal, please check your withdraw value and enter it again.\n";
                }
            }
          
        } while (Withdrawn < 0 || Withdrawn > Month_StartingBalance);

        cout << endl;

        Total_Withdraws += Withdrawn;

        Monthly_EndBalance = Month_StartingBalance + Deposit - Withdrawn;

        Monthly_Interest = ((Month_StartingBalance + Monthly_EndBalance) / 2.0) * (AnnualInterest / 12.0);

        Total_Interest += Monthly_Interest;

        Month_StartingBalance = Monthly_EndBalance + Monthly_Interest;
    }

    cout << "\n\tSavings Account Information\n"
         << "=======================================\n\n\n";
    cout << fixed << showpoint << setprecision(2);
    cout << "Starting balance   = $" << Starting_Balance << endl;
    cout << "Total deposits     = $" << Total_Deposits << endl;
    cout << "Total withdrawals  = $" << Total_Withdraws << endl;
    cout << "Total interest     = $" << Total_Interest << endl;
    cout << "Final balance      = $" << Month_StartingBalance << endl;
    
    
    return 0;
}
