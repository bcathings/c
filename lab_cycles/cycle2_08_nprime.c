#include<stdio.h>
#include<conio.h>
void main(){
    int n,i,fact,j;
    clrscr();
    printf("Enter the limit:");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        fact=0;
        for(j=1; j<=n; j++){
            if(i%j==0)
                fact++;
        }
        if(fact==2)
            printf("%d " ,i);
    }
    printf("\n");
    getch();
}
