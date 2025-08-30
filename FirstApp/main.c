#include <stdio.h>

int main(void) {
    int arr[10] = {0};  // Declare and initialize the array with size 10
    int n, i, d;

    printf("You can input at most 10 digits number\n");
    printf("Enter total number of digits in the number: ");
    scanf("%d", &n);

    // Check if the number of digits is valid
    if (n > 10) {
        printf("Error: Number of digits exceeded limit.\n");
        return 1;  // Return error code
    }

    // Input each digit one at a time and store it in the array
    for (i = 10 - n; i < 10; i++) {
        printf("Enter digit #%d: ", 10 - i);
        scanf("%d", &arr[i]);
    }

    printf("\nThe input number is: ");
    for (i = 0; i < 10; i++) {
        printf("%d", arr[i]);
    }

    // Input the digit to be added
    printf("\nEnter a digit between 1 and 9 to add with the number: ");
    scanf("%d", &d);

    // Check if the digit is valid
    if (d < 1 || d > 9) {
        printf("Error: Invalid digit.\n");
        return 2;  // Return error code
    }

    // Add the digit to the number starting from index 9
    int carry = d;
    for (i = 9; i >= 0 && carry > 0; i--) {
        int sum = arr[i] + carry;
        arr[i] = sum % 10;
        carry = sum / 10;
    }

    printf("\nThe number after addition is: ");
    for (i = 0; i < 10; i++) {
        printf("%d", arr[i]);
        
    }
    printf("\n");
    return 0;
}
