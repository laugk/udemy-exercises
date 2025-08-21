#include <stdio.h>
#include <unistd.h>

int main(void){
 
    int i;
    i = 1;
    while (i<=10)
    {
        printf("Hello World\n");
        i++;
        sleep(1);
    }

    
    return 0;
}
