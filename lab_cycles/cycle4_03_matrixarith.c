#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,c,r,k,choice;
    int a[20][20],b[20][20],ma[20][20],ms[20][20];
    int mm[20][20];
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
    printf("Enter choice (1,2,3,4):  ");
    scanf("%d",&choice);

    for(i=0;i<c;i++){
       for(j=0;j<r;j++){
          ma[i][j]=a[i][j]+b[i][j];
          ms[i][j]=a[i][j]-b[i][j];
       }
    }
    for(i=0;i<c;i++){
       for(j=0;j<r;j++){
           mm[i][j]=0;
           for(k=0;k<c;k++){
               mm[i][j] +=a[i][k]*b[k][j];
           }
       }
    }
    switch(choice){
        case 1:
            printf("The addition matrix:\n");
            for(i=0;i<c;i++){
                for(j=0;j<r;j++){
                    printf("%d ",ma[i][j]);
                }
              printf("\n");
            }
            break;

        case 2:
            printf("The subtraction matrix:\n");
            for(i=0;i<c;i++){
               for(j=0;j<r;j++){
                   printf("%d ",ms[i][j]);
               }
               printf("\n");
            }
            break;
        case 3:
            printf("The multiplication matrix is:\n");
            for(i=0;i<c;i++){
               for(j=0;j<r;j++){
                   printf("%d ",mm[i][j]);
                 }
               printf("\n");
            }
            break;
        default:
            printf("exit\n");
            break;
    }
    getch();
}
