#include <stdio.h>
#include <math.h>
#include "task3.h"


char* convert(char buf[], double angle, char type)
{
    float result = 0;

    if (type == 'D')
    {
        result = (angle * M_PI /180 );
        type = 'R';
    }
    else
    {
        result = (angle *  M_PI /180 );
        type = 'D';
    }
    sprintf(buf, "%.5f%c", result, type);
    return buf;
}
