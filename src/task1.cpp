#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int getRecommendation(char gender, float height, float weight)
{
	if (gender == 'm')
	{
		float ideal_weight = height - 100;
		if (weight < ideal_weight)
			return -1;
		else if (weight > ideal_weight)
			return 1;
		else if (weight = ideal_weight)
			return 0;
	}
	else if (gender == 'w')
	{ 
		float ideal_weight = height - 110;
		if (weight < ideal_weight)
			return -1;
		else if (weight > ideal_weight)
			return 1;
		else if (weight = ideal_weight)
			return 0;
	}
}