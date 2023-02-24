#include<stdio.h>
int main (){


    String

  static  int i,j,k,row=6;

    for ( i=1;i<=row;i++){
        for ( j=i;j<row;j++){
            printf( "  ");
        }

        for( k=1;k<=(2*row -1);k++){

            if(   k==1 || k ==2*i-1)

            {

                printf(" *");
            }

            else{
                printf("  ");
            }


        }

        printf( "\n");
    }

    for ( i =row; i>0; i--)
    {
        for ( j=i;j<=6;j++){

            printf( "  ");
        }

        for ( k =0 ;k<=(row*2)-1;k++){

            if ( k==1 || k==i*2-1){

                printf("*");
            }
            else {
                printf("  ");
            }

            
        }
        

        printf("\n");
        /* code */
    }
    

    return 0;
}