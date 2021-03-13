#include<stdio.h>
#include<conio.h>

int reverse(void);
void main(){
    int rev;
    clrscr();
    rev = reverse();
    printf("Reverse= %d\n",rev);
    getch();
}
int reverse(){
    int n,rev=0,r;
    printf("Enter number:");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    return rev;
} 

