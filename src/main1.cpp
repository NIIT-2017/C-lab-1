#include <stdio.h>
#include "task1.h"

int main()
{
	char gender = ' ';
	float h = 0;
	float w = 0;
	printf("Enter your gender:\n");
	printf("Exemple: (m or w) \n");
	scanf("%c", &gender);
	if ((gender != 'm') && (gender != 'w') && (gender != 'M') && (gender != 'W'))
	{
		printf("Unknown value.\n");
		return -1;
	}
	else 
	{
		printf("Enter your height and weight:\n");
		printf("Exemple: (170/70) \n");
	}	
	scanf("%f/%f", &h, &w);
	if ((h < 140) || (h > 270) || (w < 30) || (w > 230))
	{
		printf("Unknown value.\n");
		return 0;
	}
	else
	{
		switch (getRecommendation(gender, h, w))
		{
		case -1:
			printf("Your weight is insufficient.\n");
			break;
		case 0:
			printf("Your weight is perfect!\n");
			break;
		case 1:
			printf("Your weight is overweight.\n");
			break;
		}
	}
	return 0;
}