#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"
#include "stdio.h"


int main() {

	float height = 0, weight = 0;
	char gender;
	printf("Enter your gender, m or w:\n");
	scanf("%c", &gender);
	printf("Enter your height:\n");
	scanf("%f", &height);
	printf("Enter your weight:\n");
	scanf("%f", &weight);
	int result = getRecommendation(gender, height, weight);
	if (result == 0)
		printf("Your weight is perfect\n");
	else if (result == -1)
		printf("Your weight is insufficient\n");
	else
	printf("Your weight is excessive\n");
}

