#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include <stdio.h>

char* convert(char buf[], double angle, char type)
{
	double const PI = 3.14159265358979323846;
	if (type == 'D')
	{
		angle = (angle / 180 * (double)PI);
		type = 'R';
	}
	else if (type == 'R')
	{
		angle = (angle * 180 / (double)PI);
		type = 'D';
	}
	sprintf(buf, "%.2f%c", angle, type);
	return buf;
}