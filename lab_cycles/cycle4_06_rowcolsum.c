#include<stdio.h>
#include<conio.h>
void main(){
    int A[50][50],i,j,m,n,row=0,column=0;
    clrscr();
    printf("No of rows and columns : ");
    scanf("%d %d", &m, &n);
    printf("Enter elements into the array : \n");
    for(i=0;i<m;i++){
      for(j=0;j<n;j++){
         scanf("%d",&A[i][j]);
      }
    }
    for(i=0;i<m;i++){
      for(j=0;j<n;j++){
         row=row+A[i][j];
      }
      printf("sum of elements in row %d is: %d\n",i,row);
      row=0;
    }
    for(j=0;j<m;j++){
      for(i=0;i<n;i++){
         column=column+A[i][j];
      }
      printf("sum of elements in column %d is: %d\n",i,column);
      column=0;
    }
    getch();
}
