#include <stdio.h>

/**
    print the binary equivalent of a signed integer value.

*/

void printBinary(int n){
    int i;
    unsigned k = 1 << 31;
    for(i = 0; i < sizeof(int) * 8; ++i){
        if ((n & (k >> i)) == (k >> i))
            printf("1");
        else
            printf("0");

        if ( (i+1) % 8 == 0)
            printf(" ");
    }
}


/**
 The function flip receives a signed integer n and inverts every bit of n and
 returns the inverted integer. That is, it performs equivalent to bitwise complement
 operator ~.
 You must not use ~ for doing the function.
 You must not change the prototype of function flip.
 You must not change anywhere else of the program apart from developing function flip.

*/
int flip(int n){
    unsigned int mask = 1; // Initialize the mask with only the least significant bit set.

    for (int i = 0; i < sizeof(int) * 8; ++i) {
        if ((n & mask) != 0) {
            // If the current bit of n is set, clear the corresponding bit in result.
            n &= ~mask;
        } else {
            // If the current bit of n is not set, set the corresponding bit in result.
            n |= mask;
        }
        mask <<= 1; // Shift the mask one position to the left for the next iteration.
    }

    return n; // Return the final value with all bits inverted.
}

int main(void){
    // Do not change anything here.
    // There are 3 test cases, you need to pass through all of them.
    // Run the program after completing flip function.
    

    
    
    int k = 5;
    int p = flip(k);
    int count = 0;
    if (p == -6){
        printf("First Test case: Passed\n");
        count++;
    }
    else{
        printf("First Test case: Failed\n");
    }

    p = flip(-1);
    if (p == 0){

        printf("Second Test case: Passed\n");
        count++;
    }
    else{
        printf("Second Test case: Failed\n");
    }

    p = flip(100);
    if (p == -101){
        printf("Third Test case: Passed\n");
        count++;
    }
    else{
        printf("Third Test case: Failed\n");
    }

    // checking if all test cases were passed.
    if (count == 3){
        printf("Well done\n");
    }
    else{
        printf("%d out of 3 test cases are passed\n", count);
        printf("Please recheck your function, you are missing something\n");
    }



    return 0;
}
