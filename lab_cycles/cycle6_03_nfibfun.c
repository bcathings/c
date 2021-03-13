#include <stdio.h>
#include <conio.h>

void fibonacci() {
    int i, n, t1 = 0, t2 = 1, nextTerm;
    clrscr();
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    while(t2 < n){
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
    getch();
}
void main(){
    fibonacci();
}
