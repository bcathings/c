#include<stdio.h>
#include<conio.h>
void main(){
    int i,choice;
    int count = 0,count2=0,diff=0,notEqual=0;
    char str1[100], str2[100];
    printf("Enter choice (1,2,3,4):");
    scanf("%d",&choice);
    getchar();
    switch(choice){
        case 1:
            printf("Enter first string:");
            gets(str1);
            while(str1[count]!='\0'){
                count++;
            }
            printf("Enter second string:");
            gets(str2);
            for(i=0;str2[i]!=0;i++){
                str1[count] = str2[i];
                count++;
            }
            printf("Joined String:");
            puts(str1);
            break;

        case 2:
            printf("Enter first string:");
            gets(str1);
            for(i=0;str1[i]!=0;i++){
                str2[i] = str1[i];
            }
            str2[i] = '\0';
            printf("Copied string:");
            puts(str2);
            break;
        case 3:
            printf("Enter first string:");
            gets(str1);
            count = 0;
            while(str1[count]!='\0'){
                count++;
            }
            printf("Enter second string:");
            gets(str2);
            count2 = 0;
            while(str2[count2]!='\0'){
                count2++;
            }
            if(count == count2){
                diff = 0;
                notEqual = 0;
                for(i=0;i<count;i++){
                    diff = diff + (str2[i] - str1[i]);
                    if(str2[i] != str1[i]){
                        notEqual = 1; 
                    }
                }
                if(notEqual)
                    printf("strings not equal\n");
                else 
                    printf("strings equal\n");
            } else{
                    printf("strings not equal\n");
            }

            break;
        default:
            printf("exit\n");
            break;
    }
    getch();
}
