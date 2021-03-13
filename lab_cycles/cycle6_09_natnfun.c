#include<stdio.h>
#include<conio.h>
void displaynums(int n){
    int i;
    for(i=0;i<n;i++){
      printf("%d ",i+1);  
    }
}
void main(){
   int n; 
   clrscr();
   printf("Enter a number:");
   scanf("%d",&n);
   printf("natural numbers till %d = :",n);
   displaynums(n);
   printf("\n");
   getch();
}
