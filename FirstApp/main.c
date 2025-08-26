#include <stdio.h>

int main(void){
    int sum = 0;
    
    int n = 99;
    
    int i = 1; // Initialize loop variable i to 1
    
    while (i <= n) {
        if (i % 3 == 0 && i % 5 != 0) {
            sum += i; // Add the current integer to sum
        }
        i++; // Increment i for the next iteration
    }
    
    printf("%d\n", sum);
    
    return 0;
    
}
