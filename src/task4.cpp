#define _CRT_SECURE_NO_WARNINGS
#include"task4.h"
#include<stdio.h>

float convert(int feet, int inches)
{
	const float FOOT_INCH_CENT = 12 * 2.54;
	const float INCH_CENT = 2.54;

	return ((float)feet*FOOT_INCH_CENT + (float)inches*INCH_CENT);
}