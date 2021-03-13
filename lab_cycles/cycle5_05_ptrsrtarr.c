#include <stdio.h>
#include <conio.h>
void main(){
    int arr[50];
    int *a,i,j,tmp,n;
    clrscr();
    a = arr;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++){
      scanf("%d",a+i);
    }   
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(*(a+i) > *(a+j)){
                tmp = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = tmp;
            }
        }
    }
    printf("Sorted array:");
    for(i=0;i<n;i++){
        printf("%d ",*(a+i));
    }
    printf("\n");
    getch();
}
