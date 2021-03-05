#include<stdio.h>
#include<conio.h>

void main(){
    int a[10],n,i,k;
    clrscr();
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the search item:");
    scanf("%d",&k);

    for(i=0;i<n;i++){
        if(a[i]==k){
            printf("element found at position %d\n",i);
            break;
        }
    }
    if(i==n)
        printf("element not found\n");
    

    getch();
}
