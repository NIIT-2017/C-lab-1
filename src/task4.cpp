#include <stdio.h>

float convert(int feet, int inches)
{
	float cnt = 0;
	cnt = (feet * 12 * 2.54) + (inches * 2.54);
	return cnt;
}