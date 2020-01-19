#include "task4.h"
#include <stdio.h>

float convert(int  feet, int inches)
{
	float size = (feet*12 + inches) * 2.54;
	return size;
}