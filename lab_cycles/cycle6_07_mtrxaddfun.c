#include<stdio.h>
#include<conio.h>
void matrixAdd(int a[20][20],int b[20][20],int c,int r){
    int i,j;
    printf("The addition matrix:\n");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d ",a[i][j]+b[i][j]);
        }
      printf("\n");
    }

}

void main(){
    int i,j,c,r;
    int a[20][20],b[20][20];
    clrscr();
    printf("Enter the value for row and column:  ");
    scanf("%d%d",&c,&r);
    printf("Enter the value for matrix A:\n");
    for(i=0;i<c;i++){
       for(j=0;j<r;j++){
         scanf("%d",&a[i][j]);
       }
    }
    printf("Enter the value for matrix B\n");
    for(i=0;i<c;i++){
     for(j=0;j<r;j++){
        scanf("%d",&b[i][j]);
     }
    }
    matrixAdd(a,b,c,r);
    getch();
}
