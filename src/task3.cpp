#include "task3.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 char * convert(char buf[], double angle, char type)
{
	if (type == 'D')
		sprintf(buf, "angle=%fR", (angle / 57.2958));
	else if (type == 'r')
		sprintf(buf, "angle=%fD", (angle) / 0.01745);
	return buf;
} 