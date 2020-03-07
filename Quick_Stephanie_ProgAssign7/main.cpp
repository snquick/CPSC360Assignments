/*  Author:Stephanie Quick
    Course: Applied Programming Assignment
    Program: Inheritance: Program 7
    Date: March 6th, 2020
*/
#include <iostream>
#include "Account.h"
#include "CheckingAcct.h"
#include "LoanAcct.h"

int main() {
	Account s1("Stephanie", 1111, 7201.19);
	std::cout << "Account Name:\t\t\t\t" << s1.getOwnerName() << std::endl;
	std::cout << "Account Number:\t\t\t\t" << s1.getAcctNum() << std::endl;
	std::cout << "Balance:\t\t\t\t$" << s1.getBalance() <<std::endl;

	CheckingAcct s2("Stephanie Checking", 2222, 2839.10);
	std::cout << "\nAccountName:\t\t\t\t" << s2.getOwnerName() << std::endl;
	std::cout << "Account Number:\t\t\t\t" << s2.getAcctNum() << std::endl;
	std::cout << "Current Balance:\t\t\t$" << s2.getBalance() << std::endl;
	std::cout << "Depositing $500" << std::endl;
	s2.Deposit(500);
	std::cout << "Current Balance after deposit:\t\t$" << s2.getBalance() << std::endl;
	std::cout << "Withdrawing $123" << std::endl;
	s2.Withdraw(123);
	std::cout << "Current Balance after withdrawl:\t$" << s2.getBalance() << std::endl;

	LoanAcct s3("Stephanie Loan", 3333, 10298.30, 0.20);
	std::cout << "\nAccountName:\t\t\t\t" << s3.getOwnerName() << std::endl;
	std::cout << "Account Number:\t\t\t\t" << s3.getAcctNum() << std::endl;
	std::cout << "Current Balance:\t\t\t$" << s3.getBalance() << std::endl;
	std::cout << "Paying $234 to Loan Balance." << std::endl;
	s3.PayBalance(234);
	std::cout << "Remaining Balance:\t\t\t$" << s3.getBalance() << std::endl;
	std::cout << "Monthly Interest Added on Current Loan Balance" << std::endl;
	std::cout << "Interest Rate: " << s3.getIntRate() << "%" << std::endl;
	s3.CalcInterest();
	std::cout << "Current Balance:\t\t\t$" << s3.getBalance() << std::endl;

}




