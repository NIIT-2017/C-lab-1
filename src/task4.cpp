#include <stdio.h>
#include "task4.h"

float convert(int feet, int inches)
{
    if (feet < 0)
        {
            printf("Wrong size \n");
        }else
        {
            float size = (feet * 12 + inches) * 2.54;
            return size;
        }
}
