#include "task4.h"
float convert(int feet, int inches)
{
	float centimeters = ((feet * 12 + inches)*2.54);
	return centimeters;
}
