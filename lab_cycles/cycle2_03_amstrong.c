#include <stdio.h>
#include <conio.h>
void main() {
    int n,i,k,copy,length,result,rem,powResult;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &n);
    length = 0;
    copy = n;
    while (copy != 0) {
         copy /= 10;     
        ++length;
    }
    copy = n;
    result = 0;
    while (copy != 0) {
     rem = copy % 10;
     powResult = 1; 
     for(k = 1; k<=length; k++ ){
        powResult *= rem;
     }
     result += powResult;
     copy /= 10;
    }
    if(result == n){
        printf("The number is a amstrong number \n");
    }else{
        printf("The number is not amstrong number \n");
    }
    getch();
}
