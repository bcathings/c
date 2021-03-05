#include<stdio.h>
#include<conio.h>
void main(){
  int a[10],n; 
  int i, j, t; 
  printf("Enter Limit:") ;
  scanf("%d",&n);
  printf("Enter Elements: ");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
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
  getch();
}
