#include <stdio.h>

const char * convert(char buf[], double angle, char type)
{
	if (type == 'D')
		sprintf(buf, "angle=%fR", (angle / 57.2958));
	else if (type == 'r')
		sprintf(buf, "angle=%fD", (angle) / 0.01745);
	return buf;
}