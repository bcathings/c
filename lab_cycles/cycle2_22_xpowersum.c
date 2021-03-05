#include<stdio.h>
#include<conio.h>

void main(){
    int i, j, sum = 1,square,x,n;
    printf("Enter a num: ");
    scanf("%d",&x);
    printf("Enter power: ");
    scanf("%d",&n);
    for(i = 1;i<=n;i++){
        square = 1; 
        for(j =1; j<=i;j++){
            square *= x; 
        }
        sum += square;
    }
    printf("%d\n",sum);
    getch();
}
