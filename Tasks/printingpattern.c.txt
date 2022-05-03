#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
        
    int row = (n*2)-1;
    int column = (n*2)-1;
    
    
    for (int x=0; x<row; x++) {
        for(int i=0; i<column; i++){
            
            if (x==n-1 && i==n-1) {
                printf("%d ", n-1); 
            }
            else {
                printf("%d ", n); 
            }
            
            
        }
        printf("\n");
    }
    
    return 0;
}


