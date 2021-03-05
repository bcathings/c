#include<stdio.h>
int main(){
    int i, sumfact=1,j,n,fact; 
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i = 1; i<=n; i++){

        fact = 1; 

        for(j=1; j<=i; j++){

            fact *= j;
        }
        sumfact += fact;
    }
    printf("%d\n",sumfact);
}
