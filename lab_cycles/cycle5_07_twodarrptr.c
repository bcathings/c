#include <stdio.h>
#include <conio.h>

void main() {
    int a[10][10],r, c, i, j;
    clrscr();
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("\nEnter matrix elements:\n");
    for (i = 0; i < r; ++i){
        for (j = 0; j < c; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix: \n");
    for (i = 0; i < r; ++i){
        for (j = 0; j < c; ++j) {
            printf("%d\t", *(*(a+i)+j));
        }
        printf("\n");
    }
    getch();
}
