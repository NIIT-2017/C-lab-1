#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"





int main()
{
	char gender;
	float height, weight;
	printf("what is your gender? Enter M or W \n");
	scanf("%c", &gender);
	printf("what is your height?\n");
	scanf("%f", &height);
	printf("what is your weight?\n");
	scanf("%f", &weight);
	int x = getRecommendation(gender, height, weight);

	if (x == 0)
		printf("weight is ideal\n");
	else if (x == -1)
		printf("weight is too little\n ");
	else printf("weight is too much\n");

	return 0;
}

