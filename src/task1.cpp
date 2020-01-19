#include <stdio.h>

int getRecommendation(char gender, float height, float weight)

	{
	int weight1;
	float good_weight;
	if(gender == 'w')
		weight1 =110;
	else
		weight1 =100;
	good_weight = height - weight1;
	if (good_weight < weight)
		return 1;
	else if (good_weight > weight)
		return -1;
	else
		return 0;
	


}