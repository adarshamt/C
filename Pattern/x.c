#include<stdio.h>
int main(){
   /*          X         X
                 X     X
                   X X
                  X  X
                X      X
              X          X

              */

     int i,j,size=4;

     for ( i=0;i<size;i++){
      for( j=0;j<=i;j++){

         printf("  ");

         

      
     }
     printf(" X ");

     for( j=i;j<size-1;j++){

      printf("    ");


     }

     printf("X ");

     printf(" \n");

 }

  for ( i=0;i<size;i++){

   for( j=i;j<size-1;j++){

      printf("  ");
   }

   printf("  X ");

   for ( j=0;j<=i-1;j++){

      printf("    ");


   }

   printf(" X ");


   printf("\n");
 

  }







   
    
   
   
   
   
   
   
                                                                 









    return 0;
}