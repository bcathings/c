#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
	int i, j, count;
    clrscr();
	printf("Enter total number of stings : ");
	scanf("%d", &count);
    getchar();
	char strs[100][100], sortedStrs[100][100], tempVar[100];
    char *str,*srtstr,*temp;
	for(i = 0; i < count; i++){
		printf("Enter sting %d : ",i+1);
        gets(strs[i]);
		strcpy(sortedStrs[i], strs[i]);
	}
	for(i = 0; i < count - 1; i++){
		for(j = i+1; j < count; j++){
            str = &sortedStrs[j];
            srtstr = &sortedStrs[i];

			if(strcmp(srtstr, str) > 0){
				strcpy(tempVar, srtstr);
				strcpy(srtstr, str);
				strcpy(str, tempVar);
			}
		}
	}
	printf("Sorted strings:\n");
	for(i = 0; i< count; i++){
		printf("%s\n", sortedStrs[i]);
	}
    getch();
}
