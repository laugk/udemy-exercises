/**
Instructions:
Write a program that will input 3 integer values from user and then will
display the average of them. You would require to declare 3 integer variables
for holding the integers given by the users from keyboard and then you need
another variable for holding the average. Decide by yourself about the datatype
of the average variable.

Finally print the average into console using printf.
*/
#include <stdio.h>

int main(void)
{
    
    int a , b, c;
    
    printf("Enter first number: \n");
    scanf("%d", &a);
    printf("Enter second number: \n");
    scanf("%d", &b);
    printf("Enter third number: \n");
    scanf("%d", &c);
    printf("Average is: %.5f\n", (a+b+c)/3.0);
    

    return 0;
}
