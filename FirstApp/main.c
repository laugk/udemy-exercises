
#include <stdio.h>

int main(void)
{
    
    double income, tax, tax0, tax10, tax20, tax25;
    
    tax0 = 0.0;
    tax10= 0.1;
    tax20= 0.2;
    tax25= 0.25;
    
    printf("Enter your income: ");
    scanf("%lf", &income);
    if (income < 10000) {
        printf("Tax amount is %f\n", income * tax0 );
    }
        else if (income >= 10000 && income < 20000) {
            printf("Tax amount is %f\n", income * tax10);
        }
        
        else if (income >= 20000 && income < 50000) {
            printf("Tax amount is %f\n", income * tax20);
        }
        else if (income > 50000) {
            printf("Tax amount is %f\n", income * tax25 * 1.1);
            
        }
        else {
            printf("Error 404 : Non recognised character found");
        }
        
    return 200;
        
    }

    
    
