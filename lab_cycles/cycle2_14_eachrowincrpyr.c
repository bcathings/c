#include <stdio.h>
#include <conio.h>

void main() {
    int n,i,j,p=1;
    clrscr();
    printf("Enter a limit: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("%d ",p);
            p++;
        }
        printf("\n");
    }
    getch();
}
