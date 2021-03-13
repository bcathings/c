#include <stdio.h>
#include <conio.h>
void main(){
    int num1,num2;      
    clrscr();
    int *ptr1,*ptr2;    
    int sum;              
    printf("Please enter first value: "); 
    scanf("%d",&num1);  
    printf("Please enter second value: "); 
    scanf("%d",&num2); 
    ptr1=&num1; 
    ptr2=&num2;
    printf("Sum = %d\n",*ptr1+*ptr2);
    getch();
}
