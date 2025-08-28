#include <stdio.h>
#include <math.h>

int main(void) {
    
    
    int age;
    char response;
    
    do {
    
        printf("Enter age: ");
        scanf("%d", &age);
        
        if (age >=13 && age <=19)
            printf("Teenage\n");
        else
            printf("Not Teenage\n");
        
        
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &response);
        
    }while (response == 'y' || response == 'Y');
    
    return 0;
    
}



