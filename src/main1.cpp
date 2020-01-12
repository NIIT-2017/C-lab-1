#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"
#include <stdio.h>

int main()
{
	char gender;
	float height = 0, weight = 0;
	int rezult = 2;
	printf("Enter your gender (m-man, w-woman)\n");
	scanf("%c", &gender);
	printf("Enter your heigh\n"); 
	scanf("%fl", &height);
	printf("Enter your weight\n");
	scanf("%fl", &weight);
	rezult = getRecommendation(gender, height, weight);
	if (rezult == -1)
		printf("you should gain weight\n");
	if (rezult == 1) 
		printf("You gotta lose weight\n");
	if (rezult == 0)
		printf("Your weight is perfect\n");
	if (rezult == 2)
		printf("incorrect input\n");
}