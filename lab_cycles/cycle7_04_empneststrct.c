#include <stdio.h>
#include <conio.h>

struct employee{
    char    name[30];
    int     empId;
    float   salary;
    struct address {
        int houseNumber;
        int pinCode;
    } addrs;
};
void main(){
    struct employee emp;
    clrscr();
    printf("Enter details :\n");
    printf("Name: ");
    gets(emp.name);
    printf("ID: ");
    scanf("%d",&emp.empId);
    printf("Salary: ");
    scanf("%f",&emp.salary);
    printf("House Number: ");
    scanf("%d",&emp.addrs.houseNumber);
    printf("Pin Code: ");
    scanf("%d",&emp.addrs.pinCode);
    printf("======================\n");
    printf("Entered detail is:\n");
    printf("Name: %s\n"   ,emp.name);
    printf("Id: %d\n"     ,emp.empId);
    printf("Salary: %f\n",emp.salary);
    printf("House Number: %d\n",emp.addrs.houseNumber);
    printf("Pin Code: %d\n",emp.addrs.pinCode);
    getch();
}
