#include<stdio.h>
int main(){

    int i,j,n=6;

    for ( i=0;i<n;i++){

        for( j=i+1;j<n;j++){

            printf("   ");

        }
        

        for(j=0;j<=i;j++){

            if ( j==0 || j==i){
                 printf("  *  ");
            }

            else{

                 printf("_____");

            }

           
        }

        printf("\n");

        
    }









    return 0;
}