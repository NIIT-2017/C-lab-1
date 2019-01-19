#include "task3.h"
#ifndef M_PI
#include <math.h>
#define M_PI 3.14
#endif
#include <stdio.h>
#include<stdlib.h>

char * convert(char buf[], double angle, char type)
{
	char endtype = '0';
	double result = 0;
	switch (type)
	{
	case 'D':
	case 'd':
		result= M_PI / 180.0 * angle;
		endtype = 'R';
		break;
	case 'R':
	case 'r':
		result = 180.0 / M_PI * angle;
		endtype = 'D';
		break;
	}
	sprintf(buf,"%.5lf%c",result,endtype);
	return buf;
}
