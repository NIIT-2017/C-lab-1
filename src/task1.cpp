#include <stdio.h>
#include "task1.h"
int getRecommendation(char gender, float height, float weight)

{
	float opp = 0;

	switch (gender)
	{
	case 'm':
		opp = height - 100;
		break;
	case 'w':
		opp = height - 110;
		break;
	}
	scanf("%f", &opp);
	
	int result = 0;
	
	if (opp > weight)
		result = +1;
	if (opp < weight)
		result = -1;	
	else 
		result = 0;
	
	return 0;
}