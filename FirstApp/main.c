#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int main(void) {
    
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int x[n];
    int i;
    for (i=0; i<n; i++) {
        printf("Enter element to index %d: ", i);
        scanf("%d", &x[i]);
    }
    printf("Content of array: \n");
    for(i=0; i<n; i++) {
        printf("x[%d] = %d\n", i, x[i]);
    }
}

    
    
    
    
    
    
    

