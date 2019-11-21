#include "task3.h"
char *convert(char buf[], double angle, char type)
{
    float result;
    char nextType;
    if (type == 'R')
    {
        nextType = 'D';
        result = angle * (180 / M_PI);
    }
    else
    {
        nextType = 'R';
        result = angle / (180/ M_PI);
    }
    sprintf(buf,"%f%c",result,nextType);
    return buf;
}