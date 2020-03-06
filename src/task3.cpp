#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


char * convert(char buf[], double angle, char type)
{
	buf[100];
	char R = 0, D = 0;
	if (type == 'R' || type == 'r')
		sprintf(buf, "%f%c", (angle * 180 / 3.14159), 'D');
	else 
		sprintf(buf, "%f%c", (angle * 3.14159/180), 'R');

	return buf;
}