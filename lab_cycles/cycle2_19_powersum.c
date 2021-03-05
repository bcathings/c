#include<stdio.h>
#include<conio.h>
void main(){
    int i, j, sum = 0, square,n=0;
    printf("Enter a num: ");
    scanf("%d",&n);
    for(i = 1;i<=n;i++){
        square = 1; 
        for(j =1; j<=i;j++){
            square *= i; 
        }
        sum += square;
    }
    printf("%d\n",sum);
    getch();
}
