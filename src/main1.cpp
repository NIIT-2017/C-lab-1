#include <stdio.h>
#include "task1.h"

int main()
{
	char gender;
	float height = 0;
	float weight = 0;
	printf("Enter your gender:'w' or 'm'?: ");
	scanf("%c", &gender);
	printf("Enter your height: ");
	scanf("%f", &height);
	printf("Enter your weight: ");
	scanf("%f", &weight);
	int result = getRecommendation(gender, height, weight);
	if (result == 1)
		printf("Your weight is overweight!\n");
	if (result == -1)
		printf("Your weight is low!\n");
	if (result == 0)
		printf("Your weight is ideal!\n");
	return 0;
	}