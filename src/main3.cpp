#include <stdio.h>
#include "task3.h"
#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14159

int main()
{
    char buf[256];
    double angle = 0;
    char type = 0;

    printf("Enter an angle value in degrees (D) or radians (R):\n");
    scanf("%lf%c", &angle, &type);

    if (angle == 0 || type != 'D' && type != 'R')
    {
        printf("Enter a correct value\n");
    }

    printf(convert(buf, angle, type));
    
    return 0;
}