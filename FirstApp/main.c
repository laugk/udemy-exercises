#include <math.h> // Include math library to use sqrt function

// Function to check if a number is prime
int isPrime(int k) {
    int i;
    // Loop through all numbers from 2 to square root of k (inclusive)
    for(i = 2; i <= sqrt(k); ++i){
        // If k is divisible by any number in the range, it's not prime
        if (k % i == 0){
            return 0;
        }
    }
    // If no factors found, then it's a prime number
    return 1;
}

// Function to calculate sum of all prime numbers less than or equal to a given upper bound
int sum_prime (int ub) {
    int count, sum = 0; // Initialize count and sum variables

    // Loop through all numbers from 2 to the upper bound (inclusive)
    for (count = 2; count <= ub; count++) {
        // If the number is prime, add it to the sum
        if (isPrime(count))
            sum += count;
    }

    // Return the calculated sum
    return sum;
}

