
#include <stdio.h>
void main() {
    int r, a[100][100], i, j;
    int isUpper = 1, isLower = 1;
    printf("Enter the size of square matrix (between 1 and 100): ");
    scanf("%d", &r);

    printf("\nEnter elements :\n");
    for (i = 0; i < r; ++i){
        for (j = 0; j < r; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    
    for (i = 0; i < r; ++i){
        for (j = 0; j < r; ++j) {
           if(i < j){

               if(a[i][j] != 0){

                   isUpper = 0;
               }
           }
           if(i > j){

               if(a[i][j] != 0){
                   isLower = 0;
               }
           }
        }
    }
    if(isUpper){
        printf("matrix is upper \n");
    }
    if(isLower){
        printf("matrix is lower \n");
    }
    if(!isLower && !isUpper){
        printf("nop");
   }
}
