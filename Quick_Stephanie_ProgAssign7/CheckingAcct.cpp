/*  Author:Stephanie Quick
    Course: Applied Programming Assignment
    Program: Inheritance: Program 7
    Date: March 6th, 2020
*/


#include "CheckingAcct.h"

// Constructor
CheckingAcct::CheckingAcct(std::string ownerN, int acctN, double bal) {
	ownerName = ownerN;
	acctNum = acctN;
	balance = bal;
}

void CheckingAcct::Deposit(double n) {
	balance += n;
}

void CheckingAcct::Withdraw(double n) {
	balance -= n;
}



