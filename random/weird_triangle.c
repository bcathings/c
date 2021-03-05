#include <stdio.h>
#include <conio.h>
void main() {
   int i, space, rows,j=0;
   clrscr();
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 0;i <= rows; ++i){
    for(space = 0; space < rows - i;space++){
        printf("  ");
    }
    for(j = i; j >= 0;j--){
        printf("%d ",j);
    }
    for(j = 1; j <= i; j++){
        printf("%d ", j);
    }
    printf("\n");

  }
  getch();
}
