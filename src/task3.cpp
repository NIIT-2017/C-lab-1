#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14159
#include <stdio.h>

char * convert(char buf[], double angle, char type)
{
	switch (type)
	{
	case 'd': case 'D':
	{
		double radians = angle * PI / 180;
		sprintf(buf, "%f Pi Radians", radians);
		return buf;
	}
	case 'r': case 'R':
	{
		double degrees = angle * 180 / PI;
		sprintf(buf, "%f Degrees", degrees);
		return buf;
	}
	}

}