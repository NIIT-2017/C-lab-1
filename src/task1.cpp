#include"task1.h"
int getRecommendation(char gender, float height, float weight)
{
	if (gender == 'm') //it's a check of weight for gender 'm'.
	{
		if ((height - 100) > weight)
			return -1;
		else if ((height - 100) < weight)
			return 1;
		else if ((height - 100) == weight)
			return 0;
	}

	else if (gender == 'w') //it's a check of weight for gender 'w'.
	{
		if ((height - 110) > weight)
			return -1;
		else if ((height - 110) < weight)
			return 1;
		else if ((height - 110) == weight)
			return 0;
	}
}