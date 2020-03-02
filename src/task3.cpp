#include "task3.h"
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

char* convert(char buf[], double angle, char type)
{
	double angle1 = 0; 
	if (type == 'R')
	{
		angle1 = (((double)180 * angle) / M_PI);
		sprintf(buf, "%3.2lf%c", angle1, 'D');
	}
	else
	{
		angle1 = (M_PI * angle) / (double)180;
		sprintf(buf, "%3.2lf%c", angle1, 'R');
	}
	return buf;
} 
