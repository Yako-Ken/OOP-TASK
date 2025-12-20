#include "Account.h"
#include <iostream>
using namespace std;

int Account::totalAccounts = 0;

Account::Account()
{
    accountID = 0;
    balance = 0.0;
    totalAccounts++;
}

Account::Account(int id, double bal)
{
    accountID = id;
    balance = bal;
    totalAccounts++;
}

double Account::deposit(double amount)
{
    if(amount > 0)
    {
        balance += amount;
    }
    return balance;
}

void Account::displayInfo()
{
    cout << "Account ID: " << accountID << endl;
    cout << "Balance: " << balance << endl;
}

Account Account::operator+(const Account& result)
{
    Account temp;
    temp.accountID = this->accountID;
    temp.balance = this->balance + result.balance;
    totalAccounts--;
    return temp;
}

int Account::getTotalAccounts()
{
    return totalAccounts;
}

