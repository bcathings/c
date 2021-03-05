#include<stdio.h>
#include<conio.h>

void main(){
    int a[50], pos, i, n, value;
    printf("Enter the limit:");
    scanf("%d", &n);
    printf("Enter elements:");
    for (i = 0; i < n; i++)    
    scanf("%d", &a[i]);
    printf("Please position to insert:");
    scanf("%d", &pos);
    printf("Please value to insert:\n");
    scanf("%d", &value);
    for (i = n; i > pos; i--)    
        a[i] = a[i-1];
    a[pos] = value;
    printf("Result array :");
    for (i = 0; i <= n; i++)    
        printf("%d ", a[i]);    
    printf("\n");
    getch();
}
