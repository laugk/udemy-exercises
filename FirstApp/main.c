#include <stdio.h>
#include <string.h>

int main(void){

    char str[80];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int i;
    
    // for (i=0; str[i]!='\0'; i++);
    
    i = strlen(str);
    printf("The string length is %d\n", i);
    
    
    
    return 0;
}
