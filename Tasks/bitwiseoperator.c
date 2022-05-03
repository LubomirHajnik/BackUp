#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    
  int and, or, xor;
  int a=1;
  int and_result=0,or_result=0,xor_result=0;
  
  for (int b=2; b<=n;  b++) {
       
       and= a&b;         
       or= a|b;
       xor = a^b;
       
        if (and > and_result && and < k ) {
            and_result = and;
        }     
        
        if (or > or_result && or < k ) {
            or_result = or;
        }   
        
        if (xor > xor_result && xor < k ) {
            xor_result = xor;
        }   
        
        
        if(b==n){
           a=a+1;
           b=a;         
       }
       if(a==n-1 && b==n){
           break;
       }
  }
  
  printf("%d\n%d\n%d\n", and_result,or_result,xor_result);
     
  
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    
    calculate_the_maximum(n, k);
 
    return 0;
}
