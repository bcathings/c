#include<stdio.h>
#include<string.h>
void main(){
	int i, j, count;
	printf("Enter total number of stings : ");
	scanf("%d", &count);
    getchar();
	char strs[100][100], sortedStrs[100][100], tempVar[100];
	for(i = 0; i < count; i++){
		printf("Enter sting %d : ",i+1);
        gets(strs[i]);
		strcpy(sortedStrs[i], strs[i]);
	}
	for(i = 0; i < count - 1; i++){
		for(j = i+1; j < count; j++){
			if(strcmp(sortedStrs[i], sortedStrs[j]) > 0){
				strcpy(tempVar, sortedStrs[i]);
				strcpy(sortedStrs[i], sortedStrs[j]);
				strcpy(sortedStrs[j], tempVar);
			}
		}
	}
	printf("Sorted strings:\n");
	for(i = 0; i< count; i++){
		printf("%s\n", sortedStrs[i]);
	}
    getch();
}
