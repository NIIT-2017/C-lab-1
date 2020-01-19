#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <math.h>
#include "task3.h"
#include <stdio.h>

char* convert(char buf[], double angle, char type)
{
	if (type == 'D')
	{
		angle = (angle / 180 * M_PI);
		type = 'R';
	}
	else
	{
		angle = (angle * 180 / M_PI);
		type = 'D';
	}
	sprintf(buf, "%.3f%c", angle, type);
	return buf;
}