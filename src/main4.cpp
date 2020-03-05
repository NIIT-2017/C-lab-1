#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task4.h"

int main()
{
    int foot, inch;
    puts("Enter height in format - FEETS space INCHES: ");
    scanf("%d%d", &foot, &inch);
    float result = convert(foot, inch);
    printf("Your height is - %.1f cm.\n", result);

    return 0;

}