#include<stdio.h>

int main(){

    int i,n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(i=2;i<n;i++){
    
        if(n%i == 0 ){
            printf("The number is not prime\n");
            return 0;
        }    

    }
    printf("The number is prime \n");
    return 0;
}
