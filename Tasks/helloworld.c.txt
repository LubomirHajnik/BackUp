#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
  	
    printf("Hello, World!\n");
    
    for(int x=0; s[x]!='\0'; x++){
        printf("%c", s[x]);
    }
    return 0;
}
