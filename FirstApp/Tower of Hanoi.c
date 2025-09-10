//
//  Tower of Hanoi.c
//  FirstApp
//
//  Created by GK on 10/9/25.
//

#include <stdio.h> // Preprocessor directive to include the standard input/output library, which contains functions like printf and scanf

// Function declaration for the Tower of Hanoi problem using recursion
void toh(int n, int source, int aux, int dest) { // Define a function called toh that takes four integer parameters: n (number of disks), source, auxiliary, and destination tower numbers
    if (n == 1) { // Check if there's only one disk left to move (base case for recursion)
        printf("Move the disk from tower no: %d to tower no: %d \n", source, dest); // Print a message indicating which disk is moved from which source tower to which destination tower
        return; // End the function call for the base case
    } else {
        // Recursive calls (divide and conquer strategy):
        // 1. Move n-1 disks from the source tower to the auxiliary tower (to free up the last disk)
        toh(n - 1, source, dest, aux);
        // 2. Move the largest disk (disk number n) from the source tower to the destination tower
        toh(1, source, aux, dest);
        // 3. Move the remaining n-1 disks on top of the largest disk that's already on the destination tower from the auxiliary tower to the destination tower
        toh(n - 1, aux, source, dest);
    }
}

// Main function where program execution begins
int main(void) { // Define the main function, which returns an integer and takes no arguments
    toh(5, 1, 2, 3); // Call the toh function with an argument of 3 disks and tower numbers 1 (source), 2 (auxiliary), and 3 (destination)
    return 0; // Return 0 to indicate that the program has executed successfully
}
