#include <stdio.h>
#include <conio.h>
void main(){
    int s1,s2,s3,total;
    float per;
    clrscr();
    printf("Enter marks of three subjects:\n");
    scanf("%d%d%d",&s1,&s2,&s3);
    total = s1 + s2 + s3;
    per  = (total/90.0) * 100.0;
    printf("total = %d\n",total);
    printf("percentage = %f\n",per);
    if(per >= 90)
        printf("A grade\n");
    else if(per >= 80)
        printf("B grade\n");
    else if(per >= 70)
        printf("C grade\n");
    else if(per >= 60)
        printf("D grade\n");
    else if(per >= 50)
        printf("E grade\n");
    else if(per >= 40)
        printf("F grade\n");
    else if(per < 40)
        printf("Fail\n");
    getch();
}
