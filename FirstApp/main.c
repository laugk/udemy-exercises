#include <stdio.h>



int main(void)

{
    char ch = 'A';
    printf("Enter an alphabetic character: ");
    scanf("%c", &ch);
    
    if (ch>='A' && ch<='Z'){
        ch = ch + 32;
        printf("The corresponding lower case is : %c\n",ch);
    }
    else if(ch>='a' && ch<='z'){
        ch = ch - 32;
        printf("The corresponding upper case is %c\n", ch);
        
    }
        
    else{
        printf("The given character is not alphabetic\n");
    }
    
    
    
    return 200;
    
}
