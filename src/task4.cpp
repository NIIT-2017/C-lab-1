#include "task4.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


float convert(int feet, int inches)
{
	float cent = ((feet * 12 + inches)*2.54);
	return cent;
} 