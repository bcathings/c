#include<stdio.h>
#include<conio.h>

void main() {
    int numArray[50];
    int i,n, sum = 0;
    clrscr();
    int *ptr; 
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter elements : ");
    for (i = 0; i < n; i++)
      scanf("%d", &numArray[i]);
    ptr = numArray; 
    for (i = 0; i < n; i++) {
      sum = sum + *ptr;
      ptr++;
    }
    printf("sum : %d\n", sum);
    getch();
}
