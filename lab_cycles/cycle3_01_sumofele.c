#include<stdio.h>
#include<conio.h>

void main(){
    int a[10],n,i,s=0;
    clrscr();
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        s += a[i];
    }
    printf("sum = %d\n",s);
    getch();
}
