#include <stdio.h>
#include <conio.h>
void transpose(int a[10][10],int r,int c) {
    int transpose[10][10], i, j;
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            transpose[j][i] = a[i][j];
    }
    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < c; ++i){
        for (j = 0; j < r; ++j) {
            printf("%d  ", transpose[i][j]);
        }
        printf("\n");
    }
}
void main(){
    int a[10][10], r, c, i, j;
    clrscr();
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("\nEnter matrix elements:\n");
    for (i = 0; i < r; ++i){
        for (j = 0; j < c; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    transpose(a,r,c);
    getch();
}
