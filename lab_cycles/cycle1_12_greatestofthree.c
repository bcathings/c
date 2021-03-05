#include <stdio.h>
#include <conio.h>

void main(){
    int n1,n2,n3;
    clrscr(); 
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1 >= n2){

        if(n1>=n3)
            printf("%d is the largest\n",n1);
        else
            printf("%d is the largest\n",n3);
    }else{
        if(n2 >= n3)
            printf("%d is the largest\n",n2);
        else
            printf("%d is the largest\n",n3);
    }
    getch();
}

