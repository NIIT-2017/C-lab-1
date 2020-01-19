#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#include <stdio.h>
#define feet_c 12
#define inches_c 2.54
float convert(int feet, int inches)
{
    return (feet * feet_c * inches_c + inches * inches_c);
}