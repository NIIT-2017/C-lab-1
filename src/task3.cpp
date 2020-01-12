#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>
#include "task3.h"

char* convert(char buf[], double angle, char type)
{
	double result = 0;
	if (type == 'D')
	{
		result = (angle * 180 / M_PI);
		type = 'R';
	}
	else
	{
		result = (angle * M_PI / 180);
		type = 'D';
	}
	sprintf(buf, "%f%c", result, type);
	return buf;
}