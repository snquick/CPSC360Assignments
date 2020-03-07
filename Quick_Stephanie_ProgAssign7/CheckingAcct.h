/*  Author:Stephanie Quick
    Course: Applied Programming Assignment
    Program: Inheritance: Program 7
    Date: March 6th, 2020
*/

#include "Account.h"
#include <string>
#ifndef CHECKINGACCT_H_
#define CHECKINGACCT_H_

// Derived Class of Account
class CheckingAcct : public Account{

public:
	// Functions
	void Deposit(double balance);
	void Withdraw(double balance);

	// Constructor
	CheckingAcct(std::string ownerNum, int n, double balance);
};



#endif /* CHECKINGACCT_H_ */
