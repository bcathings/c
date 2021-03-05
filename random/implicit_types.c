#include<stdio.h>

int main(){
  int a;
  float result,b;

  printf("Enter first number : ");
  scanf("%d",&a);
  printf("Enter second number : ");
  scanf("%f",&b);

  result = a/b;
  
  printf("Quotient : %f \n",result);

  return 0;
}

