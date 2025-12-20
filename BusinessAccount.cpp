#include "BusinessAccount.h"

#include <iostream>

using namespace std;



BusinessAccount::BusinessAccount(int id, double bal, string name)

    : Account(id, bal)

{

    businessName = name;

}



double BusinessAccount::withdraw(double amount)

{

   if(amount <= 0){

        cout << "ERROR : Invalid amount" << endl;

        return 0.0;

    }



    else if(amount > 50000){

        cout << "ERROR : Maximum withdrawal limit is 50000" << endl;

        return 0.0;

    }

    else if(amount > balance){

        cout << "ERROR : Insufficient balance" << endl;

        return 0.0;

    }


    else{

    balance -= amount;

    return balance;
    }

}



BusinessAccount::~BusinessAccount()

{

    cout<<"\n\n------------------------------ Business Account Object Destroyed! ------------------------------\n\n";


}
