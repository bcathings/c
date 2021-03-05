#include <stdio.h>
#include <conio.h>
void main() {
    clrscr();
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;
    int isEqaual = 1;
    printf("Enter the number of rows (between 1 and 100): ");
    scanf("%d", &r);
    printf("Enter the number of columns (between 1 and 100): ");
    scanf("%d", &c);

    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r; ++i){
        for (j = 0; j < c; ++j) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < r; ++i){
        for (j = 0; j < c; ++j) {
            scanf("%d", &b[i][j]);
        }
    }

    // adding two matrices
    for (i = 0; i < r; ++i){
        for (j = 0; j < c; ++j) {
            if(a[i][j] != b[i][j]){
                isEqaual = 0;
            }
        }
    }

    if(isEqaual){
        printf("they are equal");
    }else{
        printf("they are not equal");
    }

    getch();
}
