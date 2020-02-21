/*  Author:Stephanie Quick
    Course: Applied Programming Assignment
    Program: Classes and Objects: Program 5 (Checking out Books)
    Date: February 19th, 2020
*/

#include <cstdlib>
#include <iostream>
#include "Book.h"

// Default constructor
// Setting the value of the title to "no title"
Book::Book() {
	Title = "No Title";
	bookID = rand() % 1000 + 1; // Random number 0 - 1000
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

// Initializing the setters and getters (they were declaring in book.h)
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

// If the book is returned, the checkedOut variable is changed to false;
void Book::returnBook(){
	checkedOut = false; }

// function if the book has already been checked out.
void Book::borrowBook(){
	if(isCheckedOut() == true)
		std::cout << "Checked out." << std::endl;
	else
		checkedOut = true; }

// book status if statement 
std::string Book::bookStatus(){
	std::string bookAvailable = "Available!";
	std::string bookNotAvailable = "Not available.";

	if (isCheckedOut() == false)
		return bookAvailable;
	else
		return bookNotAvailable;
}