#include <stdio.h>
#include "task1.h"

void clean_stdin(void)
{
	int c;
	do {
		c = getchar();
	} while (c != '\n' && c != EOF);
}

int main()
{
	char gender = 0;
	float height = 0;
	float weight = 0;

	int result = 0;
	printf("Enter your gender (w/m): ");
	result = scanf("%c", &gender);
	if (result > 1 || result == 0 || gender != 'm' and gender != 'w')
	{
		printf("Invalid value!\n");
		clean_stdin();
		return 1;
	}

	printf("Enter your height: ");	
	result = scanf("%f", &height);
	if (result == 0 || height < 0)
	{
		printf("Invalid value!\n");
		clean_stdin();
		return 1;
	}

	printf("Enter your weight: ");
	result = scanf("%f", &weight);
	if (result == 0 || weight < 0)
	{
		printf("Invalid value!\n");
		clean_stdin();
		return 1;
	}

	result = getRecommendation(gender, height, weight);
	if (result == 1)
		printf("To lose weight\n");
	else if (result == -1)
		printf("To get fat\n");
	else
		printf("Weight normal\n");

	return 0;
}
