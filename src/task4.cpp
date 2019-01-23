#include"task4.h"

float convert(int feet, int inches)
{
	float convert;
	int a;
	a = feet * 12 + inches;
	float cm = 2.54;
	convert = float(a*cm);
	return convert;
}