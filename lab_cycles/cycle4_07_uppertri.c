#include <stdio.h>
#include <conio.h>

void main(){
    int A[10][10],i,j,m,n;
    int row, col, isUpper;
    printf("Enter no of rows and columns: ");
    scanf("%d%d", &m,&n);
    printf("Enter values to the matrix: \n");
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
             scanf("%d", &A[i][j]);
        }
    }
    isUpper = 1;
    for(row=0; row<m; row++){
        for(col=0; col<n; col++){
            if(col<row && A[row][col]!=0){
                isUpper = 0;
            }
        }
    }
    if(isUpper==1)
        printf("This is a Upper triangular matrix.\n");
 
    else
        printf("This is Not a Upper triangular matrix\n");
    getch();
}
