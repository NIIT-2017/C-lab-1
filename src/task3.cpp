#include<stdio.h>
#include "task3.h"

char * convert(char buf[], double angle, char type)
{
	
	if (type == 'D')
	{
		sprintf(buf, "%0.5f%c", (angle * 3.14159) / 180, 'R');
		return buf;
	}
	else
	{
		sprintf(buf, "%0.1f%c", (angle * 180) / 3.14159, 'D');
		return buf;
	}
	
}
