#include <stdio.h>
#include <conio.h>

void main(){
    int array[100], position, i, n;
    printf("Enter the limit: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for ( i = 0 ; i < n ; i++ )
        scanf("%d", &array[i]);

    printf("Enter position to delete element:");
    scanf("%d", &position);
    
    if ( position >= n )    
        printf("Deletion not possible.\n");
    else{    
        for ( i = position ; i < n ; i++ ) 
            array[i] = array[i+1];        
        printf("Result array:");
        for( i = 0 ; i < n - 1 ; i++ )        
            printf("%d ", array[i]);        
        printf("\n");
    }    
    getch();
}
