#include "task1.h"
#include <stdio.h>

int main()
{
	char gender = 0;
	float height = 0, weight = 0;

	printf("Enter your weight in kg ");
	scanf("%f", &weight);
	printf("Enter your height in sm ");
	scanf("%f", &height);
	printf("Enter your sex (m or w) ");

	scanf("%c", &gender);
	
	int result1 = getRecommendation (gender, height, weight);
	if (result1 == 0)
		printf("You are normal\n");
	else if (result1 == +1)
		printf("You need to lose weight\n");
	else if (result1 == -1)
		printf("You need to get a weight\n");
	return 0;
}