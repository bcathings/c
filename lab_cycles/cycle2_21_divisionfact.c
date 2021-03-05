#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,n;
    float sum = 1.0,fact;
    printf("Enter a num: ");
    scanf("%d",&n);
    for(i = 1;i<=n;i++){
        fact = 1; 
        for(j = 1; j<=i;j++){
           fact *= j; 
        }
        sum = sum + (1/fact);
    }
    printf("%f\n",sum);
    getch();
}
