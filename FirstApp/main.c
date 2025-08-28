#include <stdio.h>
#include <math.h>

int main(void) {
    
    
    int n1, n2;      ///line numbers
    int i, j;   /// i = line number, j = column number in the line
    
    printf("Enter how many lines: ");
    scanf("%d", &n1);
    n2 = n1;
    
    for(i = 1; i <= n1; ++i ) {
        for (j = 1; j<=i; ++j) {
            if ((i+j)% 2 == 0) {
                printf("0 ");
            } else {
                printf("1 ");
            }
            
        }
        printf("\n");
    }
    
    
    
  //  for (i = n2; i >= 1; --i) {
  //      for (j = 1; j <= i; ++j) {
  //          printf("*");
  //      }
 //       printf("\n");
 //   }
    
    
    
    
    
    return 0;
    
}



