#include <stdio.h>
#include <conio.h>

void main() {
    int n,i,result = 0;
    clrscr();
    printf("Enter a limit: ");
    scanf("%d", &n);

    for(i = 1; i<=n; i++ ){
        if(i%2==0){
            continue;
        }else{
            result += i;
        }
    }
    printf("sum = %d\n",result);
    getch();
}
