#include <stdio.h>
#include "task3.h"
#define PI 3.14159

char* convert(char buf[], double angle, char type)
{
	double t = 0;
	if (type == 'R') 
	{
		t = angle * (180 / PI);
		sprintf(buf, "%.5fD", t);
		return buf;
	}
	else if (type == 'D')
	{
		t = angle * (PI / 180);
		sprintf(buf, "%.5fR", t);
		return buf;
	}

}