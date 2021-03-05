#include<stdio.h>
#include<conio.h>

void main(){
    int a[10],n,i,osum=0,esum=0,ecount=0,ocount=0;
    clrscr();
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            ecount++;
            esum += a[i];
        }else{
            ocount++;
            osum += a[i];
        }
    }
    printf("no of odd no's = %d\n",ocount);
    printf("sum of odd no's = %d\n",osum);
    printf("no of even no's = %d\n",ecount);
    printf("sum of even no's = %d\n",esum);
    getch();
}
