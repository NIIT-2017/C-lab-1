#include "task1.h"
#include <stdio.h>
int getRecommendation(char gender, float height, float weinght)
{
	float normalweight = 0;
	if (gender == 'M' || gender == 'm')
		normalweight = height - 100;
	else if (gender == 'W' || gender == 'w')
		normalweight = height - 110;
	float deltaweight = weinght - normalweight;
	if (deltaweight < 0)
		return -1;
	else if (deltaweight < 0)
		return 1;
	return 0;
}
