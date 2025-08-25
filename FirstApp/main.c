#include <stdio.h>
#include <unistd.h>

int main(void){
 
    int number, sum;
    sum = 0;
    
    printf("Enter a number, zero to terminate: ");
    scanf("%d", &number);
    
    while(number<0 || number>0){
        sum += number; //sum = sum + number
        printf("Enter a number, zero to terminate: ");
        scanf("%d", &number);
    }
    
    
    printf("Sum of the numbers: %d\n", sum);
    
    
    return 0;
}
