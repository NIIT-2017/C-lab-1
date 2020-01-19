#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include <stdio.h>

int main()
{
    double angle = 0;
    char type = 0;
    char buf[20] = { 0 };
    
    printf("Input the value of the angle in rad or in deg (in format 00.00D or 00.00R): ");
    scanf("%lf%c", &angle, &type);
    
    if ((angle < 0) || ((type != 'R')&& (type != 'D')))
        printf("You are wrong!");
    else
        printf(convert(buf, angle, type));
    
    return 0;
}