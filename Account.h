#ifndef ACCOUNT_H

#define ACCOUNT_H



class Account

{

protected:

    int accountID;

    double balance;

    static int totalAccounts;


public:

    Account();

    Account(int id, double bal);

    void choice();

    double deposit(double amount);

    virtual void displayInfo();

    static int getTotalAccounts();

    Account operator+(const Account& result);

};



#endif
