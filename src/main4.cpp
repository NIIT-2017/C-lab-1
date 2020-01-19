#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#include <stdio.h>

int main()
{
    int feet = 0;
    int inches = 0;

    printf("Tape you hight in feets and inches in format 0'00: ");
    
    scanf("%d'%d", &feet, &inches);
    if (((feet < 0) || (inches < 0)) || ((feet == 0) && (inches == 0)))
        printf("You are wrong!");
    else
        printf("Your hight is %.2f sm", convert(feet,inches));
    return 0;
}