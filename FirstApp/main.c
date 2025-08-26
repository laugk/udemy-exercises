#include <stdio.h>
#include <math.h>

int main(void) {
    
    
    int n, sum, i;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (sum =0, i =1; i<=n; i++)
        sum = sum + i;
    
    
    printf("Sum of first %d natural numbers is %d\n", n, sum);
    
    return 0;
    
}



