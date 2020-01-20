#define _CRT_SECURE_NO_WARNINGS

#include "task1.h"
#include <stdio.h>



int main()
{
	char gender = 'm';
	float (height) = 0;
	float (weight) = 0;
	printf("Enter your gender:\n");
	scanf("%c", &gender);
	printf("Enter your height:\n");
	scanf("%f", &height);
	printf("Enter your weight:\n");
	scanf("%f", &weight);
	int recommendations = getRecommendation(gender, height, weight);
	switch (recommendations)
	{
	case 1:
		printf("You are overweight\n");
		break;
	case -1:
		printf("You are underweight\n");
		break;
	case 0:
		printf("You weight is healthy\n");
	}
	return 0;
}