#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    int i;
    for (i =2; i <=sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int sumOfPrimes (int lb, int ub) {
    int count, sum;
    
    for (count=lb, sum = 0; count <=ub; count++) {
        if (isPrime(count))
            sum +=count;
    }
    return sum;
}





int main(void) {
    /*    int count;
     for(count=10; count<=100; count++)
     if (isPrime(count))
     printf("%d is Prime\n", count);
     
     
     return 0;
     }
     */
    
    
    int s;
    s = sumOfPrimes(10,200);
    printf("Sum of primes in the range %d-%d is %d\n", 10, 200, s);
}
