#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main()
{
	char gender = 0; float weight = 0, height = 0;

	printf("Enter your gender:", gender);
	scanf("%c", &gender);
	if (gender != 'm' && gender != 'w')
	{
		printf("Gender is entered incorrectly\n");
		return 1;
	}
	printf("Enter your weight:", weight);
	scanf("%f", &weight);
	printf("Enter yuor height:");
	scanf("%f", &height);

	int result = getRecommendation(gender, height, weight);

	if (result == 0)
		printf("Your weight  is perfect\n");
	if (result == -1)
		printf("You need to get better\n", getRecommendation);
	if (result == 1)
		printf("You need to lose weight\n", getRecommendation);

	return 0;
}