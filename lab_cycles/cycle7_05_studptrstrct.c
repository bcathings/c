#include <stdio.h>
#include<conio.h>
struct student{
    char name[30];
    int rollno;
};
void main(){
    int i;
    clrscr();
    struct student stud;
    struct student *ptrstud = &stud;
    printf("Enter details :\n");
    printf("Name: ");
    gets(ptrstud->name);
    printf("ID: ");
    scanf("%d",&ptrstud->rollno);
    printf("======================\n");
    printf("Entered detail is:\n");
    printf("Name: %s\n"   ,ptrstud->name);
    printf("Id: %d\n"     ,ptrstud->rollno);
    getch();
}
 

