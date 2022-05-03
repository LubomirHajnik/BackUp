#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,sum=0;
    scanf("%d", &n);
    
    // for (int x=0; x<5; x++) {
    //     sum= sum + (n % 10);
    //     n= n / 10;
    // } 
    
    while(n>0){
        sum= sum + (n % 10);
        n= n / 10;
    }
    
    printf("%d",sum);
    
    return 0;
}
