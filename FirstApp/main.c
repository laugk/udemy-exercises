#include <stdio.h>

int main (void) { // Function definition for the main function, which is the entry point of a C program
    int *p, *q; // Declare two pointer variables 'p' and 'q' that can store addresses of integer values
    int **k; // Declare a double pointer variable 'k' that can store the address of another pointer variable
    int x = 100; // Declare and initialize an integer variable 'x' with the value 100
    p = &x; // Assign the address of 'x' to the pointer variable 'p', making 'p' point to 'x'
    
    k = &p; // Assign the address of 'p' to the double pointer variable 'k', making 'k' point to 'p'
    printf("%d\n", **k); // Print the value of 'x' indirectly by dereferencing the double pointer 'k' twice (once for 'p' and once for 'x')
    
    **k = **k + 1; // Increment the value of 'x' by 1 indirectly using the double pointer 'k', which points to 'p' that points to 'x'
    printf("%d\n", x); // Print the updated value of 'x' directly to verify the increment operation
    return 0; // Return 0 to indicate successful execution of the program
    
}
