#include <stdio.h>
#include <math.h>

int main(void) {
    
    
    int count;
    char response;

    
    for(count=1;count<=100;count++) {

        if (count%2 == 0)
            continue;
        
        printf("Count = %d\n", count);
    }
    
    return 0;
    
}



