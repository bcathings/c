#include<stdio.h>
#include<conio.h>

void main(){
    int a[10],n,i;
    int pcount=0,ncount=0,zcount=0;
    clrscr();
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>0)
            pcount++;
        else if(a[i]<0)
            ncount++;
        else
            zcount++;
    }
    printf("no of postive no's = %d\n",pcount);
    printf("no of negative no's = %d\n",ncount);
    printf("no of zeros = %d\n",zcount);
    getch();
}
