
#include <stdio.h>

int main(void)
{

    int a = 5, b = 6, i;
    
    i = ++a * ++b;
    printf("a = %d, b= %d, i =%d\n", a,b, i);
    
    
    int c = 5;
    printf("c = %d\n", c++); //++ is after printf, so answer is 5
    printf("c = %d\n", ++c); //++ is before printf, and since c (from previous line is 5+1), printf = 7

    return 200;
}
