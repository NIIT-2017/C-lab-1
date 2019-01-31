#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()

{

	float height = 0;
	float weight = 0;
	char gender = 0;

	printf("Enter gender (m or w):");
	scanf("%c", &gender);
	printf("Enter height:");
	scanf("%f", &height);
	printf("Enter weight:");
	scanf("%f", &weight);

	if ('m' == gender || 'w' == gender)

		getRecommendation(gender, height, weight);
	else
		printf("Error\n");


	return 0;
}




