#include<stdio.h>
#include<conio.h>
int smallfunc(){
    int a[100],n,i,small;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    small = a[0];
    for(i=0;i<n;i++){
        if(a[i] < small){
            small = a[i];
        }
    }
    return small;
}
void main(){
    int s;
    clrscr();
    s=smallfunc();
    printf("smallest element=%d\n",s);
    getch();
}
