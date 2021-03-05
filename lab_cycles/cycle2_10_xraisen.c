#include <stdio.h>
#include <conio.h>
void main() {
    int x,n,i,result = 1;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter the power: ");
    scanf("%d", &n);

    for(i = 1; i<=n; i++ ){
       result *= x;
    }
    printf("result = %d\n", result);
    getch();
}
