//
//  Colony with 8 cells.c
//  FirstApp
//
//  Created by GK on 10/9/25.
//

#include <stdio.h>
#define size 8

void print_array(int [], int);
void eight_colony_cell(int[], int);

void eight_colony_cell (int arr[], int days) {
    int d = 1;
    int temp[8];
    int left, right;
    while (d <=days) {
        for (int i=0; i< size; ++i) {
            left = (i==0) ?0:arr[i-1];
            right = (i == size-1) ?0:arr[i+1];
            temp[i] = (left == right)?0:1;
            }
        for(int i=0; i < size; ++i) {
            arr[i] = temp[i];
            }
        printf("Situation after day: %d\n", d);
        print_array(arr, size);;
        ++d;
        }
}


void print_array (int arr[], int n) {
    printf("\n[");
    int i;
    for (i=0; i<n; ++i) {
        if (i !=n-1)
            printf("%4d", arr[i]);
        else
            printf("%4d ]\n\n", arr[i]);
    }
}

int main(void) {
    int arr [] = {1,0,0,1,1,1,0,1};
    eight_colony_cell(arr, 10);
    return 0;
}

