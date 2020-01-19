#include "task3.h"
#include <stdio.h>

char* convert(char buf[], double angle, char type)
{
    float convertingK = 57.2958f;
    float result = 0;
    if (type == 'D')
    {
        result = angle / convertingK;
        type = 'R';
    }
    else if (type == 'R')
    {
        result = angle * convertingK;
        type = 'D';
    }
    snprintf(buf, 100, "%f", result);
    for (int i = 0; buf[i] != '\0'; i++)
    {
        if (buf[i] == '.')
        {
            for (int j = i + 2; j < i + 8; j++)
            {
                if (buf[j] == '0' || j == 7)
                {
                    buf[j] = type;
                    buf[j + 1] = '\0';
                    break;
                }
            }
            break;
        }
    }
    return buf;
}