#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#include <stdio.h>

float convert(int feet, int inches)
{
	feet = (feet * 12);
	inches = feet + inches;
	float convert = inches * 2.54;
	return (convert);
}