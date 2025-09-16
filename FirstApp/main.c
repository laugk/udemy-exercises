#include <stdio.h> // Include the standard input-output library header file for functions like printf and scanf.
#include <stdarg.h> // Include the variable argument list handling library header file for va_list, va_start, va_arg, and va_end functions.

// This function calculates the sum of a varying number of integers using variable arguments.
int sum(int count, ...) { // The function takes an integer count as the first argument, followed by any number of integer arguments.
    int s = 0; // Initialize a variable 's' to store the sum of the integers.
    va_list ap; // Declare a va_list type variable 'ap' for accessing variable arguments.
    va_start(ap, count); // Initialize 'ap' with the first argument following 'count'.

    int i; // Declare an integer variable 'i' for loop iteration.
    for (i=1; i<=count; i++) { // Loop through the variable arguments 'count' number of times.
        s += va_arg(ap,int); // Add each integer argument to the sum 's' using va_arg function and specifying its type as int.
    }
    va_end(ap); // Clean up the variable argument list.
    return s; // Return the final sum 's'.
}

// Main driver code for testing the sum() function.
int main(void) {
    int k = sum (4,20,10,4,2); // Call the sum() function with 4 integers and store the result in variable 'k'.
    printf("Sum = %d\n", k); // Print the final sum to the console.

    return 0; // Return 0 to indicate successful program execution.
}

