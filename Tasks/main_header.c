#include <stdio.h>
#include <stdlib.h>
#include "modul.h"

int main() {

    printf("%s\n",NUMBER);
    printf("%s\n", STRING);

    int sum = add(1,1);

    printf ("Sum of nummber is: %d\n", sum);

    int multi = multiplication(2,3);

    printf("Multi: %d\n", multi);

    return 0;
}