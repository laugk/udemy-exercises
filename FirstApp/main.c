#include <stdio.h>
#include <string.h>

int main(void){

    char first[80] = "Chocolate";
    char second[80] = "Candy";
    
    //strcpy(second, first); //copy string from first to second
    //printf("Copied string %s\n", second);
    
    strcat (first, " ");
    strcat (first, second);
    
    printf("The first array contains %s\n", first);
    
    
    return 0;
}
