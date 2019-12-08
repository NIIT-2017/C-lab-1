#define _CRT_SECURE_NO_WARNINGS
#include"task1.h"
#include<stdio.h>

int main(void)
{
	char gender;
	float height, weight;

	printf("Enter your gender ('m' or 'w'):\n");
	while ((scanf("%c", &gender))==1 && (!(gender == 'm' || gender == 'w'))) //I use these cycles, becouse I wait to have correct data for thit code.
	{
		printf("Your gender is uncorrect!\nAlso enter your gender ('m' or 'w'):\n");
		while (getchar() != '\n')
			continue;
	}
	printf("Enter your height (for 'm' height > 100 sm, for 'w' height > 110 sm):\n");
	
	while ((scanf("%f", &height)!=1) ||
		(gender == 'm' && height < 100) || 
		(gender == 'w' && height < 110))
	{
		printf("Your height is uncorrect!\n"
			"Also enter your height (for 'm' height > 100 sm,"
			"for 'w' height > 110 sm):\n");
		while (getchar() != '\n')
			continue;
	}
	printf("Enter your weight (weight > 0 kg):\n");

	while ((scanf("%f", &weight)!=1) || (weight < 0))
	{
		printf("Your weight is uncorrect!\n"
			"Also enter your weight (weight > 0 kg):\n");
		while (getchar() != '\n')
			continue;
	}

	int result = getRecommendation(gender, height, weight); //It's a call of function for take result of analysis.
	if (result == -1)
		printf("Your weight is underweight! You can to gain a weight.\n");
	else if (result == 1)
		printf("Your weight is overweight! You can to lose a weight.\n");
	else if (result == 0)
		printf("Your weight is perfect!\n");
	printf("Goodbye!\n");
	return 0;
}