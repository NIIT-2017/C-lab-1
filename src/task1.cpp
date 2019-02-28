#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int getRecommendation(char gender, float height, float weight)
{
	int idealweight = 0;
	if (gender == 'm')
		idealweight = height - 100;
	if (gender == 'w')
		idealweight = height - 110;
	if (idealweight < weight)
		return 1;
	if (idealweight > weight)
		return -1;
	if (idealweight = weight)
		return 0;

}