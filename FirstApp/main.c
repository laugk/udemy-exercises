#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int main(void) {
    
    int n;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    
    int x[n];
    int i;
    srand(time(NULL));
    
    for(i=0; i<n; i++) {
        x[i] = rand() % 100;
    }
    
    printf("Content of the array: \n");
    int sum = 0;
    for (i=0; i<n; i++) {
        printf("%4d", x[i]);
        sum = sum + x[i];
    }
    printf("\n\n");
    printf("Sum is %d\n",sum);
    double avg = (double)sum / n;
    printf("Average of the numbers: %lf\n", avg);
    
    
    return 0;
}


    
    
    
    
    
    

