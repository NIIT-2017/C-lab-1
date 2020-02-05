#include "task3.h"
#include <stdio.h>
#define PI 3.1415
char* convert(char buf[], double angle, char type)
{
    if (type == 'D')
    {
        angle = (angle * PI) / 180;
        sprintf(buf, "%f%c", angle, 'R');
        return buf;
    }
    else if (type == 'R')
    {
        angle = (angle * 180) / PI;
        sprintf(buf, "%f%c", angle, 'D');
        return buf;
    }
}

