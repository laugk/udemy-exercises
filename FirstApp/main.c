#include <stdio.h>
#include <unistd.h>

int main(void){
 
    int n, sum, i;
    printf("Enter n: ");
    scanf("%d", &n);
    
    sum = 0;
    i = 1;
    while (i<=n){
        sum = sum + i;
        i++;
    }
    printf("Sum of first %d natual numbers = %d\n", n, sum);
    return 0;
}
