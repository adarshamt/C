#include<stdio.h>
int main (){


    /*1. Write a program in C to read n number of values in an array and display the
array after deleting two values next to the multiples of 5.
*/


int i,k,j,size,a[100];

printf("Enter the size of the array");

scanf("%d",&size);

printf("enter the elements");


for ( i=0;i<size-1;i++){


    scanf("%d",&a[i]);
}

for ( i =0;i<size-1;size++){

    if ( a[i]%5 ==0){

        a[i+1]=a[i+2];
        size--;

        for ( j=i+2;j<size-1;j++){

            a[j]=a[j+1];
        }
        

        
        
    }


}

for (i=0;i<size;i++){


    printf("%d",a[i]);
}





return 0;

}