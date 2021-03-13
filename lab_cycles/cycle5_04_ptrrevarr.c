#include<stdio.h>
#include<conio.h>
void main(){
   int n, i, arr[50];
   clrscr();
   int *ptr;
   ptr = &arr[0];
   printf("Enter the limit:");
   scanf("%d", &n);
   printf("Enter the elements:\n"); 
   for (i = 0; i < n; i++){
      scanf("%d", ptr);
      ptr++;
   }
   ptr = &arr[n - 1];
   printf("Reverse Array:");
   for (i = n - 1; i >= 0; i--) {
      printf("%d ",*ptr);
      ptr--;
   }
   printf("\n");
   getch();
}
