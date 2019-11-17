#include "task1.cpp"
#include <stdio.h>

void clean_stdin(void)
{
	int c;
	do
	{
		c = getchar();
	} while (c != '\n' && c != EOF);
}

int main() // main function
{
	char gender = 'z';
	float height = 0, weight = 0;
	while (1) // the cycle of the input gender
	{
		printf("Enter your gender (m or w): ");
		scanf("%c", &gender);
		if (gender != 'm' && gender != 'M' && gender != 'w' && gender != 'W') // validating the input
		{
			printf("Incorrect answer, only 'm' or 'w'!\n");
			clean_stdin();
		}
		else
			break;
	}
	while (1) // the cycle of the input height
	{
		printf("Enter your height in cm: ");
		scanf("%f", &height);
		if (height <= 0) // validating the input
		{
			printf("Incorrect answer, only numbers and positive!\n");
			clean_stdin();
		}
		else
			break;
	}
	while (1) // the cycle of the input weight
	{
		printf("Enter your weight in kg: ");
		scanf("%f", &weight);
		if (weight <= 0) // validating the input
		{
			printf("Incorrect answer, only numbers and positive!\n");
			clean_stdin();
		}
		else
			break;
	}
	int recom = 0;
	clean_stdin();
	recom = getRecommendation(gender, height, weight); // the function call to determine the weight ratio
	if (recom < 0)
		printf("Your weight is insufficient\n");
	else if (recom > 0)
		printf("Your weight is excessive\n");
	else
		printf("Your weight is perfect\n");
	return 0;
}