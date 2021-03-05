#include<stdio.h>
#include<conio.h>
void main(){
    int i, j, sum = 0, fact,n=0;
    printf("Enter a num: ");
    scanf("%d",&n);
    for(i = 1;i<=n;i++){
        fact = 1; 
        for(j=1;j<=i;j++){
            fact = fact * j;
        }
        sum += fact;
    }
    printf("sum = %d\n",sum);
    getch();
}
