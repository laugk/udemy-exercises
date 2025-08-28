
/*
   Please read everything before you start, you need to do exactly what you
   are asked to do, if you do anything other than asked your marks will be
   deducted.
*/


/*
  This is a simple guessing game, computer, that means your program will guess
  a number in the range >=0 to <100. Then it will ask the user to guess that number,
  since the number is < 100, a simple mathematics can tell us it will not take more
  than 7 steps to find the number that the program guessed actually. It is always
  possible to find the number in 7 steps, how come? That is a task too!

  Therefore, your program will provide 7 chances to the player, each time it
  will ask for the number, if the input number is larger than the number guessed by
  program it will simply print "your number is high", if the input number is low, the
  program should print "Your number is low", and if the number input exatly matches
  with that of program's number then it will print "Bingo!! you have won!", also
  it will print the number of steps that user took to find the number. On each failed
  attempt the program should print the number of chances remaining.

  If user fail to guess the number in 7 chances, the program will print
  "Game Over!!!, try to be Mathematical".


*/
#include <stdio.h>  // for standard I/O operations
#include <time.h>   // for time function
#include <stdlib.h> // for rand function

int main(void){
    printf("***********************************************************\n");
    printf("**----------------Welcome to Guessing Game---------------**\n");
    printf("**---------You can guess if you understand the MATH -----**\n");
    printf("**---------------------------------------------------------\n");
    printf("\n\n");
    // You do not need to change anything above this line for this assignment.
    const int MAX_CHANCES = 7;  // a constant, to hold the Maximum possible chances
    // a const is a named memory whose content cannot be changed through out the program,
    // if you try to modify the content of the constant then it results into a
    // compilation error.
    
    int computer_guess;  // for storing the guess by this program.
    
    // get the current system time that we will use as seed
    long seed = time(NULL);
    // set the seed using the srand function
    srand(seed);
    
    // let your program guess a 2 digit number
    computer_guess = rand() % 100;
    
    // Prompt the user
    printf("Program has guessed a number, what you need to do is match it.\n");
    printf("Remember, you have only 7 chances.\n");
    printf("Best wishes...\n\n");
    
    int user_guess; // to store the input from user.
    
    int chance_count = 1; // to store chance number, maximum is MAX_CHANCES(7)
    int match = 0;        // if user successfully guessed the number, then assign 1 to this variable
    // initially it is 0 as user yet to find the number.
    
    // iterate in a loop, as long as not found and chance_count <= MAX_CHANCES
    // Instruction: Offcourse, it is your task to write the condition for the while loop
    while (user_guess != computer_guess && chance_count <= MAX_CHANCES) {
        // prompt the user to enter their guess.
        printf("Enter your number: ");
        scanf("%d", &user_guess);
        
        if (user_guess > computer_guess) {
            printf("Your guess is high\n");
        } else if (user_guess < computer_guess) {
            printf("Your guess is low\n");
        } else {
            printf("Bingo!! You got it correct %d is the correct number.\nYou guessed it in %d chances.\n", computer_guess, chance_count);
            break; // come out of the loop as the user found the number
        }
        
        printf("Number of remaining chances: %d\n\n", MAX_CHANCES - chance_count);
        chance_count++; // increment the chance_count for the next iteration.
    }
    
    // if not match, then print "Game over!!! Try to be Mathematical."
    if (chance_count > MAX_CHANCES) {
        printf("Game over!! Try to be Mathematically inclined.\n");
    }
    
    
    
    
    /********************* EXTRA CREDIT ************************/
    // Attempt this extra credit section only if you completed the normal
    // section. Otherwise no extra credit will be give.
    // Total Extra credit - 15.
    
    // you need to print some extra messages depending upon the number of
    // chances user took to find the guess.
    
    // If the user guessed the number successfully in <=3 steps, print, "You are Super Duper NINJA!"
    
    if (chance_count <=3) {
        printf("You are Super Duper NINJA!");
    }
    // If the user guessed the number successfully in >3 and <=5 print, "You are Crezy NINJA!"
    if (chance_count <=5 && chance_count >3) {
        printf("You are Super Duper NINJA!");
    }
    // If the user guessed the number successfully in 6 or 7 steps print, "You have potential to be a NINJA!"
    if (chance_count <=7 && chance_count >5) {
        printf("You are potential to be a NINJA!");
    }
    // --------------------------------------------------------//
}
    
    
    //****************  Example Output *****************************/
    // This is how the program is suppose to run.
    /*
     
     ***********************************************************
     **----------------Welcome to Guessing Game---------------**
     **---------You can guess if you understand the MATH -----**
     **---------------------------------------------------------
     
     
     Program has guessed a number, what you need to do is match it.
     Remember, you have only 7 chances.
     Best wishes...
     
     Enter your number: 67
     Your guess is low
     Number of remaining chances: 6
     
     
     Enter your number: 89
     Your guess is high
     Number of remaining chances: 5
     
     
     Enter your number: 70
     Your guess is low
     Number of remaining chances: 4
     
     
     Enter your number: 79
     Your guess is high
     Number of remaining chances: 3
     
     
     Enter your number: 76
     Your guess is low
     Number of remaining chances: 2
     
     
     Enter your number: 78
     Bingo!! You got it correct 78 is the number
     You guessed that in 6 chances
     
     
     
     Press any key to continue . . .
     */
    
    // Another Example Output
    /*
     
     ***********************************************************
     **----------------Welcome to Guessing Game---------------**
     **---------You can guess if you understand the MATH -----**
     **---------------------------------------------------------
     
     
     Program has guessed a number, what you need to do is match it.
     Remember, you have only 7 chances.
     Best wishes...
     
     Enter your number: 40
     Your guess is low
     Number of remaining chances: 6
     
     
     Enter your number: 60
     Your guess is high
     Number of remaining chances: 5
     
     
     Enter your number: 50
     Your guess is high
     Number of remaining chances: 4
     
     
     Enter your number: 45
     Your guess is low
     Number of remaining chances: 3
     
     
     Enter your number: 47
     Your guess is low
     Number of remaining chances: 2
     
     
     Enter your number: 48
     Your guess is low
     Number of remaining chances: 1
     
     
     Enter your number: 49
     Bingo!! You got it correct 49 is the number
     You guessed that in 7 chances
     
     
     
     Press any key to continue . . .
     
     
     
     
     
     
     */

