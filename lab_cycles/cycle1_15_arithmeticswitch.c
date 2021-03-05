#include <stdio.h>
#include <conio.h>
void main(){

    int a,b,choice;
    clrscr();
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("Enter choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Addition = %d\n",a+b);
            break;
        case 2:
            printf("Substraction = %d\n",a-b);
            break;
        case 3:
            printf("Multiplication = %d\n",a*b);
            break;
        case 4:
            printf("Division = %d\n",a/b);
            break;
        case 5:
            printf("Modulus = %d\n",a%b);
            break;
    }
    getch();

}
