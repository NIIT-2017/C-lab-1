#include "task3.h"
#include <stdio.h>

char* convert(char buf[100], double angle, char type)
{
	const double Pi = 3.14159;
	double result = 0;
	double* degree = &angle; 	
	
	if (type == 'D')
	{
		result = *degree / (180.0 / Pi);
		sprintf(buf, "%0.5lf ", result);
	}
	else if (type == 'R')
	{
		result = *degree * (180.0 / Pi);
		sprintf(buf, "%0.1lf", result);
	}
	else
		printf("Enter correct type\n");
		
	return buf;
}