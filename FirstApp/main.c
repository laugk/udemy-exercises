#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int main(void) {
    
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int x[n];
    int i, j, num, isDuplicate;
    srand(time(NULL));
    for (i=0; i<n; i++) {
        do {
            num = (rand () % 49) + 1; //generate a number from 1 to 49
            isDuplicate = 0; //assume number is not duplicate
            for (j=0; j<i; j++) {
                if (x[j] == num) {
                    isDuplicate = 1;
                    break;
                }
            }
        } while (isDuplicate);
        x[i] = num;
    }
    printf("Content of array: \n");
    for(i=0; i<n; i++) {
        printf("%4d\n", x[i]);
    }
}

    
    
    
    
    
    
    

