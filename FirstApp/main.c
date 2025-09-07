#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define rock 1  //telling the complier that rock is 1
#define paper 2
#define scissor 3
#define Player1_Win 1
#define Player2_Win 2
#define DRAW 0

    int rock_paper_scissor(int player1, int player2) {
        int result;
        if (player1 == rock && player2 == paper) {
            result = Player2_Win;
        } else if (player1 == rock && player2 == scissor) {
            result = Player1_Win;
        } else if (player1 == rock && player2 == rock) {
            result = DRAW;
        } else if (player1 == paper && player2 == paper) {
            result = DRAW;
        } else if (player1 == paper && player2 == scissor) {
            result = Player2_Win;
        } else if (player1 == paper && player2 == rock) {
            result = Player1_Win;
        } else if (player1 == scissor && player2 == paper) {
            result = Player1_Win;
        } else if (player1 == scissor && player2 == scissor) {
            result = DRAW;
        } else if (player1 == scissor && player2 == rock) {
            result = Player2_Win;
        }
        return result;
    }

int get_user_input (void) {
    int choice;
    do {
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissor\n");
        printf("Please input [1,2,3]: ");
        scanf("%d", &choice);
        if (! (choice >=1 && choice <=3)) {
            printf("Error -- Invalid input");
        }
    } while (!(choice >=1 && choice <=3));
    return choice;
               

    
}
void print_word(int v) {
    if (v == rock) {
        printf("Rock\n");
    } else if (v == paper) {
        printf("Paper\n");
    } else if (v == scissor) {
        printf("Scissor\n");
    }
}


int main(void) {
    int user_score = 0;
    int computer_score = 0;
    srand(time(NULL));
    
    int quit = 0;
    while (!quit) {
        
        int user_input = get_user_input();
        int computer_choice = rand() % 3 + 1; //plus 1 because the default is 0,1,2 and our decision is 1,2,3
        printf("Computer chose: ");
        print_word(computer_choice);
        
        printf("User chose: ");
        print_word(user_input);
        
        int result = rock_paper_scissor(user_input, computer_choice);
        if (result == DRAW) {
            printf("It is a draw\n");
        } else if (result == Player1_Win) {
            printf("User wins");
            user_score++;
        } else if (result == Player2_Win) {
            printf("Computer wins");
            computer_score++;
        }
        printf("\n----------------------------\n");
        printf("User Score: %d\n", user_score);
        printf("Computer Score: %d\n", computer_score);
        printf("----------------------------\n");
        printf("\n\n");
        
        
        printf(" If you want to continue input any integer, 0 to terminate. ");
        int response;
        scanf("%d", &response);
        if (response == 0) {
            quit = 1;
        }
    } //end of while
    
    printf("Final Score...\n");
    printf("\n");
    printf("----------------------------\n");
    printf("User Score: %d\n", user_score);
    printf("Computer Score: %d\n", computer_score);
    printf("----------------------------\n");
    printf("\n\n");
    if (user_score == computer_score) {
        printf("Game Draw\n");
    } else if (user_score > computer_score) {
        printf("User Wins!\n");
    } else if (user_score < computer_score) {
        printf("Computer Wins");
    }
    
}
