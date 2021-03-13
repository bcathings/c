#include <stdio.h>
#include <conio.h>

struct student{
    char name[30];
    int rollno;
    int marks[5];
    int total;
};
void main(){
    int i,j,n;
    clrscr();
    struct student students[20];
    printf("\nEnter the no of students:\n"); 
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("======================\n");
        printf("Enter details of student %d :\n",i+1);
        printf("Name: ");
        scanf("%s",students[i].name);
        printf("ID: ");
        scanf("%d",&students[i].rollno);
        printf("Enter five marks:\n");
        students[i].total = 0;
        for(j=0;j<5;j++){
            scanf("%d",&(students[i].marks[j])); 
            students[i].total += students[i].marks[j];
        }  
    }
    for(i=0;i<n;i++){
        printf("=======================\n");
        printf("Details of Student %d :\n",i);
        printf("Name: %s\n"   ,students[i].name);
        printf("Id: %d\n"     ,students[i].rollno);
        printf("Total Mark: %d\n",students[i].total);
        printf("=======================\n");
    }
    getch();
}

 

