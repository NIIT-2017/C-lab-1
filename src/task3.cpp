#include <stdio.h>
#include <math.h>

char* convert(char buf[], double angle, char type)


{

	if (type == 'D')

	{
		angle = (angle * 3.14) / 180;
		sprintf(buf, "%f%c", angle, 'R');
		return buf;

	}

	else if (type == 'R')

	{
		angle = (angle * 180) / 3.14;

		sprintf(buf, "%f%c", angle, 'D');

		return buf;

	}


}