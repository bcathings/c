#include<stdio.h>
#include<conio.h>
 
void main(){
 	int i, j, rows, columns, a[10][10], Sum = 0;
 	printf("No of rows and columns : ");
 	scanf("%d %d", &i, &j);
 	printf("Enter Matrix Elements:\n");
 	for(rows = 0; rows < i; rows++){
   		for(columns = 0;columns < j;columns++){
      		scanf("%d", &a[rows][columns]);
    	}
  	}
 	for(rows = 0; rows < i; rows++){
   		Sum = Sum + a[rows][rows];
  	}
 	printf("sum =  %d\n", Sum );
    getch();

}
