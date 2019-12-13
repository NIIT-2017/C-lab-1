#include "task3.h"
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

char* convert(char buf[], double angle, char type)
{
    double result = 0; // variable storing the result of the  conversion
    if (type == 'r' || type == 'R') // if entered in radians
    {
        result = (angle * 180 / M_PI);
        type = 'D';
    }
    else //if entered in degrees
    {
        result = (angle * M_PI / 180);
        type = 'R';
    }
    sprintf(buf, "%f%c", result, type); // write the result + attribute to the string
    return buf;

}