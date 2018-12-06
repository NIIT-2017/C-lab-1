#include <stdio.h>
#include "task1.h"


int main()
{
	char gender ='w';
	float height, weight;
		printf("Enter your gender:\n");
	scanf("%c", &gender);
		printf("Enter your height:\n");
	scanf("%f", &height);
	printf("Enter your weight:\n");
	scanf("%f", &weight);
	if (gender == 'w' || gender == 'm')
	   getRecommendation(gender, height, weight);
	else
		printf("Error");
		return 0;
}