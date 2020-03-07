/*  Author:Stephanie Quick
    Course: Applied Programming Assignment
    Program: Inheritance: Program 7
    Date: March 6th, 2020
*/

#include "LoanAcct.h"

// Constructor
LoanAcct::LoanAcct(std::string oN, int aN, double bal, double interest) {
	ownerName = oN;
	acctNum = aN;
	balance = bal;
	IntRate = interest;
}

double LoanAcct::getIntRate() const {
	return IntRate;
}

void LoanAcct::setIntRate(double intRate) {
	IntRate = intRate;
}

void LoanAcct::PayBalance(double num) {
	balance -= num;
}

void LoanAcct::CalcInterest() {
	float interest = IntRate * balance;
	balance += interest;
}





