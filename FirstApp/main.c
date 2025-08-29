#include <stdio.h>
#include <math.h> // Required for cbrt function

int main(void) {
    float inputArray[20], outputArray[20]; // Declare two arrays with 20 elements
    int i, numElements = 0; // Initialize a counter variable and set the number of input elements to zero
    float input, sum1 = 0.0, sum2 = 0.0; // Initialize sum variables to zero

    printf("Enter maximum 20 numbers, terminate with 0.0\n"); // Prompt user for input

    do { // Start of loop
        if (numElements == 0)
            printf("First number: ");
        else
            printf("Next: ");

        scanf("%f", &input); // Read the input from user
        inputArray[numElements] = input; // Store the input in the first array

        if (numElements % 2 == 0) // Check if the index is even
            outputArray[numElements] = 2 * input; // Double the value and store it in the second array
        else
            outputArray[numElements] = cbrt(input); // Calculate the cube root and store it in the second array

        numElements++; // Increment the number of input elements
    } while (input != 0.0 && numElements < 20); // Continue looping until user enters 0 or inputs exceed 20

    printf("\nThere are in total %d numbers given as input\n\n", --numElements); // Print the number of inputs given

    printf("Input Array       2nd Array\n"); // Print headers for output

    for (i = 0; i < numElements; i++) { // Loop through all elements to print and calculate sums
        printf("%10.5f      %10.5f\n", inputArray[i], outputArray[i]); // Print the contents of both arrays in two columns
        sum1 += inputArray[i]; // Calculate the sum of the first array
        sum2 += outputArray[i]; // Calculate the sum of the second array
    }

    printf("\nSum of the first array:   %10.5f\n", sum1); // Print the sum of the first array
    printf("Sum of the second array:  %10.5f\n", sum2); // Print the sum of the second array

    return 0;
}

