#include <stdio.h>

int main()
{
    
    int size,pos,i,num;

    int a[100];

    printf(" Enter the size of the array");

    scanf(" %d",&size);

    printf(" Enter the number to input");

    scanf("%d",&num);
    
     printf(" Enter the position");

    scanf("%d",&pos);


    printf("Enter the elements in the array");


    for ( i=0;i<size-1;i++){

        scanf("%d",&a[i]);

    }
    
    for ( i=size-1;i>=pos-1;i--){
        
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    
    

    for ( i=0;i<size;i++){

        printf("\n %d ",a[i]);

    }










    return 0;

}





