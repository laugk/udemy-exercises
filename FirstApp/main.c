#include <stdio.h>

int main(){
    int units;    // you need to input this
    double bill_amount = 0.0;  // you need to calculate this

    
    // prompt user to input unit consumed using printf and then
    // using scanf read the value into the unit variable.
    printf("Enter unit consumed: ");
    scanf("%d", &units);

    

    
    // Now, use if-elseif to decide about rate
    if (units < 0){
        printf("Unit consumed cannot be negative\n");
        
    }
    else if(units >= 0 && units <= 100){
        bill_amount = units * 0.2;     // for this range 0.2 is the rate
    }
    else if(units >100 && units<=250){
        bill_amount = 0.2 * 100 + ((units - 100) * 0.5);
    }
    else if(units >250 && units<=500){
        bill_amount = (0.2 * 100) + (0.5*150) + ((units - 250) * 0.75);
    }
    else{        // for anything >500
        bill_amount = (0.2 * 100) + (0.5 * 150) + (0.75 * 250 ) + (units - 500) * 1 ;

    }

    
    
    // ** finally print the bill amount here, please note that if the unit consumed is
    // invalid that is negative then no bill should be printed. **

    
     printf("Input Unit Consumed: %d\n", units);
     printf("Total bill: $%.2f for %d units \n", bill_amount, units);
     printf("Thank you!\n");

    
    return 0;
}
