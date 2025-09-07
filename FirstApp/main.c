#include <stdio.h> // Preprocessor directive to include the standard input/output library, which contains functions like printf and scanf

// Function declaration for printing a message recursively
void printMsg(unsigned int n) { // Define a function called printMsg that takes an unsigned integer parameter n
    if (n == 0) // Check if the value of n is equal to 0
        return; // If it is, end the current function call and return to the previous one (base case for recursion)

    printf("Hello World\n"); // Print "Hello World" followed by a newline character to the console

    n--; // Decrement the value of n by 1

    printMsg(n); // Recursive call: Call the printMsg function with the updated value of n (recursive case)
}

// Main function where program execution begins
int main(void) { // Define the main function, which returns an integer and takes no arguments
    printMsg(3); // Call the printMsg function with an argument of 3
    return 0; // Return 0 to indicate that the program has executed successfully
}
