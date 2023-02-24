#include<stdio.h>
int main(){

    int i,j,size=5,c;


    for( i=1;i<=size;i++){

        for( j=i;j<=size;j++){

            printf("   ");
        }

       
            
        
        c=i;

        for( j=1;j<=i;j++){

            printf(" %d ",c);

            c++;
            
        }
        

        for(j=1;j<i;j++){

            printf(" %d ",i);
            
        }

        

        printf("\n");
    }






    return 0;
}