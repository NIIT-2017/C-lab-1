#include"task4.h"
#include<stdio.h>

float convert(int feet, int inches)

{

	float feetToInch = 12 * 2.54;
    float inchToSm = 2.54;

	return ((float)feet*feetToInch + (float)inches*inchToSm);

}