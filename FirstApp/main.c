#include <stdio.h>
#include <string.h>

int main(void){

    char first[80] = "Chocolate Candy";
    char second[80];
    
    strcpy(second, first); //copy string from first to second
    printf("Copied string %s\n", second);
    
    
    return 0;
}
