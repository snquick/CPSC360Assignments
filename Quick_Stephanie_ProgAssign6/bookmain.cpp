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
#include <iostream>
#include "book.h" // book.h file 

int main() {

	/*
	Book b1;	// b1 object --> Use default constructor
    int bookID; // Initalizing the int "bookID"
	std::string title; // Initalizing the string "title"

    //Very repetitive code: asking the user for the title and ID and then putting that
    //information into the object I created (b1 is the first object)

	std::cout << "Please enter a Title: " << std::endl; // computer output
	std::getline(std::cin, title);  // user input == title variable
	b1.setTitle(title); // Setting the title to whatever the user inputted

	std::cout << "Please enter a book ID: " <<std::endl;
	std::cin >> bookID;
	b1.setbookID(bookID);

    // Print statements to show the title, book ID, and the status of the book
    // borrowBook() function is called
	std::cout << "Title: " << b1.getTitle() <<std::endl;
	std::cout << "Book ID: " << b1.getbookID() <<std::endl;
	std::cout << "Status:  " << b1.bookStatus() <<std::endl;
	b1.borrowBook();

	std::cout << "Title: " << b1.getTitle() <<std::endl;
	std::cout << "Book ID: " << b1.getbookID() <<std::endl;
	std::cout << "Status:  " << b1.bookStatus() <<std::endl;

	// b2 object --> use the second constructor
	Book b2("Strange Case of Dr Jekyll and Mr Hyde", 23, true);

    // printing out the information for b2 object
	std::cout << "Title: " << b2.getTitle() <<std::endl;
	std::cout << "Book ID: " << b2.getbookID() <<std::endl;
	std::cout << "Status:  " << b2.bookStatus() <<std::endl;
	b2.returnBook(); // calling returnbook() function

	std::cout << "Title: " << b2.getTitle() <<std::endl;
	std::cout << "Book ID: " << b2.getbookID() <<std::endl;
	std::cout << "Status:  " << b2.bookStatus() <<std::endl;

	// b3 object --> use the copy constructor, or b2 object 
	Book b3(b2); // Hence, why b2 is in the parameter 
    
    // same thing as previous two objects... 
	std::cout << "Title: " << b3.getTitle() <<std::endl;
	std::cout << "Book ID: " << b3.getbookID() <<std::endl;
	std::cout << "Status:  " << b3.bookStatus() <<std::endl;
	*/

	// Array of Book Objects Initialized and a variable
	Book bookLibrary[5];
	std::string bTitle;

	// For loop that loops around 5 times
	for (int i = 0; i < 5; i++) {
		std::cout << "Enter a title: " << std::endl; 	// User is asked to input a title
		std::getline(std::cin, bTitle); 				//getline sets the input of user into bTitle variable
		int nBID = rand() % 1000 + 1; 					// generates a random number between 1 - 1000
		bookLibrary[i] = Book(bTitle, nBID, false);		// A new Book object is created and added into the bookLibrary array
	}

	// Testing the operator functions
	bookLibrary[1] = bookLibrary[4];
	bookLibrary[3] = bookLibrary[2] + bookLibrary[1];
	bookLibrary[4] = bookLibrary[2] - bookLibrary[0];

	// For loop is created to iterate through the bookLibrary array and prints them out
	for (int i = 0; i < 5; i++) {
		std::cout << "Title: " << bookLibrary[i].getTitle() << std::endl;
		std::cout << "Book ID: " << bookLibrary[i].getbookID() << std::endl;
		std::cout << "" << std::endl;
	}

	return 0;
}
