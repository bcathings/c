#include <stdio.h>
#include <conio.h>
void main() {
    int n, rev = 0, remainder;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    printf("Reverse = %d \n", rev);
    getch();

}
