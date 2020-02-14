/* Author: Stephanie Quick
   Course: Applied Programming Languages
   Program: File reader & analyzer
   Date: Feburary 12th, 2020
*/

#include <iostream>
#include <fstream>
#include <string>

// Initalizing the variables
std::fstream file;
std::string filename;
std::string word;
std::string newFile = "filestats.txt";
std::string longestWord = "";
std::string userAns = "y";

// Initializing the functions for the initFile and fFile
void initFile(std::string fn);
void fFile(std::string fn);

int main() { // main function
    // do-while loop
	do { // takes the user's input and put it into the filename variable
		std::cout << "Please enter name of file: ";
		
		std::cin >> filename;
		std::cin.ignore(100,'\n'); // ignores input if the user exceeds 100 characters

        //these functions then are being called
		initFile(filename);
		fFile(newFile);

		if (userAns == "n") { 
			exit(1); // exits the program 
		}

	} while (userAns == "y"); // the while loop will go through if the user selects yes
}


void initFile(std::string fn) { // Initial file function call
	file.open(fn, std::ios::in); // opens file
	
	// Takes the words from the inital file to this new file (nfile)
	std::ofstream nFile(newFile);
	
    while (file >> word) { 
		nFile << word << ' '; } // makes every word in the nFile become separated by a space when they are added from the initFile
	
    if (!file) { // when the file doesn't open, the program exits
		std::cout << "The file could not open." << std::endl;
		exit(1);
	}
	// when this function is done, the file the user inputted and the new file created will close
	file.close();
	nFile.close();

}

void fFile(std::string fn) { // Final file function
	// Initializing more variables --> Variables for the 'E' part of this program
	std::string longWord; // if you initialize a string variable, must have std::

	int numWords = 0;
	int numCharLongWord = 0; // set to zero yo

	// Opens new file
	file.open(fn, std::ios::in);

	while (file >> word) { // yet again, another while loop (best kind of loop if you ask me)
		std::size_t eLetter = word.find("e"); // By doing this, the letter 'e' will be looked for in each word
		
		if (eLetter != std::string::npos) { 
			numWords += 1; // this will add another word to the total words with e
			longWord = word;
		}

		// Finds the longest word with 'e'
		if (longWord.length() > longestWord.length()) {
			longestWord = longWord; // declaring which word is the longest with the 'E'
		}
	}  
	numCharLongWord = longestWord.length(); 


	// Prints out # of words with E, longest word, and # of char. of longest word with E
	// gathered this information from the above while if statements
	std::cout << "Number of words with 'E': " << numWords << "\n" << std::endl;
	std::cout << "Longest word with 'E': " << longestWord << "\n"<< std::endl;
	std::cout << "Number of characters in longest word with 'E': " << numCharLongWord << "\n" << std::endl;

	file.close(); // The file will now close :) 
}