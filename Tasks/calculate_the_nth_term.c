#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

//n=number of "S"/row
//a,b,c first 3 input

int find_nth_term(int n, int a, int b, int c) {
    int recursion=0;
    
    for (int i=3; i<n; i++) {
        recursion=c+b+a;
        a=b;
        b=c;
        c=recursion;
    }   
    
    return recursion;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;

}

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// //Complete the following function.

// //n=number of "S"/row
// //a,b,c first 3 input

// int find_nth_term(int n, int a, int b, int c) {
//     int recursion=0;
    
//     for (int i=3; i<n; i++) {
//         recursion=c+b+a;
//         a=b;
//         b=c;
//         c=recursion;
//     }   
    
//     return recursion;
// }

// int main() {
//     int n, a, b, c;
  
//     scanf("%d %d %d %d", &n, &a, &b, &c);
//     int ans = find_nth_term(n, a, b, c);
 
//     printf("%d", ans); 
//     return 0;
// }





