#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
    int greatest = 0;
    
    if(a > b) {
        greatest=a;
    }
    else {
    greatest=b;
    }
    
    if( c > greatest ) {
        greatest = c;
    }
    
    if ( d > greatest ) {
        greatest = d;
    }
    
    return greatest;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
