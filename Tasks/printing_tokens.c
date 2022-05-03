#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    
    for (int x=0; x<strlen(s); x++) {
        if(s[x]==' '){
            printf("\n");
        } else {
        printf("%c", s[x]);
        }
    }
    
    
    free(s);
    
    return 0;
}