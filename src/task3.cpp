#include <stdio.h>
#define PI 3.14159
char* convert(char buf[], double angle, char type)
{
    double value;
    if (type == 'R' || type == 'r')
    {
        value = angle * 180 / PI;
        type = 'D';
        sprintf(buf, "%.1lf%c.", value,type);
    }
    else 
    {
        value = angle * PI / 180;
        type = 'R';
        sprintf(buf, "%.5lf%c.", value,type);
    }
    return buf;
}
