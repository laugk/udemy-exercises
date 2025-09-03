#include <stdio.h>
#include <string.h>

int main(void){

    char str[80];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int i, countAlpha = 0, countSpace = 0;
    
    // for (i=0; str[i]!='\0'; i++);
    
    i = strlen(str);
    
    for(i=0; str[i]!='\0'; i++) {
        if (((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i] <='z')))
            countAlpha++; //count alphabets
        else if (str[i] == ' ')
            countSpace++; //count spaces
        
    }

    printf("Total alphabetic characters found: %d\n", countAlpha);
    printf("Total space characters found: %d\n", countSpace);
    
    
    
    return 0;
}
