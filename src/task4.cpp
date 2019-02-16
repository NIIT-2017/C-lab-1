#include "task4.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


float convert(int feet, int inches)
{
	float sant = 0.0f;
	const float conv = 2.54;
	return sant = ((feet * 12) + inches)*conv;
} 