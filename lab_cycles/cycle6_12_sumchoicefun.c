#include<stdio.h>
#include<conio.h>
 
void ptrsum(int *ptr1, int *ptr2){
        printf("sum = %d\n", *ptr1+*ptr2);
}
void valsum(int a, int b){
        printf("sum = %d\n", a+b);
}
 
void main(){
        int num1, num2,choice;
        clrscr();
        printf("Enter The First Number: ");
        scanf("%d", &num1);
        printf("Enter The Second Number: ");
        scanf("%d", &num2);
        printf("Enter choice: ");
        scanf("%d",&choice);
        if( choice == 1){
            valsum(num1,num2);
        }else if(choice == 2){
            ptrsum(&num1,&num2);
        }else{
            printf("Wrong choice\n");
        }
        getch();
}

