/*  Author:Stephanie Quick
    Course: Applied Programming Assignment
    Program: The Game of Pig
    Date: January 23rd, 2020
*/

#include <iostream>
#include <string>
#include <ctime>

// Initializing functions
int roll_Die();
int uTurn(int &uS, int player);
int cTurn(int &cS, int player);

int uPlay(int &uS);
int cPlay(int &cS);


// Rolling the Dice function
int roll_Die() {
    int roll = rand() % 6 + 1;
    return roll;
}

// User Turn function
int uTurn(int &uS, int player) {
    if (player == 1) {
        std::cout << "Player 1's turn." << std::endl;
        uPlay(uS);
    } else {
        std::cout << "Player 2's turn" << std::endl;
        uPlay(uS);
    }
}

int uPlay(int &uS) {
    // initalizing variables
    int turnTotal = 0;
    int roll = 0;
    std::string response;

    // while the amounts of turns is less than 20, the dice will continue to roll 
    while (turnTotal < 20) {
        roll = roll_Die();
        std::cout << "Roll: " << roll << std::endl;

        // If the dice rolls on 1, the game will completely stop (hence the break)
        if (roll == 1) {
            turnTotal = 0;
            break;
        // Otherwise, the roll will be able to the turnTotal and those statements will be outputted
        } else {
            turnTotal += roll;
            std::cout << "Turn total: " << turnTotal << "  Roll/Hold? (R)" << std::endl;
            std::cin >> response;
            
            // if the user presses "R", then they will roll again and turnTotal will be added
            if (response != "R") {
                uS += turnTotal;
                break;
            }
        }
    }
    std::cout << "Turn total: " << turnTotal << std::endl;
    std::cout << "New Score: " << uS << std::endl;
}


// Computer turn Function 
int cTurn(int &cS, int player) {
    if (player == 1) {
        std::cout << "Player 2's turn." << std::endl;
        cPlay(cS);
    } else {
        std::cout << "Player 1's turn" << std::endl;
        cPlay(cS);
    }
}

int cPlay(int &cS) {
    int turnTotal = 0;
    int roll = 0;

    // while the amount of turns is less than 20, keep rolling the dice
    while (turnTotal < 20) {
        roll = roll_Die();
        if (roll == 1) {
            turnTotal = 0;
            std::cout << "Roll: " << roll << std::endl;
            break;
        } else {
            turnTotal += roll;
            std::cout << "Roll: " << roll << std::endl;
        }
    }
    cS += turnTotal;
    std::cout << "Turn total: " << turnTotal << std::endl;
    std::cout << "New Score: " << cS << std::endl;
}

// Main functiion 
int main() {
    srand(time(0));

    // initializing variables to 0
    int userScore = 0;
    int compScore = 0;
    int user = rand() % 2 + 1; 

    // computer output
    std::cout << "You will be player " << user << std::endl;
    std::cout << "Enter R to roll; enter any other character to hold." << std::endl;

    // if the user is player 1, then their score will be associated with userScore
    // the computer will then be player 2 and the compScore is with player 2
    if (user == 1) {
        std::cout << "Player 1 score: " << userScore << std::endl; 
        std::cout << "Player 2 score: " << compScore << std::endl;
        
        // do while loop to determine the scores for the computer and user
        do {
        uTurn(userScore, user);
        cTurn(compScore, user);

        std::cout << "Player 1 score: " << userScore << std::endl; 
        std::cout << "Player 2 score: " << compScore << std::endl; 

        // continue until the user score and computer score is greater than 100
        } while (userScore < 100 && compScore < 100);

    } else {
        // Else statement for if the user is player 2
        // if the user is player 2 then the userScore is associated with player2

        std::cout << "Player 1 score: " << compScore << std::endl; 
        std::cout << "Player 2 score: " << userScore << std::endl; 

        do {
        cTurn(compScore, user);
        uTurn(userScore, user);

        std::cout << "Player 1 score: " << compScore << std::endl; 
        std::cout << "Player 2 score: " << userScore << std::endl; 
     } 
        while (userScore < 100 && compScore < 100);
    }
    // Once the userScore is greater or equal to 100 - they win
    if (userScore >= 100) {
        std::cout << "You won! Time to Celebrate!" << std::endl;
    } else {
        std::cout << "You lost... Better luck next time." << std::endl;
    }
}