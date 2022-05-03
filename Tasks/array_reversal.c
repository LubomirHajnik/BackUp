#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    int x;
    
    for (int counter=0; counter < num/2; counter++) {
        x = arr[counter];
        arr[counter] = arr[num - counter - 1];
        arr[num - 1 - counter] = x;
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
        
    return 0;
}