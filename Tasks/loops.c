#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int const fix = 4;

    int n = fix;
    //scanf("%d", &n);

     int length = (n*2)-1;
    
     for (int x=0; x<length; x++) {
         for (int i=0; i<length; i++) {
             
             n=fix;
             if (x==0 || i ==0 || x==length-1 || i==length-1){
                 n = fix;
             }
             else if (x!=0 && i!=0)
             {
                n=n-x;   
             }

             printf("%d ", n);
             
         }
         printf("\n");
     }
      
      
    return 0;
}
