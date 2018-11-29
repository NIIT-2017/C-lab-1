#include "task3.h"
#include <stdio.h>

char * convert(char buf[], double angle, char type)
{
    float corner;
    if (type == 'R') {
        corner = angle * 3.1415 / 180;
        sprintf(buf, "%.4lfD", corner);
    } else if (type == 'D') {
        corner = angle * 180 / 3.1415;
        sprintf(buf, "%.4lfR", corner);
    }
    return buf;
        
}
