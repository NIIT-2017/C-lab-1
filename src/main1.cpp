#include "task1.h"
#include <stdio.h>

int main()
{

	char gender = 'w';
	float height = 0, weight = 0;
    
	printf("Enter your sex (m or w) ");
	scanf("%c", &gender);
	printf("Enter your weight in kg ");
	scanf("%f", &weight);
	printf("Enter your height in sm ");
	scanf("%f", &height);
	
	int result = getRecommendation (gender, height, weight);
	if (result == 0)
		printf("You are normal\n");
	else if (result == +1)
		printf("You need to lose weight\n");
	else if (result == -1)
	return 0;
}