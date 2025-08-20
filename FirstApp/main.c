
#include <stdio.h>

int main(void)
{
    
    int  a;
    
    printf("Enter number of neighbours: \n" );
    scanf("%d", &a);
    
    if (a == 0) {
        printf("Sad and will force you to listen to his story, will make you late.");
    } else if (a == 1){
        printf("He will ask you to deliver half of the pizza to his only neighbor, you may be late.\n");
    }    else if (a >=2 && a<= 5) {
                printf("Will have great mood and will be singing song. May crack joke as well. You will get good tips, definitely.\n");
    }       else if (a == 7){
                    printf("He will be making great drink for his neighbors and will invite you to taste. But will not give you tip.\n");
    }           else if (a ==6 || a == 8){
        printf("Too angry and furious, deliver the pizza and leave ASAP.\n");
    }               else if (a >= 9)
        printf("Invalid number of neighbours\n");
        
        
    return 200;
        
    }

    
    
