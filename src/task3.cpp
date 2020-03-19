#include <stdio.h>
#define PI 3.14159

char* convert(char buf[], double angle, char type)
{
	double result;
	if (type == 'R' )
	{
		result = angle * 180 / PI;
		type = 'D';
		sprintf(buf, "%.1lf%c\n", result, type);
	}
	else
	{
		result = angle * PI / 180;
		type = 'R';
		sprintf(buf, "%.5lf%c\n", result, type);
	}
	return buf;
}