#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sort(int a){
    char *number[9]= {"one","two","three","four","five","six","seven","eight","nine"};
    
    if (a<10) {
         printf("%s\n", number[a-1]);
    } else{
        if(a % 2 == 0){
            printf("even\n");
        }else{
            printf("odd\n");
        }
        
    }
}

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	
    for (int x = a; x != b+1; x++) {
        sort(x);
    }
      

    return 0;
}

