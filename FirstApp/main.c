
#include <stdio.h>

int main(void)
{
    
    int x = -1;
    
    int y = -2;
    
    int z = ++x || ++y;
    
    printf("%d,%d,%d", x, y, z);
    
    return 200;
    
}
