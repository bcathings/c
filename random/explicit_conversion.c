#include<stdio.h>

int main(){
  int a,b;
  float result;
  printf("Enter the first number : ");
  scanf("%d",&a);
  printf("Enter the second number : ");
  scanf("%d",&b);
  

  result = (float) a/b;

  printf("Quotient : %f \n",result);
  return 0;
  
}
