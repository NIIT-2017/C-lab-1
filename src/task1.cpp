#include "task1.h"
#include <stdio.h>

int getRecommendation(char gender, float height, float weight)
{

	float idealweight = 0;
	
	switch (gender)
	{
	case'w':
		idealweight = height - 110;
		break;
	case'm':
		idealweight = height - 100;
		break;
	}

	if (weight == idealweight)
	{
		return 0;
	}
	if (weight < idealweight)
	{
		return -1;
	}
	if (weight > idealweight)

	{
		return 1;
	}
}