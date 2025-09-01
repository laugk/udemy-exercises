#include <stdio.h>

int main(void) {
    int r, c;
    // r is no of salesperson, c is no of items that they sell
    //input for r and c
    
    printf("Enter number of salesperson: ");
    scanf("%d", &r);
    printf("Enter number of items: ");
    scanf("%d", &c);
    printf("\n\n\n");
    
    //declare 2d array
    double saleData [r][c];
    //input saledata into the array
    printf("Enter sale data: \n\n");
    int i,j;
    for (i=0;i<r;i++) {
        for (j=0;j<c; j++){
            printf("Sale amt for salesperson no %d item no %d: ", i+1, j+1);
            scanf("%lf", &saleData [i][j]);
        }
    }
    //display report
    printf("----------------------------\n");
    printf("Sale Data\n");
    printf("----------------------------\n\n");
    double total = 0.0;
    for (i=0; i<r;i++) {
        printf("Sale data for salesperson no. %d\n",i+1);
        printf("----------------------------\n\n");
        total = 0.0;
        for (j=0;j<c;j++) {
            printf("\tItem %d:   $ %.2f\n", j+1, saleData [i][j]);
            total += saleData [i][j];
        }
        printf("\tTotal:   $ %.2f\n", total);
        printf("\n\n");
        
    }
    
    return 0;
}
