#include <stdio.h>
#include <conio.h>
void main() {
    clrscr();
    int r, c, a[100][100], i, j;
    int sum  = 0;
    printf("Enter the number of rows (between 1 and 100): ");
    scanf("%d", &r);
    printf("Enter the number of columns (between 1 and 100): ");
    scanf("%d", &c);

    printf("\nEnter elements :\n");
    for (i = 0; i < r; ++i){
        for (j = 0; j < c; ++j) {
            scanf("%d", &a[i][j]);
        }
    }


    for (i = 0; i < r; ++i){
        for (j = 0; j < c; ++j) {
            sum += a[i][j];
        }
    }

    printf("sum = %d", sum);

    getch();
}
