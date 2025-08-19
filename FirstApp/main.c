
#include <stdio.h>

int main(void)
{
    
    int a, b, max;
    
    printf("Enter first number: \n");
    scanf("%d", &a);
    printf("Enter second number: \n");
    scanf("%d", &b);
    if (a>b) {
        max = a;
    }
    else{
        max = b;
    }
    
    printf("Maximum is %d\n", max);
    
    return 200;
    
    
}
