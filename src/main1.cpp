#include <stdio.h>
#include "task1.h"
#include <Windows.h>

int main()
{
	char gender = 0;
	float height = 0;
	float weight = 0;

	printf("Enter your gender 'm' or 'w': ");

	scanf("%c", &gender);

	printf("Enter your height:");

	scanf("%f", &height);

	printf("Enter your weight:");

	scanf("%f", &weight);

	int result = getRecommendation(gender, height, weight);

	if (result == 0)
		printf("Your weight is normall");

	if (result == -1)
		printf("Recommend more eat");

	if (result == 1)
		printf("Recommend to have a diet");

	Sleep(500);

	return 0;





}
