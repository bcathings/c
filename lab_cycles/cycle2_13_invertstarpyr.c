#include <stdio.h>
#include <conio.h>

void main() {
    int n,i,j;
    clrscr();
    printf("Enter a limit: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j=i; j<=n; j++){
            printf("*");
        }
        printf("\n");
    }
    getch();
}
