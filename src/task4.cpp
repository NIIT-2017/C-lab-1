#include "task4.h"

float convert(int feet, int inches)
{
    float size = (feet * 12 + inches) * 2.54;
    return size;
}