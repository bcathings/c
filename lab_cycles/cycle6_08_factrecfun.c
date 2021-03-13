#include<stdio.h>
#include<conio.h>
long int multiplyNumbers(int n);
void main() {
    int n;
    clrscr();
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld\n", n, multiplyNumbers(n));
    getch();
}

long int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}
