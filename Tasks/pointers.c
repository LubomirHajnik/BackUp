// #include <stdio.h>
// #include <stdlib.h>

// void update(int *a,int *b) {
//     int sum = (*a) + (*b);
//     int absolute = abs((*a)-(*b));
//     (*a) = sum;
//     (*b) = absolute;  
// }

// int main() {
//     int a, b;
//     int *pa = &a, *pb = &b;
    
//     scanf("%d %d", &a, &b);
//     update(pa, pb);
//     printf("%d\n%d", a, b);

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {


    int sum = (*a) + (*b);
    int absolute = abs((*a)-(*b));
    (*a) = sum;
    (*b) = absolute;  
    a++;
    printf("0x%x\n", (int)a);

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    //*pa=10
    
    
    scanf("%d %d", &a, &b);
    
    printf("0x%x\n", (int)pa);
    
    update(pa, pb);  //
    
    
    printf("%d\n%d\n", a, b);
    printf("0x%x\n", (int)pa);

    return 0;
}
