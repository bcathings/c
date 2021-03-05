#include<stdio.h>

int main(){


    int i;

    char str1[50], str2[50];

    gets(str1);

    for(i=0;str1[i]!=0;i++){
        str2[i] = str1[i];
    }

    str2[i] = '\0';

    puts(str2);

}
