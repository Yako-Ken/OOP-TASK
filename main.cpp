#include <iostream>
#include <string>
#include "Account.h"
#include "PersonalAccount.h"
#include "BusinessAccount.h"
using namespace std;

int main()
{
    Account a1,a2;
    cout<<"--------------- Welcome to our Bank :) ---------------\n\n";
    cout<<"---------------First Account ---------------\n";
    a1.choice();
    cout<<"--------------- Second Account ---------------\n";
    a2.choice();
    cout<<"First account balance + Second account balance= "<<a1+a2;
    return 0;
}
