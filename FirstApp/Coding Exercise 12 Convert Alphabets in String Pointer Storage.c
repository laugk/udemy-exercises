//
//  Coding Exercise 12 Convert Alphabets in String Pointer Storage.c
//  FirstApp
//
//  Created by GK on 10/9/25.
//

#include <iostream>
using namespace std;

// Write your code below. You will need to write only one function, convert, please read the problem statement above to write the function.  The prototype of the function must match with the tester.
// You are free to write additional functions for your purpose but, may not be necessary.

int  is_lower_case(char ch) {
    return (ch >= 'a' && ch <= 'z');
}

int is_upper_case(char ch) {
    return (ch >='A' && ch <= 'Z');
}

char to_lower_case(char ch) {
    if (is_upper_case(ch))
        return ch + 32;
    else
        return ch;
}

char to_upper_case(char ch) {
    if(is_lower_case(ch))
        return ch -32;
    else
        return ch;
}


int convert(char *str, int flag){
    int changeCount = 0;
    
    while (*str != '\0') {
        char originalChar = *str;
        
        if (flag == 0) {
            *str = to_upper_case(*str);
        } else if (flag == 1) {
            *str = to_lower_case(*str);
        }
        
        if (*str != originalChar) {
            changeCount++;
        }
        str++;
    }
    return changeCount;
}



