#include <stdio.h>

//leap year calculation

int main(void){
    
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
//    if (year % 4 == 0)
//      if (year % 100 == 0 )
//        if (year % 400 == 0)
//          printf ("Yes the year is a leap year\n");
//       else
//          printf("No this is not a leap year\n");
//      else
//         printf("Yes this is a leap year\n");
//    else
//      printf("No this is not a leap year\n");
 
        if((year % 4 == 0 && year % 100 !=0) || year % 400 == 0)
            printf(" Yes %d is a leap year \n", year);
    else
        printf(" No %d is not a leap year \n", year);
            
    return 0;
}
