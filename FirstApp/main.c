#include <stdio.h>

void count_digits(char str[]) {
    // Find the number of each digits in the character array str supplied.
    // You can safely asssume that there is a NULL at the end of the string str.
    // You will need to print the frequency of each digit as described in the problem statement.
    
    
    int frequency[10]= {0};
 
            // Ignore non-alphabetic characters at the beginning of the string
    for (int head = 0; str[head] !='\0'; head++) {
    
        if (str[head] >='0' && str[head] <='9') {
            int index = str[head] - '0';
            frequency[index]++;
        }
    }
    
        for (int i = 0; i < 10; i++) {
            if (i == 9) {
                printf("%d", frequency[i]); // No space here for the last digit
            } else {
                printf("%d ", frequency[i]); // Space after each digit, except for the last one
            }
        }
        printf("\n");
    
}
