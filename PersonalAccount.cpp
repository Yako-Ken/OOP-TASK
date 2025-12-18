
#include "PersonalAccount.h"
#include <iostream>
using namespace std;

PersonalAccount::PersonalAccount(int id, double bal, string nID)
    : Account(id, bal)
{
}

double PersonalAccount::withdraw(double amount)
{
    if(amount <= 0){
        cout << "ERROR : Invalid amount" << endl;
        return 0.0;
    }

    if(amount > 5000){
        cout << "ERROR : Maximum withdrawal limit is 5000" << endl;
        return 0.0;
    }
    if(amount > balance){
        cout << "ERROR : Insufficient balance" << endl;
        return 0.0;
    }

    balance -= amount;
    return balance;
}

PersonalAccount::~PersonalAccount()
{

}
