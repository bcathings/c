#include <stdio.h>
void main() {
    int n,i,k,copy,length,result,rem,powResult;
    printf("Enter the limit: ");
    scanf("%d", &n);

    for(i = 1; i<=n;i++){ 
        length = 0;
        copy = i;
        while (copy != 0) {
             copy /= 10;     
            ++length;
        }
        copy = i;
        result = 0;
        while (copy != 0) {
         rem = copy % 10;
         powResult = 1; 
         for(k = 1; k<=length; k++ ){
            powResult *= rem;
         }
         result += powResult;
         copy /= 10;
        }
        if(result == i){
            printf("%d\n",i);
        }
    }        
}
