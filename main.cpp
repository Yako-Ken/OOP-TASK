#include <iostream>
#include <string>
#include "Account.h"
#include "PersonalAccount.h"
#include "BusinessAccount.h"
using namespace std;

int main()
{
    cout << "=== Banking System Demonstration ===" << endl << endl;

    cout << "Creating Personal Accounts..." << endl;
    PersonalAccount p1(101, 1000.0, "12345678901234");
    PersonalAccount p2(102, 500.0, "98765432109876");
    
    cout << "Creating Business Accounts..." << endl;
    BusinessAccount b1(201, 5000.0, "Tech Solutions Ltd.");
    BusinessAccount b2(202, 3000.0, "Global Trade Inc.");
    
    cout << "\nTotal Accounts Created: " << Account::getTotalAccounts() << endl << endl;

    cout << "=== Account Information ===" << endl;
    cout << "\nPersonal Account 1:" << endl;
    p1.displayInfo();
    
    cout << "\nBusiness Account 1:" << endl;
    b1.displayInfo();

    cout << "\n=== Deposit Operations ===" << endl;
    cout << "Depositing 500 to Personal Account 1..." << endl;
    p1.deposit(500);
    p1.displayInfo();
    
    cout << "\nDepositing 2000 to Business Account 1..." << endl;
    b1.deposit(2000);
    b1.displayInfo();

    cout << "\n=== Withdraw Operations ===" << endl;
    cout << "Withdrawing 300 from Personal Account 1..." << endl;
    p1.withdraw(300);
    p1.displayInfo();
    
    cout << "\nWithdrawing 10000 from Business Account 1..." << endl;
    b1.withdraw(10000);
    b1.displayInfo();

    cout << "\n=== Testing Withdrawal Limits ===" << endl;
    cout << "Attempting to withdraw 6000 from Personal Account 2 (limit: 5000)..." << endl;
    p2.withdraw(6000);
    
    cout << "\nAttempting to withdraw 60000 from Business Account 2 (limit: 50000)..." << endl;
    b2.withdraw(60000);

    cout << "\n=== Operator Overloading (Account Addition) ===" << endl;
    Account result = p1 + b1;
    cout << "Result of adding Personal Account 1 and Business Account 1:" << endl;
    result.displayInfo();

    cout << "\n=== Final Account Status ===" << endl;
    cout << "Personal Account 1:" << endl;
    p1.displayInfo();
    cout << "\nBusiness Account 1:" << endl;
    b1.displayInfo();
    cout << "\nTotal Accounts: " << Account::getTotalAccounts() << endl;

    return 0;
}
