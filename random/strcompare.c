#include<stdio.h>
#include<conio.h>

void main(){

    int i;

    char str1[50], str2[50];

    clrscr();

    gets(str1);


    int count = 0;

    while(str1[count]!='\0'){
        count++;
    }


    gets(str2);
    int count2 = 0;

    while(str2[count2]!='\0'){
        count2++;
    }
    if(count == count2){
        int diff = 0;
        int notEqual = 0;

        for(i=0;i<count;i++){

            diff = diff + (str2[i] - str1[i]);
            if(str2[i] != str1[i]){
                notEqual = 1; 
            }

        }

        if(notEqual){

            printf(" not eqal");

       }else {

            printf("eual");

        }
    } else{

        printf(" not eqal");
    }

    getch();
    return 0;
}
