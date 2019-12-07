#include <stdio.h>
#include "task1.h"
int getRecommendation(char gender, float height, float weight)

{
	float opp = 0;

	if (gender == 'm')
	{
		opp = height - 100;
		if (opp < weight)
			return 1;
		else if (opp > weight)
			return -1;
		else
			return 0;
	}
	else if (gender == 'w')
		opp = height - 110;
	if (opp < weight)
		return 1;
	else if (opp > weight)
		return -1;
	else
		return 0;
}

	
