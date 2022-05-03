#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int integerOne, integerTwo, integerSum, integerDif;
    float floatOne,  floatTwo, floatSum, floatDif;
    
    scanf("%d %d", &integerOne, &integerTwo);
    scanf("%f %f", &floatOne, &floatTwo);
    
    integerSum = integerTwo + integerOne;
    integerDif = integerOne - integerTwo;
    
    floatSum= floatOne + floatTwo;
    floatDif= floatOne - floatTwo;
    
    printf("%d %d\n", integerSum, integerDif);
    printf("%.1f %.1f", floatSum, floatDif);
    
    return 0;
}
