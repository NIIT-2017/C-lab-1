#include <stdio.h>

const char* convert(char buf[], float angle, char type)
{
	if (type == 'd')
		sprintf(buf, "Angle=%fR", angle / 57.2958);

	else if (type == 'r')
		sprintf(buf, "Angle=%fD", angle / 0.01745);

	return buf;
}
