#include <stdio.h>

int main(void) {
    int x, y;
    //x is row y is column
    //input for x and y
    
    printf("Enter number of rows for the matrix (>3 and <=10: ");
    scanf("%d", &x);
    
    if ( x>3 && x <=10) {
        
        printf("Enter number of columns for the matrix (>3 and <=10: ");
        scanf("%d", &y);
        
        if ( y > 3 && y <=10) {
            
            
            //storing of data into 2d array
            int i,j;
            int arr1 [x][y];
            
            for (i=0; i<x; i++) {
                for(j=0;  j<y; j++) {
                    printf("Matrix [%d] [%d]: ", i, j);
                    scanf("%d",&arr1 [i][j]);
                }
            }
            
            /* recalling data from 2d array
             for (i=0; i<x; i++) {
             for(j=0;  j<y; j++) {
             printf("Matrix [%d] [%d]: %d\n", i, j, arr1[i][j]);
             }
             }
             */
            
            //transpose

            int arr2[y][x];
            
            for (i=0; i<y; i++) {
                for (j=0; j<x; j++) {
                    arr2[i][j]= arr1[j][i];
                }
            }
            
            //print transposed matrix
            
            printf("Matrix as given by you: \n");
            for (i=0; i<x; i++) {
                for(j=0;  j<y; j++) {
                    printf("%4d", arr1[i][j]);
                }
                printf("\n");
            }
            
            printf("Transpose of the given matrix: \n");
            for (i=0; i<y; i++) {
                for (j=0; j<x; j++) {
                    printf("%4d", arr2[i][j]);
                }
                printf("\n");
            }
            
        } else {
            printf("Invalid input for the number of columns\n");
            }
        } else {
            printf("Invalid input for the number of rows.\n");
        }
        
    return 0;
    }
    
  
   

