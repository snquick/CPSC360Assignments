/*  Author:Stephanie Quick
    Course: Applied Programming Assignment
    Program: Inheritance: Program 7
    Date: March 6th, 2020
*/


#include "Account.h"

// Default Constructor
Account::Account() {
	ownerName = "Unknown";
	acctNum = 0;
	balance = 0.0;
}

// 3-param Constructor
Account::Account(std::string name, int acctN, double bal) {
	ownerName = name;
	acctNum = acctN;
	balance = bal;
}

int Account::getAcctNum() const {
	return acctNum;
}

void Account::setAcctNum(int aNum) {
	acctNum = aNum;
}

double Account::getBalance() const {
	return balance;
}

void Account::setBalance(double bal) {
	balance = bal;
}

const std::string& Account::getOwnerName() const {
	return ownerName;
}

void Account::setOwnerName(const std::string &oName) {
	ownerName = oName;
}





