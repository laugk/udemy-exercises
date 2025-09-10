/*

#include <iostream>

using namespace std;

// declare the prototype of get_max
int get_max(int *arr, int n);

// declare the prototype of get_min

int get_min(int *arr, int n);

// Now implement the function get_max

int get_max(int *arr, int n) {
    int max = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Now implement the function get_min


int get_min(int *arr, int n) {
    int min = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
    
}


void get_max_min_sum(int *arr, int n, int *p_sum){
    
    // call get_max to get the maximum in the array arr, you will need to pass the base address arr and n to this function.
    
    int max = get_max(arr,n);
    
    
    
    // Call get_min in the similar way and get the minimum value in the array, here also you will need to pass 2 parameters, base address of the array and the number of elements in that array.
    
    int min = get_min(arr,n);
    
    // find the sum of the maximum and minimum and then assign the sum to the integer pointed by p_sum.
    
    *p_sum = max + min;
    
}

*/
