#include<stdio.h>
#include<conio.h>
int sort(int a[20],int n){
  int i, j, t; 
  for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
      if(a[i]>a[j]){
         t=a[i];
         a[i]=a[j];
         a[j]=t;
      }
    }
  }
  printf("Elements After Sorting: ");
  for(i=0;i<n;i++){
    printf("%d ",a[i]);
  }
  printf("\n");
}
void main(){
  int a[20],i,n;
  clrscr();
  printf("Enter Limit:") ;
  scanf("%d",&n);
  printf("Enter Elements: ");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  sort(a,n);
  getch();
}
