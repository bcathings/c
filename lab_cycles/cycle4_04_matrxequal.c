#include <stdio.h>
#include <conio.h>
void main(){
    int A[10][10],B[10][10],i,j,m,n;
    int row, col, isEqual;
    clrscr();
    printf("Enter no. of rows and columns:");
    scanf("%d%d", &m,&n);
    printf("Enter matrix A : \n");
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
             scanf("%d", &A[i][j]);
        }
    }
    printf("Enter matrix B : \n");
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
             scanf("%d", &B[i][j]);
        }
    }
 
    isEqual = 1;
 
    for(row=0; row<m; row++){
        for(col=0; col<n; col++){
            if(A[row][col] != B[row][col]){
                isEqual = 0;
                break;
            }
        }
    }
    if(isEqual == 1)
        printf("equal\n");
    else
        printf("not equal\n");
    getch();
}
