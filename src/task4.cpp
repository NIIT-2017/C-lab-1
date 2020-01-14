#include "task4.h"

float convert(int feet, int inches)
{
	double result = 0;
	result = feet * 12 * 2.54 + inches*2.54;

	return result;

}