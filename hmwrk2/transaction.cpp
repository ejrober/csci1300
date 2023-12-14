#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    double current_balance = 1000;
    double minimum_balance = 100;
    double withdrawal_amount;

    cout << "Enter the amount to be withdrawn from your bank account:" <<endl;
    cin >> withdrawal_amount;
    if(withdrawal_amount < 0)
    {
        cout << "Invalid input. Withdrawn amount must be a non-negative value." << endl;
        return 0;
    }
    if((current_balance - withdrawal_amount) > minimum_balance)
    {
        current_balance = current_balance - withdrawal_amount;
        cout << "Transaction Successful! You're balance is $" << fixed << setprecision(2) << current_balance << endl;
    }
    else
    {
        cout << "Transaction Failed!" << endl;
        return 0;
    }
    return 1;
}