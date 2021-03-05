#include<stdio.h>

int main(){
    int i, j,n=0;
    float sum = 0.0,fact;
    printf("Enter a num: ");
    scanf("%d",&n);

    for(i = 1;i<=n;i++){

        fact = 1; 

        for(j = 1; j<=i;j++){

           fact *= j; 

        }

        sum = sum + (i/fact);
    }
    printf("%f\n",sum);
}
