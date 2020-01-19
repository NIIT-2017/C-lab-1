// Clab1 task1

#include "task1.h"
#include <stdio.h>

int main()
{
	char gender;
	float height = 0;
	float weight = 0;
	
	puts("What is your gender? Please enter letter 'w' if you are woman or 'm if you are men. \n");
	scanf ("%c", &gender);
	puts("Now enter your height in centimeter, and weight in kilogram.\n");
	scanf("%f %f", &height, &weight);

	int result = getRecommendation(gender, height, weight);


	if (result == -1)
	{
		puts("Your weight is low.");
	}

	else if (result == 1)
	{
		puts("Your weight is high.");
	}

	else if (result == 0)
	{
		puts("Your weight is normal.");
	}
	
	else if (result == 10)
	{
		puts("You are wrong.");
	}


	return 0;
}