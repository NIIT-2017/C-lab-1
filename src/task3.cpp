#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char* convert(char buf[], double angle, char type)
{
	char newtype;
	double result;
	if (type == 'D')
	{
		result = angle * 3.14159 / 180;
		newtype = 'R';
	}
	else
	{
		result = angle / 3.14159 * 180;
		newtype = 'D';
	}
		sprintf(buf, "%.6f%c", result, newtype);
		
		return buf;

}