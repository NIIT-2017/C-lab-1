#include "task4.h"
#include <stdio.h>

float convert(int feet, int inches)
{
	float size = 0;
	if (inches < 39.37)
	{
		size = (feet * 12 + inches) * 2.54;
	}
	else
	{
		return printf("The value entered does not fit the format\n");
	}
   return size;
} 