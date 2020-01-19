#define _CRT_SECURE_NO_WARNINGS

#include "task4.h"
#include <stdio.h>

int main()
{
    int feet = 0;
    int inches = 0;
    printf("What is a size? (feet'inches)\n");
    scanf("%i'%i", &feet, &inches);
    printf("%.1f\n", convert(feet, inches));
}