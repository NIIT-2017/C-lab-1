#include <stdio.h>

int getRecommendation(char gender, float height, float weight)
{

	switch (gender)
	{
	case 'm': case 'M':
		if (((int)height - 100) == (int)weight)
			return 0;
		else if (((int)height - 100) > (int)weight)
			return -1;
		else
			return 1;
		break;

	case 'w': case 'W':
		if (((int)height - 110) == (int)weight)
			return 0;
		else if (((int)height - 110) > (int)weight)
			return -1;
		else
			return 1;
		break;
	default:
		printf("Transgenders ain't tolerated. ");
		return 2;
		break;
	}



}
