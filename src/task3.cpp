#include <stdio.h>

char* convert(char buf[], float angle, char type)
{
	const float pi = 3.14159265;
			
	if (type == 'd')
	{ 
		angle = angle / 180 * pi;
		type = 'r';
	}
	else if (type == 'r')
	{ 
		angle = angle * 180 / pi;
		type = 'd';
	}

	sprintf(buf, "Your angle = %f%c", angle, type);
	return buf;
	
}

