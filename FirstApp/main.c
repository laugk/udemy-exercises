#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int main(void) {
    
    int x[100], i;
    
    for (i=0; i<100; i++) {
        x[i] = i+1;
    }
    
    printf("Content of the array: ");
    for(i=0; i<100; i++ ) {
        printf("%d, ", x[i]);
    }
}

    
    
    
    
    
    
    

