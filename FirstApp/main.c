#include <stdio.h>

int main(void) {
    
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    age >=13 && age<=19 ? printf ("Yes teenage\n") : printf( "No not teenage\n");
    
    return 0;
}
