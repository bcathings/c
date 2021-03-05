#include<stdio.h>
#include<conio.h>

void main(){
    int a[100],n,i,large,small;
    clrscr();
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    large = small = a[0];
    for(i=0;i<n;i++){
        if(a[i] > large){
            large = a[i];
        }
        if(a[i] < small){
            small = a[i];
        }
    }
    printf("smallest element=%d\n",small);
    printf("largest element=%d\n",large);
    getch();
}
