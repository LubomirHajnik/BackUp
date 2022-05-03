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
        switch (arr[x]) {
            case '0':
                counter[0]++;
                break;
            case '1':
                counter[1]++;
                break;
            case '2':
                counter[2]++;
                break;
            case '3':
                counter[3]++;
                break;
            case '4':
                counter[4]++;
                break;
            case '5':
                counter[5]++;
                break;
            case '6':
                counter[6]++;
                break;
            case '7':
                counter[7]++;
                break;
            case '8':
                counter[8]++;
                break;
            case '9':
                counter[9]++;
                break;
            default:
             //ERROR;
             ;                              
        }
    }
    
    for (int x=0; x<10; x++) {
        printf("%d ", counter[x]);
    }
    

    return 0;
}
