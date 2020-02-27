#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include <stdio.h>
#include <iostream>

//#pragma warning(disaible:4996)

char* convert(char buf[], double angle, char type)
{
	float constK = 57.2958f;
	float result = 0;
	if (type == 'd' || type == 'D') 
	{
		result = angle / constK;
		type = 'R';
	}
	else if (type == 'r' || type == 'R')
	{
		result = angle * constK;
		type = 'D';
	}
	else
	{
		printf("Input angle value is incorrect\n");
		return 0;
	}
	snprintf(buf, 100, "%f", result);
	return buf;
}