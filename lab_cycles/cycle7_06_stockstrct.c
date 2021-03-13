#include <stdio.h>
struct Item{
    char name[20];
    int qt;
    float price,total;
};
void calculatePrice(struct Item *itptr){
    itptr->total = itptr->qt * itptr->price;  
}
void main(){
    struct Item itm;       
    printf("Enter name of item: "); 
    scanf("%s",&itm.name); 
    printf("Enter the quantity of the item: ");
    scanf("%d",&itm.qt); 
    printf("Enter the price of the item: ");
    scanf("%f",&itm.price); 
    calculatePrice(&itm);
    printf("======================\n");
    printf("Item Name=%s \n",itm.name);    
    printf("Quantity=%d \n",itm.qt);    
    printf("Price=%f \n",itm.price);    
    printf("Total=%f \n",itm.total);    
}
