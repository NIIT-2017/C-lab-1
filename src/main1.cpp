#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"
#include <stdio.h>



int main()
{
	char gender=0;
	float height=0, weight=0;
	printf("Enter your gender m/w?\n");
	scanf("%c", &gender);
	printf("Enter your height?\n");
	scanf("%f", &height);
	printf("Enter your weight?\n");
	scanf("%f", &weight);
	int result=getRecommendation(gender, height, weight);
	if (result == 0)
		printf("Your weight is good!");
	else if (result == -1)
		printf("You need yo eat more!");
	else
		printf("You need to eat less!");
	return 0;
}