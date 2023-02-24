#include<stdio.h>
int main(){


/*Write a program to remove all the prime numbers and even numbers replace by
1 in an array*/

int i,k,j,size,a[100],count;

printf("Enter the size of the array");

scanf("%d",&size);

printf("enter the elements");


for ( i=0;i<size;i++){


    scanf("%d",&a[i]);
}

for ( i=0;i<size;i++){

    if (a[i]%2==0)
    {

        a[i]=1;
    }
}

  for ( i=0;i<size;i++){
          count=0;
        for( j=2;j<a[i];j++){
            if(a[i]%j==0){

                 count =1;
            }
        }


    }

    if ( count==0){

        a[i]=1;
    }


   

for ( i=0;i<size;i++)
{
 printf("%d",a[i]);
}



return 0;



}