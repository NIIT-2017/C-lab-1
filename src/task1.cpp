#include "task1.h"

int getRecommendation(char gender, float height, float weight){
	
	int ideal_weight = 0, result = 0;

	switch (gender)	{
	case 'm':
		ideal_weight = height - 100;
		break;
	case 'w':
		ideal_weight = height - 110;
		break;
	default:
	break;
	}

	result = weight - ideal_weight;

	if (result > 0)
		return 1;
	if (result < 0)
		return -1;
	if (result == 0)
		return 0;
	
}
