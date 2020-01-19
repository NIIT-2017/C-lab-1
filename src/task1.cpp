#include "task1.h"

int getRecommendation(char gender, float height, float weight)
{
	float ideal = 0;
	if (gender == 'w')
	{
		ideal = height - 110;
	}
	else if (gender == 'm')
	{
		ideal = height - 100;
	}
	if (weight > ideal)
		return 1;
	else if (weight < ideal)
		return -1;
	else
		return 0;

}