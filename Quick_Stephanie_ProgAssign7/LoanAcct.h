/*  Author:Stephanie Quick
    Course: Applied Programming Assignment
    Program: Inheritance: Program 7
    Date: March 6th, 2020
*/

#include "Account.h"
#ifndef LOANACCT_H_
#define LOANACCT_H_

// Derived Class of Account
class LoanAcct : public Account {
private:
	// Initialized Variables
	double IntRate;

public:

	//Setters
	void setIntRate(double intRate);

	// Getters
	double getIntRate() const;

	// Functions
	void PayBalance(double num);
	void CalcInterest();

	// Constructor
	LoanAcct(std::string ownerName, int num, double balance, double interest);
};



#endif /* LOANACCT_H_ */
