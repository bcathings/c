#include <stdio.h>
#include <conio.h>

void main(){

    int i,n,fact = 1;
    clrscr();
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact = fact * i;
    }
    printf("factorial = %d\n", fact);
    getch();
}
