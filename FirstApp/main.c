#include <stdio.h>


// Function definition for 'toggleChar', which takes a pointer to a character as an argument.
void toggleChar(char *ptr) {
    int i; // Declare a local integer variable 'i' to be used in the loop counter.

    // Start of a for-loop that iterates until it reaches the null terminator ('\0') at the end of the string.
    for (i = 0; *(ptr + i) != '\0'; i++) {
        // Check if the current character pointed to by 'ptr' is an uppercase letter.
        if (*(ptr + i) >= 'A' && *(ptr + i) <= 'Z')
            // If it is, add 32 to its ASCII value to convert it into a lowercase letter.
            *(ptr + i) = *(ptr + i) + 32;
        // Check if the current character pointed to by 'ptr' is a lowercase letter.
        else if (*(ptr + i) >= 'a' && *(ptr + i) <= 'z')
            // If it is, subtract 32 from its ASCII value to convert it into an uppercase letter.
            *(ptr + i) = *(ptr + i) - 32;
    }
}

// Main function definition for the program.
int main(void) {
    char str[100]; // Declare a character array 'str' with a size of 100 to store user input string.

    printf("Enter a string: "); // Prompt the user to enter a string.
    scanf("%[^\n]", str); // Read user input and store it in the 'str' array until a newline character ('\n') is encountered.

    toggleChar(str); // Call the 'toggleChar' function, passing the address of the first character in the 'str' array as an argument.
    printf("Toggled characters: %s\n", str); // Print the modified string after toggling the case of each character.

    return 0; // Return 0 to indicate successful execution of the program.
}
