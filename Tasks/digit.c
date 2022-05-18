#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *arr;
    arr = malloc(1024 * sizeof(char));
    scanf("%[^\n]", arr);
    arr = realloc(arr, strlen(arr) + 1);
    
    int counter[]={0,0,0,0,0,0,0,0,0,0};

    for (int x=0; x<strlen(arr); x++) {
        if ('0' <= arr[x] && arr[x]<= '9' ){
            int number= arr[x] - 48;
            counter[number]++;
            //48-57
        }
    }
    
    for (int x=0; x<10; x++) {
        printf("%d ", counter[x]);
    }

    free(arr);
    return 0;
}