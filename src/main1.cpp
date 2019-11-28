#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"
#include <stdio.h>


int main()
{
	char gender;
	float height, weight;
	int recommendation;
	printf("enter your gender,height,weight\n");
	scanf("%c,%f,%f", &gender, &height, &weight);
	recommendation=getRecommendation(gender, height, weight);
	if (recommendation == -1)
		printf("small weight");
	else if(recommendation == 1)
		printf("big weight");
	else  
		printf("normal weight");
	return 0;
}