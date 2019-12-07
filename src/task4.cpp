#include "task4.h"
#include <stdio.h>

float convert(int feet, int inches)
{
	float centimeter = 0;
	
	centimeter = ((30.48 * feet) + (2.54 * inches));
	
	return centimeter;
}