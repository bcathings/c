#include<stdio.h>
#include<conio.h>

void main(){
    int i,n,m,j,flag = 0;
    clrscr();
    printf("Enter a starting limit: ");
    scanf("%d",&n);
    printf("Enter stopping limit:");
    scanf("%d",&m);
    for(j=n;j<=m;j++){

        for(i=2;i<= j/2 ;i++){
    
            if(j%i == 0 ){
                flag = 1;
                break;
            } 
        }
        if(j==1)
            continue;
        if(flag==0){
            printf("%d \n",j);
        }

        flag = 0;
    }
    getch();
}
