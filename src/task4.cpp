#include <stdio.h>

float convert(int feet, int inches)
{
	float height;
	height = (float)((feet * 12 + inches)*2.54);
	return height;
}