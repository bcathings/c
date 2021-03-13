#include <stdio.h>
#include <conio.h>
struct student{
    char name[30];
    int rollno;
    int marks[5];
};

void main(){
    int i;
    int total = 0;
    struct student stud;
    clrscr();
    printf("Enter details :\n");
    printf("Name: ");
    gets(stud.name);
    printf("ID: ");
    scanf("%d",&stud.rollno);
    printf("Enter five marks:\n");
    for(i = 0;i<5;i++){
        scanf("%d",&stud.marks[i]); 
        total += stud.marks[i];
    }  
    printf("Entered detail is:\n");
    printf("Name: %s\n"   ,stud.name);
    printf("Id: %d\n"     ,stud.rollno);
    printf("Total Mark: %d\n",total);
    getch();
}
 

