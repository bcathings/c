#include <stdio.h>
#include <conio.h>

void main(){
  int n,r,s=0;
  clrscr();
  printf("Enter a number:");
  scanf("%d", &n);
  while(n > 0){
     r = n % 10;
     s = s+ r;
     n = n / 10;
  }
  printf("sum of digits = %d\n", s);
  getch();
}
