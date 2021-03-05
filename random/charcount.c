#include <stdio.h>
#include <string.h>

int main(){

    char str[100],strin[100]; 

    printf("enter string:");

    scanf("%[^\n]s",str);


    for(int i=0;str[i] != '\0';i++){
       strin[i]  = str[i];
    }


    printf("%s",strin);

    return 0;
}
