#include "task1.h"

int getRecommendation(char gender, float height, float weight)
{
	int rezult = 2;
	if (gender == 'm')
	{
		if (weight < (height - 100) && (height - 100) > 0)
			rezult = -1;
		if (weight > (height - 100) && (height - 100) > 0)
			rezult = 1;
		if (weight == (height - 100) && (height - 100) > 0)
			rezult = 0;
	}
	if (gender == 'w')
	{
		if (weight < (height - 110) && (height - 100) > 0)
			rezult = -1;
		if (weight > (height - 110) && (height - 100) > 0)
			rezult = 1;
		if (weight == (height - 110) && (height - 100) > 0)
			rezult = 0;
	}

	return rezult;
}