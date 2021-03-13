#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(){
    int *arr;
    int n,i;
    clrscr();
    printf("Enter limit:");
    scanf("%d",&n);
    arr=(int *) malloc(n*sizeof(int));
    printf("Enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",(arr+i));
    printf("Elements:");
    for(i=0;i<n;i++)
        printf("%d ",*(arr+i));
    printf("\n");
    getch();
}
