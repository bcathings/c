#include<stdio.h>
#include<conio.h>
 
void ptrswap(int *ptr1, int *ptr2){
        int temp;
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        printf("The Swapped Values are:\n");
        printf("First Number = %d and Second Number = %d\n", *ptr1, *ptr2);
}
void valswap(int ptr1, int ptr2){
        int temp;
        temp = ptr1;
        ptr1 = ptr2;
        ptr2 = temp;
        printf("The Swapped Values are:\n");
        printf("First Number = %d and Second Number = %d\n", ptr1, ptr2);
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
            valswap(num1,num2);
        }else if(choice == 2){
            ptrswap(&num1,&num2);
        }else{
            printf("Wrong choice");
        }
        getch();
}


 
