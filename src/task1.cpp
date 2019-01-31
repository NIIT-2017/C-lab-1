#include "task1.h"
#define _USE_MATH_DEFINES
#include <stdio.h>

//»звин€юсь за транслит

int getRecommendation(char gender, float height, float weight)
{


	if (gender = 'm' && (height - 100)<weight)
	{
		printf("Ves izbytochen!\nPohudet\n");
		return 1;
	}
	else if (gender = 'm' && (height - 100)>weight)
	{
		printf("Ves nedostatochen!\nPotolstet\n");
		return 1;
	}
	else

		printf("Ideal\nNorm\n");

	return 0;

	if (gender = 'w' && (height - 110) < weight)
	{
		printf("Ves izbytochen!\nPohudet");
		return 1;
	}
	else if (gender = 'w' && (height - 110) > weight)
	{

		printf("Ves nedostatochen!\nPotolstet\n");
		return 1;
	}
	else

		printf("Ideal\nNorm\n");

	return 0;

}
