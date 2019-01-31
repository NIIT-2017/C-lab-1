#include "task3.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

char *convert(char buf[], double angle, char type)
{
	if ('R'==type)

	{
		angle = 180.0 / 3.14159265358979323846*angle;
		type = 'D';
		sprintf(buf, "%.1f%c \n", angle, type);
		puts(buf);
		return buf;
	}

	else if ('D'==type)

	{
		angle = 3.14159265358979323846 / 180.0*angle;
		type = 'R';
	sprintf(buf, "%.1f%c \n", angle, type);
		puts(buf);
		return buf;
	}

	

		return 0;
}