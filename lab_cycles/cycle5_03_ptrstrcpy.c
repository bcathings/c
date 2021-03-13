#include<stdio.h>
#include<conio.h>
void main(){
    char str1[50], str2[50],*p1,*p2;
    clrscr();
    printf("Enter a string:");
    gets(str1);
    p1 = str1;
    p2 = str2;
    while(*p1 != '\0'){
        *p2 = *p1;
        p1++;
        p2++;
    }
    *p2 = '\0';
    printf("copied string: ");
    puts(str2);
    getch();
}
