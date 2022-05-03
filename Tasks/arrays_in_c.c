#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,output=0;
    scanf("%d", &n);
    
    int *arr = (int*)malloc(n * sizeof(int));
    
    for (int x=0; x<n; x++) {
      scanf("%d", &arr[x]);          
    }
    
    for (int x=0; x<n; x++) {
        output=output + arr[x];
    }
      
    printf("%d",output);
    
    
    free(arr);   
    
    
    return 0;
}
