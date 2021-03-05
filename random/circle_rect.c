#include <stdio.h>
int main(){
    float l,b,r;
    printf("Enter lenghth,breadth and radius:\n");
    scanf("%f%f%f",&l,&b,&r);
    printf("area  of rectangle = %f\n",l * b);
    printf("area  of circle= %f\n",3.14 * r * r); 
    return 0;
}