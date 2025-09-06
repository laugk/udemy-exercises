/*
 
 In this coding exercise you will write a simple function as instructed below. Please note that, you will not write the main function but only the function as instructed below.

 Write a function named my_function that will receive 3 parameters, all positive(unsigned) integers, the return type of the function is also positive (unsigned) integer. First you will declare  the prototype at the beginning and then you will write the implementation of the function as well.

 You can name the parameters as you like, I would like to refer them as first, second and third.

 Task: The function my_function will find  and return the highest number that is divisible by the third parameter in the range > first and <=second.  You can safely assume that, first < second always. If no such value found function should return 0.

 Test case 1:

 first: 10, second = 25, third: 3

 return value should be 24, as 24 is the highest number >first and <=second that is divisible by third.

 function will return 24, as 24 is the highest number that is divisible by 3 in the range >5 and <=25

 Test case 2:

 first: 10, second: 50, third: 67

 return value 0, as there is no multiple of 67 in the range >first and <=second.
 */


// declare your function named my_function as instructed above in the program statement.


    unsigned int my_function(unsigned int first, unsigned int second, unsigned int third);

// Now start implementing my_function below, please note that the name of the function must be my_function and the prototype
// should be exactly as instructed.

    unsigned int my_function(unsigned int first, unsigned int second, unsigned int third) {
        // Handle edge cases
        if (first >= second || third == 0) {
            return 0;
        }

        // Iterate through the range from second to first + 1
        for (unsigned int i = second; i > first; i--) {
            // Check if i is divisible by third
            if (i % third == 0) {
                // Return i immediately as it's the highest value that meets the condition
                return i;
            }
        }

        // If no valid number is found, return 0
        return 0;
    }
        
