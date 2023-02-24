#include<stdio.h>
int main()
{


/*

* * *
*
*
*
* * * * * *
* * * * * *
*
*
*
* * * * * * * * *
* * * * * * * * *
* * * * * * * * *

*/

int i,j,k;

for ( i=1;i<4;i++){
    for( j=0;j<i*3;j++){

        printf(" * ");

        
    }

    if ( i==3){

        break;
    }

    for( k=0;k<3;k++){
        printf("\n * ");
    }





    printf("\n");


}






return 0;



}