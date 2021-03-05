#include<stdio.h>
#include<conio.h>

void main(){
    int a[10],n,i;
    clrscr();
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Reverse: ");
    for(i--;i>=0;i--){
        printf("%d ",a[i]);
    }
    printf("\n");
    getch();
}
