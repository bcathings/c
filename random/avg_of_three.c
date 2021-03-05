#include <stdio.h>
int main(){
    int a,b,c,avg,s;
    printf("Enter three numbers: \n");
    scanf("%d%d%d",&a,&b,&c);
    s = a + b + c;
    avg = s / 3;
    printf("Average = %d\n",avg);
    return 0;

}