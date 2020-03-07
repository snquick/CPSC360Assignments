/*  Author:Stephanie Quick
    Course: Applied Programming Assignment
    Program: Inheritance: Program 7
    Date: March 6th, 2020
*/

#include <string>

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

class Account {
protected:

	// Intialized Variables
	std::string ownerName;
	int acctNum;
	double balance;

public:
	// Setters
	void setBalance(double balance);
	void setAcctNum(int aNum);
	void setOwnerName(const std::string &ownerName);

	// Getters
	double getBalance() const;
	int getAcctNum() const;
	const std::string& getOwnerName() const;

	// Constructors
	Account();
	Account(std::string ownerName, int acctNum, double bal);
};



#endif /* ACCOUNT_H_ */
