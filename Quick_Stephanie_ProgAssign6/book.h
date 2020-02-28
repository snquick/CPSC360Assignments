/*  Author:Stephanie Quick
    Course: Applied Programming Assignment
    Program: Classes and Objects: Program 5 (Checking out Books)
    Date: February 19th, 2020

    -----------------Update-------------------
    Author: Stephanie Quick
    Course: Applied Programming Assignment
    Program: Operator Overloading: Program 6 (Overloading Operators)
    Date: February 27th, 2020
*/
#include <string>
#ifndef BOOK_H
#define BOOK_H

class Book {
public:
        // initalizing variables 
	std::string Title;
	int bookID;
	bool checkedOut; 

	// Constructors & Copy Constructor --> book()
	Book();	// default constructor
	Book(std::string title, int bookId, bool checkedOut = false);	// 2nd constructor with parameters
	Book(const Book &bookObj); // copy constructore

        // Setters
	void setTitle(std::string title); // sets the book title 
	void setbookID(int bookId); // sets bookID value
    void setCheckedOut(bool checkedOut); // sets checkedOut value

	// Getters 
        // returns the book title, book ID, and checkedOut value
	std::string getTitle();	
	int getbookID();		
	bool isCheckedOut();

	// called to let the user know if the book is checked out or not
	void borrowBook();

        // when called, it will change the checkedOut value to false		
	void returnBook();
        		
	std::string bookStatus(); // adds in book status --> Book is available or not

	Book operator=(const Book &right); // prototype for overloading =
	Book operator+(const Book &right); //prototype for overloading +
	Book operator-(Book &right); // prototype for overloading -
};
#endif 
