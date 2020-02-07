/*  Author:Stephanie Quick
    Course: Applied Programming Assignment
    Program: Concert Seating Functions: Program 3 
    Date: February 5th, 2020
*/
#include <iostream>
#include <iomanip> 
#include <stdlib.h>

// variables that contribute to the seating chart 
const int columns = 30; 
const int rows = 15; 
char chart [rows][columns]; // Array made for the seating chart
const char full = '*';
const char empty = '#';
int tSales;
int row1 = 15, row2 = 15, row3 = 15, row4 = 15, row5 = 15, row6 = 15, row7 = 15, row8 = 15, row9 = 15, row10 = 15;
int row11 = 15,row12 = 15,row13 = 15, row14 = 15, row15 = 15;
int totalSeats = 450;

int seat_num, seat_num2;
int Quit;

// Declaring functiions
int userMenu(); 
void seatingChart(); 
void buyTickets();
void totalSales();
void seatingInfo();

// User menu function
int userMenu() {
    int userChoice; // Display menu for when the user first opens the program
			std::cout << "MAIN MENU\n";
			std::cout << "1. Display Seating Chart\n";
			std::cout << "2. Buy Tickets\n";
			std::cout << "3. View Total Ticket Sales\n";
			std::cout << "4. Show Seating Information\n";
			std::cout << "5. Quit (Q)\n";
            std::cout << "Please pick an option: ";
            
            // display choices
            std::cin >> userChoice; 
            std::cout << std::endl; 
    return userChoice; 
}

// Seating Chart function - displays the seats by option 1
void seatingChart() {
	std::cout << "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30\n";
// for loop to create the rows and columns 
    for (int i = 0; i < 15; i++) {
        std::cout << std::endl << "Row: " << (i+1);
        for (int j = 0; j < 30; j++) {
            std::cout << "# " << chart[i][j];
        }
    }
    std::cout << std::endl; 
}

void buyTickets() {
    int cost; 
    int row_2, col_2;
    char confirmation; 
        do {
                    std::cout << "Please enter the row you want to sit in: ";
                    std::cin >> row_2;
                    row_2 -= 1;
                    std::cout << "Please enter the column you want to sit in: ";
                    std::cin >> col_2;
                    col_2 -= 1; 

                    // If the user picks a row or column that is equal to * (The full symbol)
                    // They'll be told to pick a new one
                    if(chart [row_2][col_2] == '*') {
                        std::cout << "This seat is unavailable. Please select a new one.";
                        std::cout << std::endl;
                    }
                    // Otherwise, if the row is less than 8, the ticket will equal 50
                    else {
                        if (row_2 < 8) {
                            cost =  50;
                            totalSeats -= 1;
                            tSales += cost;
                            chart[row_2][col_2] = '*';
                            row_2 += 1;
                            col_2 += 1;
                        }
                        // else, if the row is >= 8 AND <= 15, then the ticket will cost $40
                        else if (row_2 >= 8 && row_2 <= 15) {
                            cost =  40;
                            totalSeats -= 1;
                            tSales += cost;
                            chart[row_2][col_2] = '*';
                            row_2 += 1;
                            col_2 += 1;
                        }

                        if(row_2 == 1) 
						    row1--;
						else if(row_2 == 2)
						    row2--;
						else if(row_2 == 3)
						    row3--;
					    else if(row_2 == 4)
						    row4--;
						else if(row_2 == 5)
						    row5--;
						else if(row_2 == 6)
						    row6--;
					    else if(row_2 == 7)
							row7--;
						else if(row_2 == 8)
							row8--;
						else if(row_2 == 9)
							row9--;
						else if(row_2 == 10)
							row10--;
						else if(row_2 == 11)
							row11--;
						else if(row_2 == 12)
							row12--;
						else if(row_2 == 13)
							row13--;
						else if(row_2 == 14)
							row14--;
						else if(row_2 == 15)
							row15--;
                        
                     // asks the user if they want to buy another ticket
                      std::cout << "This ticket costs: " << cost << std::endl;
                      std::cout << "Do you want to buy this? Yes = 1 or No = 2\n";
                      std::cin >> confirmation;
                      seat_num = seat_num + confirmation;
                      seat_num2 += confirmation;
                        // If they did say yes to buying the ticket, this appears
                      if (confirmation == 1) {
                          std::cout << "Your ticket has been purchased!" << std::endl;
                      } // If they say no, then they get asked to buy a different seat
                      else if (confirmation == 2) {
                          std::cout << "Would you like to buy another seat? Yes = 1 or No = 2\never";
                          std::cout << std::endl;
                          std::cin >> Quit;
                      }
                      std::cout << "Would you like to buy another seat? Yes = 1 or No = 2\n";
                      std::cin >> Quit;
                      if (Quit == 1) {
                          break;
                      }
                    }
                }

                while (Quit == 1); 
}

void totalSales() {
                std::cout << "View Total Ticket Sales\n";
				std::cout << "Here is the total: " << tSales << std::endl << "\n"; 
                
}

void seatingInfo() {
    std::cout << "\nNumber of seats sold: " << totalSeats << std::endl;
    std::cout << "Seats Available in Auditorium: " <<totalSeats<<std::endl;
	std::cout << "Seats Remaining per Row: " <<std::endl;
    std::cout << "Row 1: " <<row1<<std::endl;
	std::cout << "Row 2: " <<row2 <<std::endl;
	std::cout << "Row 3: " <<row3 <<std::endl;
	std::cout << "Row 4: " <<row4 <<std::endl;
	std::cout << "Row 5: " <<row5 <<std::endl;
	std::cout << "Row 6: " <<row6 <<std::endl;
	std::cout << "Row 7: " <<row7 <<std::endl;
	std::cout << "Row 8: " <<row8 <<std::endl;
	std::cout << "Row 9: " <<row9 <<std::endl;
	std::cout << "Row 10: " <<row10 <<std::endl;
	std::cout << "Row 11: " <<row11 <<std::endl;
	std::cout << "Row 12: " <<row12 <<std::endl;
	std::cout << "Row 13: " <<row13 <<std::endl;
	std::cout << "Row 14: " <<row14 <<std::endl;
	std::cout << "Row 15: " <<row15 <<std::endl;
}

int main() { 
    const int Num_Rows = 15; 
    int userPick; // variable to determine which menu option they picked

    // do loop with a case statements for the menu options
    do {
        userPick = userMenu(); // calling the userMenu() function
        switch (userPick) {
            case 1:
                std::cout << "Display Seating Chart\n";
                seatingChart();
                break;
            
            case 2: 
                std::cout << "Buy Tickets\n";
                buyTickets();
                break;
                
            case 3:  // Viewing the total sales 
                totalSales();
                break;
            
            case 4: // Seating information
                std::cout << "Show Seating Information\n";
                seatingInfo(); 
                break; 
                
            case 5: // Quit function - exit
                std::cout << "Quit\n";
                exit(1); 
                
            default: // if the user clicks something other than the available choices
                std::cout << "Invalid choice" << std::endl; //this should never happen
        }    
    }
    while (userPick != '5');
    return 0;
}