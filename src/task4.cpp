#include "task4.h"
#include <stdio.h>

float convert(int feet, int inches)
{
	if (feet < 0 || inches < 0) // tak a che, lish by ne < 0 nu ili (inches < 0 && inches > 11)
		printf("zanovo, cosoruky)\n");
	else
	{
		double ep = (((feet * 12) + inches) * 2.54);
		return ep;
	}
}