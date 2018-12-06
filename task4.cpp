#include <stdio.h>
static const float fee = 12, in=2.54;

float convert(int feet, int inches)
{
	int a = feet, b = inches;
	float c = 0, d;
	c = (float)a*fee;
	d = (c + (float)b) * in;
	return d;
}