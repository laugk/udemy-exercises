#include <stdio.h>
#include <math.h>

int main(void) {
    
    
    int count;
    char response;

    
    for(count=1;count<=100;count++) {
        printf("Count = %d\n", count);
        printf("print next? enter Y/y to continue or any other key to terminate ");
        scanf(" %c", &response);
        if (response != 'Y' && response != 'y')
            break;
    }
    printf("Terminated at count = %d\n", count);
    
    return 0;
    
}



