#include"task1.h"

int getRecommendation(char gender, float height, float weight)
{
	if ((gender == 'm')||(gender == 'M'))
		if (weight == (height - 100))
			return 0;
		else
			if (weight >= (height - 100))
				return 1;
			else
				return -1;
	else
		if (weight == (height - 110))
			return 0;
		else
			if (weight >= (height - 110))
				return 1;
			else
				return -1;
}