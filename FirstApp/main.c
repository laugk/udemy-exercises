#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    
    
    int k, i;
    long t;
    t = time(NULL);
    
    srand(t);
    
    for (i=1;i<=10;i++) {
        k = rand();
        printf("%d\n", k);
    }
    
    
    return 0;
    
}



