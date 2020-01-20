#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include <stdio.h>

char* convert(char buf[], double angle, char type)
{
	double const PI = 3.14159;
	if (type == 'D')
	{
		angle = (angle / 180 * PI);
		type = 'R';
	}
	else
	{
		angle = (angle * 180 / PI);
		type = 'D';
	}
	sprintf(buf, "%.2f%c", angle, type);
	return buf;
}