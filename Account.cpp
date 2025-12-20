#include "Account.h"
#include "PersonalAccount.h"
#include "BusinessAccount.h"
#include <iostream>

using namespace std;



int Account::totalAccounts = 0;



Account::Account()

{
    cout<<"Welcome to our Bank :)\n\n";
    accountID = 0;

    balance = 0.0;

    totalAccounts=0;

}



Account::Account(int id, double bal)

{

    accountID = id;

    balance = bal;

    totalAccounts++;

}

void Account::choice(){
       char s;
    do {


    string answer,answer2,nID,name;
	int id;
	double bal;
    cout<<"Your account is personal or business. (p/b)?\n"<<endl;
    cin>>answer;
    if (answer=="p"|| answer=="P"){
        cout<<"Enter your id and balance and national ID respectively.\n";
        cin>>id>>bal>>nID;
        PersonalAccount pA(id,bal,nID);
    	cout<<"Do you want to deposit or withdraw ? (d/w)\n"<<endl;
    	cin>>answer2;
    	if(answer2=="d" || answer2=="D"){
    		cout<<"Enter deposit amount.\n"<<endl;
            double amount;cin>>amount;
    		pA.deposit(amount);
    		pA.displayInfo();
    		cout<<"Accounts created= "<<pA.getTotalAccounts();
		}
		else if (answer2=="w" || answer2=="W"){
            cout<<"Enter withdraw amount.\n"<<endl;
            double amount;cin>>amount;
    		pA.withdraw(amount);

    		pA.displayInfo();
    		cout<<"Accounts created= "<<pA.getTotalAccounts();
		}
	}
	else if (answer=="b"|| answer=="B"){
        cout<<"Enter your id and balance and company name respectively.\n";
        cin>>id>>bal>>name;
        BusinessAccount bA(id,bal,name);
    	cout<<"Do you want to deposit or withdraw ? (d/w)"<<endl;
    	cin>>answer2;
    	if(answer2=="d" || answer2=="D"){
    		cout<<"Enter deposit amount.\n"<<endl;
            double amount;cin>>amount;
    		bA.deposit(amount);

    		bA.displayInfo();
    		cout<<"Accounts created= "<<bA.getTotalAccounts()<<endl;
		}
		else if (answer2=="w" || answer2=="W"){
            cout<<"Enter withdraw amount.\n"<<endl;
            double amount;cin>>amount;
    		bA.withdraw(amount);

    		bA.displayInfo();
    		cout<<"Accounts created= "<<bA.getTotalAccounts()<<endl;

		}
	}
	cout << "\nIf you want to Continue : Enter C\n";
    cin >> s ;
}
 while (s=='c'||s=='C');

}
double Account::deposit(double amount)

{

    if(amount > 0)

    {

        balance += amount;
        return balance;

    }
    else {
        cout<<"ERROR: Invalid amount.\n";
        return 0.0;
    }


}



void Account::displayInfo()

{

    cout << "Your account info:\nAccount ID: " << accountID << endl;

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
