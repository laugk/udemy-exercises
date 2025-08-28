#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int main(void){
    
    
    int correct = 0;
    int incorrect = 0;
    
    
    
    int score = 0;
    int d1, d2, guess;
    int dicesum;
    //    int seed;
    //   srand(seed);
    
    
    
    
    while (1) {
        //d1 = 2;
        //d2 = 3;
                d1 = rand() % 6 + 1; // generate random number between 1 and 6 for first die
                d2 = rand() % 6 + 1; // generate random number between 1 and 6 for second die
        dicesum = d1 + d2;
        
        
        printf("Computer rolled two dice...Guess the sum\n");
        printf("Enter any <=0 value to terminate\n");
        scanf("%d", &guess);
        
        
        
        if (guess<= 0) {
            break;
        }
        
        //score
       //score += (guess == dicesum) ? correct : -incorrect;
        else if (guess == dicesum) {
            correct++;
            printf("Bravo! You are correct! +10\n");
        }
        
        else if (guess !=dicesum) {
            incorrect++;
            printf("Darn! Try again! -5\n");
        }
        
        printf("Dice roll was %d\n\n", dicesum);
        
        
        printf("Total Correct: %d\n", correct);
        printf("Total Incorrect: %d\n", incorrect);
        score = (correct * 10 + incorrect *-5);
        printf("Your score is %d\n\n", score);
    }
    
    printf("Your final score is %d\n", score);
    
    return 0;
    
}
        
        
    
    
    
    
    
    
    

