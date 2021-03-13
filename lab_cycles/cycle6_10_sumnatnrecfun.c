#include <stdio.h>
#include <conio.h>
int addNumbers(int n);
void main() {
    int num;
    clrscr();
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum = %d\n", addNumbers(num));
    getch();
}
int addNumbers(int n) {
    if (n != 0)
        return n + addNumbers(n - 1);
    else
        return n;
}
