#include "task4.h"
#include <stdio.h>

int main()
{
    int feet = 0,
        inches = 0;

    printf("Enter your height in feets and inches in format: FEET'INCHES\n");
    scanf("%d'%d", &feet, &inches);

    if ((feet == 0 && inches == 0) || (feet < 0 || inches < 0))
        printf("Enter a correct value!\n");
    else
        printf("Your height = %.2f cm\n", convert(feet, inches));

    return 0;
}