#include <stdio.h>
#include <conio.h>
#include <string.h>
void main(){
    char str[100][100];
    int n,i,wordCount=0,charCount=0,charIndex=0; 
    printf("Enter number of strings: ");
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++){
        printf("Enter string %d: ",i+1);
        gets(str[i]);  
    }
    for(i=0;i<n;i++){
        charIndex = 0;
        wordCount++;
        while(str[i][charIndex]!= '\0'){
            if(str[i][charIndex] == ' '){
                wordCount+= 1;
            }
            charCount++;
            charIndex++;
        }
    }
    printf("no of lines: %d\n",n);
    printf("no of words: %d\n",wordCount);
    printf("no of charactors: %d\n",charCount);
    getch();
}

