#include <stdio.h>
#include <conio.h>
void main() {

    clrscr();
    int a[10][10], transpose[10][10], r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("\nEnter matrix elements:\n");
    for (i = 0; i < r; ++i){
        for (j = 0; j < c; ++j) {
            scanf("%d", &a[i][j]);
        }
    }

    // Finding the transpose of matrix a
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            transpose[j][i] = a[i][j];
        }

    // Displaying the transpose of matrix a
    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < c; ++i){
        for (j = 0; j < r; ++j) {
            printf("%d  ", transpose[i][j]);
        }
        printf("\n");
    }
    getch();
}
