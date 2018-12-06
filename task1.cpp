#include <stdio.h>

int getRecommendation(char gender, float height, float weight)
{
	float a = height, b = weight;
	float c = 100;
	if (gender == 'w')
		c += 10;

	if ((a - c) > b)
	{
		puts("Get fat!\n");
		return -1;
	}
	else if ((a - c) < b)
	{
		puts("lose weight!\n");
		return 1;
	}
	else
	{
		puts("Normal\n");
		return 0;
	}
}