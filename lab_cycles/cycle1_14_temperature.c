#include <stdio.h>
#include <conio.h>

void main(){
    float tc,tf;
    clrscr();
    printf("Enter the celisius:");
    scanf("%f",&tc);
    printf("Enter the farenheit:");
    scanf("%f",&tf);
    printf("farenheit = %f\n", (tc * 1.8) + 32);
    printf("celisius = %f\n", (tf - 32 ) / 1.8);
    getch();
}
