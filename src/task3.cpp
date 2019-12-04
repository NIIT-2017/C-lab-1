#define PI 3.14159
#include "task3.h"
#include <stdio.h>

char * convert(char buf[], double angle, char type)
{
    double new_angle = 0;
        
    if (type == 'D')
    {
        new_angle = angle * (PI / 180);
        sprintf(buf, "Angle value in radians = %.5fR\n", new_angle);
        return buf;
    }
    else if (type == 'R')
    {
        new_angle = angle * (180 / PI);
        sprintf(buf, "Angle value in degrees = %.5fD\n", new_angle);
        return buf;
    }
}