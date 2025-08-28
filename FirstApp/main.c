#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    int guess;

srand(time(NULL));

    int d1 = rand() % 6 + 1;
    int d2 = rand() % 6 + 1;
    
    printf("Computer rolled two dice...Guess the sum\nEnter any <=0 value to terminate\n");
    scanf("%d", &guess);
    
    while (guess >0) {
        if (guess > d1 + d2) {
            printf("Guess is high");
        }
        else if (guess < d1 + d2) {
            printf("Guess is low");
        }
        else if (guess == d1 + d2) {
            printf("Guess is correct!");
        }
    }

return 0;

}

