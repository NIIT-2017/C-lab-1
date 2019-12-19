#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char gender = ' ';
	float h = 0;
	float w = 0;
	printf("What is your gender: m - man vs w - woman?\n");
	scanf("%c", &gender);
	if ((gender != 'm') && (gender != 'w') && (gender != 'M') && (gender != 'W'))
	{
		printf("Unknown value.\n");
		return -1;
	}
	else
		printf("What is your height and weight: (height/weight)?\n");
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