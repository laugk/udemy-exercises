#include <stdio.h> // Include the standard input-output library header file for functions like printf and scanf.
#include <stdarg.h> // Include the variable argument list handling library header file for va_list, va_start, va_arg, and va_end functions.
#include <string.h> // Include the string handling library header file for strlen() function.
#include <stdlib.h> // Include the standard library header file for exit() function.

// This function calculates the sum of a varying number of integers using variable arguments and a format string to specify their types.
double sum(char *format, ...) {
    double s = 0.0; // Initialize a variable 's' to store the sum of the numbers.
    va_list ap; // Declare a va_list type variable 'ap' for accessing variable arguments.
    va_start(ap, format); // Initialize 'ap' with the first argument following 'format'.

    int i; // Declare an integer variable 'i' for loop iteration.
    for (i=0; i<strlen(format); i++) { // Loop through each character in the format string.
        char ch = format[i]; // Get the current format character.
        switch(ch) {
            case 'i': s += va_arg(ap,int); break; // If 'i', add an integer argument to the sum.
            case 'd' : s += va_arg(ap,double); break; // If 'd', add a double argument to the sum.
            case 'f' : s += va_arg(ap,float); break; // If 'f', add a float argument to the sum.
            default: printf("Invalid format found\n"); exit(1); // If any other character, print an error message and exit with failure status.
        }
    }
    va_end(ap); // Clean up the variable argument list.
    return s; // Return the final sum 's'.
}

// Main driver code for testing the sum() function.
int main(void) {
    double k = sum("idfid", 20, 10.5, 4.2f, 90, 10); // Call the sum() function with a format string and various numbers as arguments.
    printf("Sum = %lf\n", k); // Print the final sum to the console.

    return 0; // Return 0 to indicate successful program execution.
}
