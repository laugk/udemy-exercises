/*

#include <stdio.h> // Preprocessor directive to include the standard input/output library, which contains functions like printf and scanf



 Write a recursive function to get the nth number of fibonacci series.
 Fibonacci Series: 1,1,2,3,5,8....
 


long getFibbTerm(int t) {
    if ( t==1 || t ==2 )
        return 1;
    return getFibbTerm(t-1) + getFibbTerm(t-2);
}

int main (void) {
    int t;
    for (t=1; t<=10; t++)
        printf("%ld\n", getFibbTerm(t));
    return 0;
}

*/
