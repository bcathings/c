#include<stdio.h>
#include<conio.h>
void main(){
    int i,n;
    clrscr();
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i == 0 ){
            printf("The number is not prime\n");
            return;
        }    
    }
    printf("The number is prime \n");
    getch();
}
