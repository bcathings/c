#include<stdio.h>

int main(){

    int i;

    char str1[50], str2[50];

    gets(str1);

    int count = 0;

    while(str1[count]!='\0'){
        count++;
    }

    gets(str2);

    for(i=0;str2[i]!=0;i++){
        str1[count] = str2[i];
        count++;
    }

    puts(str1);

}
