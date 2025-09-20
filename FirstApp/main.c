#include <stdio.h>
#include <string.h>

/*
 sprintf - writes a formatted string into a character array
 Just like printf, but it prints the string into an array instead of printing into the console
 
 */


int main(void) {
    int var1 = 10;
    double var2 = 2.25;
    char buff_string[100];
    char str[] = ", this is fun!";
    int count = sprintf(buff_string, "Value of var1 = %d and var2 = %lf %s\n", var1, var2, str);
    
    printf("%s", buff_string);
    printf("count = %d\n", count );
    
    return 0;
}
