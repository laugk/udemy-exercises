#include <stdio.h>
#include <stdlib.h>
//malloc, calloc, realloc

int main (void) {
    
    int *p;
    int n;
    printf("Enter how many integers: ");
    scanf("%d", &n);
    
    p = (int *)calloc(n , sizeof(int));
    if (p==NULL) {
        printf("Unable to allocate memory\nExiting the program\n");
        exit(1);
    }
    //use the allocated space pointed by p for keeping values
    
    int i;
    for (i=0; i<n; i++) {
        printf("Next number: ");
        scanf("%d", p+i);
    }
    
    printf("Content of the array: ");
    for (i=0; i<n; i++) {
        printf("%4d",*(p+i));
    }
    printf("\n");
    
    
    return 0;
}
