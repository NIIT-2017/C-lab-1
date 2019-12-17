#include "task3.h"
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

char* convert(char buf[], double angle, char type)
{
    double result = 0;
    if (type == 'r' || type == 'R') 
    {
        result = (angle * 180 / M_PI);
        type = 'D';
    }
    else
    {
        result = (angle * M_PI / 180);
        type = 'R';
    }
    sprintf(buf, "%f%c", result, type); 
    return buf;
    }