#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#include "stdio.h"


float convert(int feet, int inches) {
	float centimeter = 0;
	centimeter = feet * 12 * 2.54 + inches * 2.54;
	return centimeter;
}