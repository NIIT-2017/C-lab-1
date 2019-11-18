#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"
#include <stdio.h>
int main()
{
	char gender;
	float height, weight;
	printf("What your gender? m or w\n");
	scanf("%c", &gender);
	printf("Wath your height?\n");
	scanf("%f", &height);
	printf("Wath your weight?\n");
	scanf("%f", &weight);

	printf(" Your gender %c\n ", gender);
	printf(" Your height %f\n", height);
	printf(" Your weight %f\n ", weight);

	int result = getRecommendation(gender, height, weight);
	if (result == 0)
	{
		printf("ideal weight\n");
	}
	else if (result == 1)
	{
		printf("overweight\n");
	}
	else
	{
		printf("underweight\n");
	}
	return 0;

}