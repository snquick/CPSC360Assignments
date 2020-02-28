/*  Author:Stephanie Quick
    Course: Applied Programming Assignment
    Program: Classes and Objects: Program 5 (Checking out Books)
    Date: February 27th, 2020

    -----------------Update-------------------
    Author: Stephanie Quick
    Course: Applied Programming Assignment
    Program: Operator Overloading: Program 6 (Overloading Operators)
    Date: February 27th, 2020
*/

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Book.h"

// Default constructor
// Setting the value of the title to "no title"
Book::Book() {
	Title = "No Title";
	srand(time(0));
	bookID = rand() % 1000 +1; // Random number 0 - 1000
	checkedOut = false; } // checkOut is set to false

// Constructor w/ parameters 
Book::Book(std::string title, int bookId, bool bcheckedOut){
	Title = title;
	bookID = bookId;
	checkedOut = bcheckedOut; }

// Copy constructor
Book::Book(const Book &bookObj){
	Title = bookObj.Title;
	bookID = bookObj.bookID;
	checkedOut = bookObj.checkedOut; }

std::string Book::getTitle(){
	return Title; }

int Book::getbookID(){
	return bookID; }

bool Book::isCheckedOut(){
	return checkedOut; }

void Book::setbookID(int bookId){
	bookID = bookId; }

void Book::setTitle(std::string title){
	Title = title; }

void Book::returnBook(){
	checkedOut = false; }

void Book::borrowBook(){
	if(isCheckedOut() == true)
		std::cout << "Book has been checked out. Sorry Brother." << std::endl;
	else
		checkedOut = true; }

std::string Book::bookStatus(){
	std::string bA = "Book available!";
	std::string bNA = "Book not available. Sorry.";
	if (isCheckedOut() == false)
		return bA;
	else
		return bNA;
}

Book Book::operator=(const Book& right) {
	Title = right.Title;
	bookID = right.bookID;
	checkedOut = right.checkedOut;
	return *this;
}

Book Book::operator+(const Book& right) {
	Book temp;
	temp.Title = Title + ", " + right.Title;
	srand(time(0));
	temp.bookID = rand() % 1000 + 1;
	temp.checkedOut = false;
	return temp;
}


Book Book::operator-(Book& right) {
	Title = right.Title;
	bookID = right.bookID;
	checkedOut = right.checkedOut;
	right.Title = "No Title";
	right.bookID = 0;
	return *this;
}

