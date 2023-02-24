/*         * * * * * * * * * * 
           * * * *     * * * * 
           * * *         * * * 
           * *             * * 
           *                 * 
           * *             * * 
           * * *         * * * 
           * * * *     * * * * 
           * * * * * * * * * *        */

#include<stdio.h>
int main (){

    int i,j,size=5;

    for ( i=0;i<size;i++){
        for( j=i;j<size;j++){
            printf(" * ");
        }


        for ( j=0;j<i;j++){

            printf("      ");
        }

         for( j=i;j<size;j++){
            printf(" * ");
        }

       
        printf("\n");


    }

        



        

        for (i=0;i<size;i++){

            for(j=0;j<=i;j++){

                printf(" * ");
            }

             for( j=i;j<size-1;j++){

            printf("      ");
        }

        /*     for( j=i;j<size;j++){

            printf("   ");
        }
        */

         for(j=0;j<=i;j++){

                printf(" * ");
            }


            printf("\n");



        }

        


    

    






    return 0;
}