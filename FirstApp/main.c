#include <stdio.h>
#include <string.h>

/*
A palindrome is a string that is same in both forward and backward reading.
Example:
   "madam"
   "racecar"
   "a man a plan a canal panama"
   "radar"
You will write a program that will test if a given string is a palingdrome or not.
Your program will ask the user to input a string and if the string is a palindrome program
will just print "Yes, it is a Palindrome", otherwise will print "No, not a Palindrome".

Please note that:
1. Your you need to check in case-insensitive way, that means: Madam or madam both should be
detected as Palindrome.

2. There can be (any number of ) spaces in between the words.
    "A man a plan a canal panama"
        OR
    "A     man    a   pla n a cana l Panama"
    both the strings must be detected as Palindrome.
3.There can be punctuations in between the words, for this assignments,
we consider only 4 punctuations,   . ?  ! and ,

Your program will just need to ignore them (treat them as space).
    "Cigar? Toss it in a can. It is so tragic."
    Should be detected as palindrome.

 *** For this assignment I will not write any instructions or guidance, you are free
        to implement it with your own way, you can use the string.h functions

    Good luck.

*/


// Function to check if a given string is a palindrome or not
int isPalindrome(char *str) {
    int head, tail; // declare two pointers to traverse the string from both ends

    // Loop until the pointers meet in the middle of the string
    for (head = 0, tail = strlen(str) - 1; head < tail; head++, tail--) {
        // Ignore non-alphabetic characters at the beginning of the string
        while (!((str[head] >= 'a' && str[head] <= 'z') || (str[head] >= 'A' && str[head] <= 'Z')) && head < tail)
            head++;
        // Ignore non-alphabetic characters at the end of the string
        while (!((str[tail] >= 'a' && str[tail] <= 'z') || (str[tail] >= 'A' && str[tail] <= 'Z')) && head < tail)
            tail--;

        // Compare characters at both ends of the string, ignoring case
        if ((str[head] | 0x20) != (str[tail] | 0x20))
            return 0; // return 0 if characters are not equal
    }

    return 1; // return 1 if all characters are equal
}

int main(void) {
    char string[100]; // declare a character array to store the input string

    printf("Enter a string: "); // prompt user to enter a string
    fgets(string, sizeof(string), stdin); // read input string from user

    // Call isPalindrome function to check if the input string is a palindrome or not
    if (isPalindrome(string)) {
        printf("Yes, it is Palindrome!\n"); // print message if input string is a palindrome
    } else {
        printf("No, not a Palindrome\n"); // print message if input string is not a palindrome
    }

    return 0; // return 0 to indicate successful execution of the program
}
